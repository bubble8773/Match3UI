// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WidgetBlueprint.h"

#include "Coord.h"
#include "Direction.h"
#include "TileManager.h"
#include "Tile.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MATCH3UI_API UTile : public UWidgetBlueprint
{
	GENERATED_BODY()
public: 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTile* newTileType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//UCoord* Coord;
		FVector Coord;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<UDirection*, UTile*> neighbours;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTileManager* tileMapRef;*/

	UFUNCTION(BlueprintCallable)
		UTile* GetNextTile(APlayerController* player, UTile* from);

	UFUNCTION(BlueprintCallable)
		bool CanPlayerEnter();

	UFUNCTION(BlueprintCallable)
		void SetNeighbour(UDirection* direction, UTile* NewNeighbour);

	/*UFUNCTION(BlueprintCallable)
		void FindNeighbours(TArray<UDirection*> dirArray, UCoord* lcoord);*/
		
};
