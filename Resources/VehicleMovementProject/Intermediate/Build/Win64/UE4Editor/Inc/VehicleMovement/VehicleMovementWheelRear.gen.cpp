// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleMovement/VehicleMovementWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleMovementWheelRear() {}
// Cross Module References
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UVehicleMovementWheelRear_NoRegister();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UVehicleMovementWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_VehicleMovement();
// End Cross Module References
	void UVehicleMovementWheelRear::StaticRegisterNativesUVehicleMovementWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UVehicleMovementWheelRear_NoRegister()
	{
		return UVehicleMovementWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UVehicleMovementWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicleMovementWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleMovementWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VehicleMovementWheelRear.h" },
		{ "ModuleRelativePath", "VehicleMovementWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicleMovementWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleMovementWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVehicleMovementWheelRear_Statics::ClassParams = {
		&UVehicleMovementWheelRear::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVehicleMovementWheelRear_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVehicleMovementWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehicleMovementWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVehicleMovementWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVehicleMovementWheelRear, 2794562122);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehicleMovementWheelRear(Z_Construct_UClass_UVehicleMovementWheelRear, &UVehicleMovementWheelRear::StaticClass, TEXT("/Script/VehicleMovement"), TEXT("UVehicleMovementWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleMovementWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
