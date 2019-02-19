// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleMovement/SpeedCapMod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedCapMod() {}
// Cross Module References
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_USpeedCapMod_NoRegister();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_USpeedCapMod();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnStatMod();
	UPackage* Z_Construct_UPackage__Script_VehicleMovement();
// End Cross Module References
	void USpeedCapMod::StaticRegisterNativesUSpeedCapMod()
	{
	}
	UClass* Z_Construct_UClass_USpeedCapMod_NoRegister()
	{
		return USpeedCapMod::StaticClass();
	}
	struct Z_Construct_UClass_USpeedCapMod_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MBoostedSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MBoostedSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpeedCapMod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnStatMod,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedCapMod_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpeedCapMod.h" },
		{ "ModuleRelativePath", "SpeedCapMod.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedCapMod_Statics::NewProp_MBoostedSpeed_MetaData[] = {
		{ "Category", "SpeedCapMod" },
		{ "ModuleRelativePath", "SpeedCapMod.h" },
		{ "ToolTip", "\\brief The amount of boosted speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpeedCapMod_Statics::NewProp_MBoostedSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MBoostedSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(USpeedCapMod, MBoostedSpeed), METADATA_PARAMS(Z_Construct_UClass_USpeedCapMod_Statics::NewProp_MBoostedSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpeedCapMod_Statics::NewProp_MBoostedSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpeedCapMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedCapMod_Statics::NewProp_MBoostedSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpeedCapMod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeedCapMod>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpeedCapMod_Statics::ClassParams = {
		&USpeedCapMod::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_USpeedCapMod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USpeedCapMod_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USpeedCapMod_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpeedCapMod_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpeedCapMod()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpeedCapMod_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpeedCapMod, 3344275567);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpeedCapMod(Z_Construct_UClass_USpeedCapMod, &USpeedCapMod::StaticClass, TEXT("/Script/VehicleMovement"), TEXT("USpeedCapMod"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpeedCapMod);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
