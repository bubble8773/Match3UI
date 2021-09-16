// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UWTile.h"
#include "WTileManager.generated.h"

/**
 * 
 */
UCLASS()
class MATCH3UI_API UWTileManager : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int width;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int height;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UUWTile* > tiles;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float tileSize;

	UFUNCTION(BlueprintCallable)
		int CoordToIndex(FVector2D coord);//UCoord* coord);

	UFUNCTION(BlueprintCallable)
		FVector2D IndexToCoord(int index);//UCoord* result);

	UFUNCTION(BlueprintCallable)
		//	void ReSetMap(TArray<FVector> spawnPoints);
	   TArray<FVector> CreateMap();

	UFUNCTION(BlueprintCallable)
		bool IsOnBorder(FVector2D coord);//UCoord* coord);

	UFUNCTION(BlueprintCallable)
		bool IsCoordInRange(FVector2D coord);//UCoord* coord);

	//UFUNCTION(BlueprintCallable)
	//	UUWTile* GetTileAtCoord(FVector2D coord);//UCoord* coord);
	//
};
