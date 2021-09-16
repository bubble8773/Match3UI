// Fill out your copyright notice in the Description page of Project Settings.


#include "WTileManager.h"

int UWTileManager::CoordToIndex(FVector2D coord)
{
	return abs(coord.X + coord.Y * width);
}

FVector2D UWTileManager::IndexToCoord(int index)
{
	return FVector2D(width % index, width / index);
}

TArray<FVector> UWTileManager::CreateMap()
{
	TArray<FVector> spawnPoints = TArray<FVector>();
	for (int j = 0; j <= height; j++)
	{
		for (int i = 0; i <= width; i++)
		{
			spawnPoints.Add(FVector(j* tileSize, i*tileSize, 0));
		}
	}
	return spawnPoints;
}

bool UWTileManager::IsOnBorder(FVector2D coord)
{
	return coord.X < 0 || coord.X == width - 1 || coord.Y < 0 || coord.Y == height - 1;
}

bool UWTileManager::IsCoordInRange(FVector2D coord)

{
	return !(coord.X < 0 || coord.X >= width || coord.Y < 0 || coord.Y >= height);
}

//UUWTile* UWTileManager::GetTileAtCoord(FVector2D coord)
//{
//	return tiles[CoordToIndex(coord)];
//}
