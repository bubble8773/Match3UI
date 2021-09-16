// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "Coord.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MATCH3UI_API UCoord : public UUserDefinedStruct
{
	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int X;

	   UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Y;
	
};
