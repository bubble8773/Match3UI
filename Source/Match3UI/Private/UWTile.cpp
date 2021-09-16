// Fill out your copyright notice in the Description page of Project Settings.


#include "UWTile.h"

UUWTile* UUWTile::GetNextTile(APlayerController* player, UUWTile* from)
{
	return nullptr;
}

bool UUWTile::CanPlayerEnter()
{
	return false;
}

void UUWTile::SetNeighbour(TSubclassOf<UDirection> direction, TSubclassOf<UUWTile> NewNeighbour)
{
	//neighbours.Add(direction, NewNeighbour);
}

//void UUWTile::FindNeighbours()
//{
//}



