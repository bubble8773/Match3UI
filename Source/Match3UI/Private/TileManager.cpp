// Fill out your copyright notice in the Description page of Project Settings.


#include "TileManager.h"
#include "..\Public\TileManager.h"


//int UTileManager::CoordToIndex(UCoord* coord)
//{	
//	return coord->X + coord->Y * width;
//}
//
//UCoord* UTileManager::IndexToCoord(int index, UCoord* result)
//{
//	result->X = index % width;
//	result->Y = index / width;
//	return result;
//}

int UTileManager::CoordToIndex(FVector coord)
{
	return coord.X+ coord.Y * width;
}

FVector UTileManager::IndexToCoord(int index)
{
	return FVector(width%index, width/index, 0.0f);
}


void UTileManager::ReSetMap(TArray<FVector> spawnPoints)
{
	for (int j = 0; j <= height; j++)
	{
		for (int i = 0; i <= width; i++)
		{
			spawnPoints.Add(FVector(j, i, 0));
		}
	}
}

bool UTileManager::IsOnBorder(FVector coord)
{
	return coord.X < 0 || coord.X == width - 1 || coord.Y < 0 || coord.Y == height - 1;
}

bool UTileManager::IsCoordInRange(FVector coord)
{
	return coord.X < 0 || coord.X >= width || coord.Y < 0 || coord.Y >= height;
}

UTile* UTileManager::GetTileAtCoord(FVector coord)
{
	return tiles[CoordToIndex(coord)];;
}

//bool UTileManager::IsOnBorder(UCoord* coord)
//{
//	return coord->X < 0 || coord->X == width-1 || coord->Y < 0 || coord->Y == height-1;
//}
//
//bool UTileManager::IsCoordInRange(UCoord* coord)
//{	
//	return coord->X < 0 || coord->X >= width || coord->Y < 0 || coord->Y >= height;
//}

//UTile* UTileManager::GetTileAtCoord(UCoord* coord)
//{	
//	return tiles[CoordToIndex(coord)];
//}
