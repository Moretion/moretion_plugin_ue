// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <MotionData.h>
#include "UObject/NoExportTypes.h"
#include "DataManager.generated.h"

/**
 * 
 */
UCLASS()
class MOTIONSUIT_API UDataManager : public UObject
{
	GENERATED_BODY()
public:
    UDataManager();
    static UDataManager* GetInstance();

    void Refresh(TArray<TSharedPtr<FJsonValue>> jsonss);
    FMotionData* GetMotionData(FString actorName);
    void ClearMotionDatas();

private:
    static UDataManager* instance;
    TMap<FString, FMotionData> dataMap;
    FCriticalSection refreshMutex;
};
