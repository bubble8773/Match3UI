
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Direction.h"
#include "WTileManager.h"
#include "UWTile.generated.h"

/**
 * 
 */
UCLASS()
class MATCH3UI_API UUWTile : public UUserWidget
{
	GENERATED_BODY()

public: 
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UUWTile* newTileType;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite)//, ExposeOnSpawn = "true")
		FVector2D Coord;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<UDirection*, UUWTile*> neighbours;*/

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf < UWTileManager> tileMapRef;*/

	UFUNCTION(BlueprintCallable)
		UUWTile* GetNextTile(APlayerController* player, UUWTile* from);

	UFUNCTION(BlueprintCallable)
		bool CanPlayerEnter();

	UFUNCTION(BlueprintCallable)
		void SetNeighbour(TSubclassOf < UDirection> direction, TSubclassOf < UUWTile> NewNeighbour);

	/*UFUNCTION(BlueprintImplementableEvent)
	void FindNeighbours();*/

	
};
