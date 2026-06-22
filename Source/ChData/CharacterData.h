// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterData.generated.h"

/**
 * 
 */
UCLASS()
class CHDATA_API UCharacterData : public UObject
{
	GENERATED_BODY()
public:
	UCharacterData();
	int32 MaxHP;
	int32 CurrentHP;
	float MaxSpeed;
	float CurrentSpeed;
	FString CharacterName;
};
