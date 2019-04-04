// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerTemplate/MultiplayerTemplateGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerTemplateGameModeBase() {}
// Cross Module References
	MULTIPLAYERTEMPLATE_API UClass* Z_Construct_UClass_AMultiplayerTemplateGameModeBase_NoRegister();
	MULTIPLAYERTEMPLATE_API UClass* Z_Construct_UClass_AMultiplayerTemplateGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MultiplayerTemplate();
// End Cross Module References
	void AMultiplayerTemplateGameModeBase::StaticRegisterNativesAMultiplayerTemplateGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMultiplayerTemplateGameModeBase_NoRegister()
	{
		return AMultiplayerTemplateGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerTemplateGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerTemplateGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerTemplateGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MultiplayerTemplateGameModeBase.h" },
		{ "ModuleRelativePath", "MultiplayerTemplateGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerTemplateGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerTemplateGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerTemplateGameModeBase_Statics::ClassParams = {
		&AMultiplayerTemplateGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerTemplateGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerTemplateGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerTemplateGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultiplayerTemplateGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiplayerTemplateGameModeBase, 2274241978);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiplayerTemplateGameModeBase(Z_Construct_UClass_AMultiplayerTemplateGameModeBase, &AMultiplayerTemplateGameModeBase::StaticClass, TEXT("/Script/MultiplayerTemplate"), TEXT("AMultiplayerTemplateGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerTemplateGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
