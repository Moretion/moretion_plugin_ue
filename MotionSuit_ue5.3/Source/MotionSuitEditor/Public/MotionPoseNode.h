// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_Base.h"
#include "MotionPose.h"
#include "MotionPoseNode.generated.h"

/**
 * 
 */
UCLASS()
class MOTIONSUITEDITOR_API UMotionPoseNode : public UAnimGraphNode_Base
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Settings)
	FMotionPose node;
};
