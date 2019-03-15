// Fill out your copyright notice in the Description page of Project Settings.

#include "GUIDDictionary.h"
#include "Kismet/KismetGuidLibrary.h"

FGuid UGUIDDictionary::GetGUID(const TSubclassOf<UPawnStatMod>& ModType)
{
	static TMap<FString, FGuid> Dictionary;

	FString Name = ModType->GetDefaultObject()->GetName();

	if (!Dictionary.Contains(Name))
	{
		Dictionary.Emplace(Name, UKismetGuidLibrary::NewGuid());
	}

	return Dictionary[Name];
}
