// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleMovement/VehicleMovementWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleMovementWheelFront() {}
// Cross Module References
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UVehicleMovementWheelFront_NoRegister();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UVehicleMovementWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_VehicleMovement();
// End Cross Module References
	void UVehicleMovementWheelFront::StaticRegisterNativesUVehicleMovementWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UVehicleMovementWheelFront_NoRegister()
	{
		return UVehicleMovementWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UVehicleMovementWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicleMovementWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleMovementWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VehicleMovementWheelFront.h" },
		{ "ModuleRelativePath", "VehicleMovementWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicleMovementWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleMovementWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVehicleMovementWheelFront_Statics::ClassParams = {
		&UVehicleMovementWheelFront::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVehicleMovementWheelFront_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVehicleMovementWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehicleMovementWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVehicleMovementWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVehicleMovementWheelFront, 950295893);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehicleMovementWheelFront(Z_Construct_UClass_UVehicleMovementWheelFront, &UVehicleMovementWheelFront::StaticClass, TEXT("/Script/VehicleMovement"), TEXT("UVehicleMovementWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleMovementWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
