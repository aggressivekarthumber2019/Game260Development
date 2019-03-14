// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleMovement/Items/Mods/SpinOutMod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinOutMod() {}
// Cross Module References
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_USpinOutMod_NoRegister();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_USpinOutMod();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnStatMod();
	UPackage* Z_Construct_UPackage__Script_VehicleMovement();
// End Cross Module References
	void USpinOutMod::StaticRegisterNativesUSpinOutMod()
	{
	}
	UClass* Z_Construct_UClass_USpinOutMod_NoRegister()
	{
		return USpinOutMod::StaticClass();
	}
	struct Z_Construct_UClass_USpinOutMod_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpinOutSpeedReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpinOutSpeedReduction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpinOutMod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnStatMod,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinOutMod_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Mods/SpinOutMod.h" },
		{ "ModuleRelativePath", "Items/Mods/SpinOutMod.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinOutMod_Statics::NewProp_SpinOutSpeedReduction_MetaData[] = {
		{ "Category", "SpinOutMod" },
		{ "ModuleRelativePath", "Items/Mods/SpinOutMod.h" },
		{ "ToolTip", "\\brief The amount of Speed after being Spun out" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinOutMod_Statics::NewProp_SpinOutSpeedReduction = { UE4CodeGen_Private::EPropertyClass::Float, "SpinOutSpeedReduction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USpinOutMod, SpinOutSpeedReduction), METADATA_PARAMS(Z_Construct_UClass_USpinOutMod_Statics::NewProp_SpinOutSpeedReduction_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinOutMod_Statics::NewProp_SpinOutSpeedReduction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpinOutMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinOutMod_Statics::NewProp_SpinOutSpeedReduction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpinOutMod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpinOutMod>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpinOutMod_Statics::ClassParams = {
		&USpinOutMod::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A0u,
		nullptr, 0,
		Z_Construct_UClass_USpinOutMod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USpinOutMod_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USpinOutMod_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpinOutMod_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpinOutMod()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpinOutMod_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpinOutMod, 3074239079);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpinOutMod(Z_Construct_UClass_USpinOutMod, &USpinOutMod::StaticClass, TEXT("/Script/VehicleMovement"), TEXT("USpinOutMod"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpinOutMod);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
