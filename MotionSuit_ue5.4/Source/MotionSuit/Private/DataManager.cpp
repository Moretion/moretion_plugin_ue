// Fill out your copyright notice in the Description page of Project Settings.


#include "DataManager.h"

UDataManager* UDataManager::instance = nullptr;

UDataManager::UDataManager()
{
	ClearMotionDatas();
}

UDataManager* UDataManager::GetInstance()
{
	if (!instance)
	{
		// 如果实例尚未创建，创建一个新的实例
		instance = NewObject<UDataManager>();
		instance->AddToRoot(); // 防止被垃圾回收
	}
	return instance;
}

void UDataManager::Refresh(TArray<TSharedPtr<FJsonValue>> jsons)
{
	FScopeLock lock(&refreshMutex);
	for (size_t i = 0; i < jsons.Num(); i++)
	{
		TSharedPtr<FJsonObject> deivce = jsons[i]->AsObject();
		FMotionData data = FMotionData(deivce);
		if (data.IsUsable())
		{
			FString actorName = data.GetActorName();
			if (!dataMap.Contains(actorName))
				dataMap.Add(actorName, data);
			else
				dataMap[actorName] = data;
		}
	}
}

FMotionData* UDataManager::GetMotionData(FString actorName)
{
	FScopeLock lock(&refreshMutex);
	//名字留空时取数据表中第一个角色数据
	if (actorName.IsEmpty() && !dataMap.IsEmpty())
	{
		auto iterator = dataMap.CreateIterator();
		return &iterator->Value;
	}

	if (!dataMap.Contains(actorName))
		return nullptr;

	return &dataMap[actorName];
}

void UDataManager::ClearMotionDatas()
{
	dataMap.Empty();
}