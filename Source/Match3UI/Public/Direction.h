// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Coord.h"
#include "Direction.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class MATCH3UI_API UDirection : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//UCoord* DDelta;
		FVector2D DDelta;
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UCoord> DDelta1;*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRotator DRotation;
	
	//UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite)
		//TSubclassOf<UDirection> OppositeDirection;*/
		//UDirection* OppositeDirection = Cast<UDirection>(this);
	//class UDirection* OppositeDirection;
	
};
