// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterData.h"

UCharacterData::UCharacterData():MaxHP(100),MaxSpeed(700.f)
{
	CurrentHP = MaxHP;
	CurrentSpeed = MaxSpeed;
	CharacterName = TEXT("CharacterName");
}
