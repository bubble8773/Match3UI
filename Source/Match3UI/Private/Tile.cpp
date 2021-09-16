// Fill out your copyright notice in the Description page of Project Settings.


#include "Tile.h"
#include "..\Public\Tile.h"
//#include "..\Public\Tile.h"


UTile* UTile::GetNextTile(APlayerController* player, UTile* from)
{
	return nullptr;
}

bool UTile::CanPlayerEnter()
{
	return false;
}

void UTile::SetNeighbour(UDirection* direction, UTile* NewNeighbour)
{
	neighbours.Add(direction, NewNeighbour);
}

//void UTile::FindNeighbours(TArray<UDirection*> dirArray, UCoord* lcoord)
//{
//		for (int i = 0; i < dirArray.Num(); i++)
//	{
//		lcoord->X = dirArray[i]->DDelta->X + Coord->X;
//		lcoord->Y =	dirArray[i]->DDelta->Y + Coord->Y;
//
//		if (tileMapRef->IsCoordInRange(lcoord))
//		{
//			if (IsValid(tileMapRef->GetTileAtCoord(lcoord))) 
//			{
//				neighbours.Add(dirArray[i], tileMapRef->GetTileAtCoord(lcoord));
//
//			}
//			
//		}
//	}
//}


