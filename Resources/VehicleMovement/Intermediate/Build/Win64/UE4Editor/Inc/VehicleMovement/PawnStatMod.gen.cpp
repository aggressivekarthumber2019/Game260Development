// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleMovement/PawnStatMod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnStatMod() {}
// Cross Module References
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnStatMod_NoRegister();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnStatMod();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VehicleMovement();
// End Cross Module References
	void UPawnStatMod::StaticRegisterNativesUPawnStatMod()
	{
	}
	UClass* Z_Construct_UClass_UPawnStatMod_NoRegister()
	{
		return UPawnStatMod::StaticClass();
	}
	struct Z_Construct_UClass_UPawnStatMod_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MMaxTimeMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MMaxTimeMS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MMaxStackCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MMaxStackCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnStatMod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStatMod_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PawnStatMod.h" },
		{ "ModuleRelativePath", "PawnStatMod.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxTimeMS_MetaData[] = {
		{ "Category", "PawnStatMod" },
		{ "ModuleRelativePath", "PawnStatMod.h" },
		{ "ToolTip", "\\brief The maximum time of this mod in milliseconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxTimeMS = { UE4CodeGen_Private::EPropertyClass::Float, "MMaxTimeMS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UPawnStatMod, MMaxTimeMS), METADATA_PARAMS(Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxTimeMS_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxTimeMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxStackCount_MetaData[] = {
		{ "Category", "PawnStatMod" },
		{ "ModuleRelativePath", "PawnStatMod.h" },
		{ "ToolTip", "\\brief Number of maximum stacks" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxStackCount = { UE4CodeGen_Private::EPropertyClass::Int, "MMaxStackCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UPawnStatMod, MMaxStackCount), METADATA_PARAMS(Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxStackCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxStackCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStatMod_Statics::NewProp_guid_MetaData[] = {
		{ "Category", "PawnStatMod" },
		{ "ModuleRelativePath", "PawnStatMod.h" },
		{ "ToolTip", "\\brief Unique identifier" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPawnStatMod_Statics::NewProp_guid = { UE4CodeGen_Private::EPropertyClass::Int, "guid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UPawnStatMod, guid), METADATA_PARAMS(Z_Construct_UClass_UPawnStatMod_Statics::NewProp_guid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnStatMod_Statics::NewProp_guid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnStatMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxTimeMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxStackCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnStatMod_Statics::NewProp_guid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnStatMod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnStatMod>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnStatMod_Statics::ClassParams = {
		&UPawnStatMod::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UPawnStatMod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPawnStatMod_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPawnStatMod_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPawnStatMod_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnStatMod()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnStatMod_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnStatMod, 3369452378);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnStatMod(Z_Construct_UClass_UPawnStatMod, &UPawnStatMod::StaticClass, TEXT("/Script/VehicleMovement"), TEXT("UPawnStatMod"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnStatMod);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
