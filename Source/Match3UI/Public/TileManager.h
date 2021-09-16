// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WidgetBlueprint.h"
#include "Tile.h"
#include "TileManager.generated.h"


/**
 * 
 */
UCLASS(Blueprintable)
class MATCH3UI_API UTileManager : public UWidgetBlueprint
{
	GENERATED_BODY()

public: 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int width; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int height;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UTile* > tiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float tileSize;

	UFUNCTION(BlueprintCallable)
		int CoordToIndex(FVector coord);//UCoord* coord);

	UFUNCTION(BlueprintCallable)
		FVector IndexToCoord(int index);//UCoord* result);

	UFUNCTION(BlueprintCallable)
		void ReSetMap(TArray<FVector> spawnPoints);

	UFUNCTION(BlueprintCallable)
		bool IsOnBorder(FVector coord);//UCoord* coord);

	UFUNCTION(BlueprintCallable)
		bool IsCoordInRange(FVector coord);//UCoord* coord);

	UFUNCTION(BlueprintCallable)
	   UTile* GetTileAtCoord(FVector coord);//UCoord* coord);

};     