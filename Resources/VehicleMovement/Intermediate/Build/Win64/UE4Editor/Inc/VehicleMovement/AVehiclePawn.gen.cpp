// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleMovement/AVehiclePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAVehiclePawn() {}
// Cross Module References
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_AAVehiclePawn_NoRegister();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_AAVehiclePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_VehicleMovement();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AAVehiclePawn::StaticRegisterNativesAAVehiclePawn()
	{
	}
	UClass* Z_Construct_UClass_AAVehiclePawn_NoRegister()
	{
		return AAVehiclePawn::StaticClass();
	}
	struct Z_Construct_UClass_AAVehiclePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelBL_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WheelBL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelBR_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WheelBR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelFL_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WheelFL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelFR_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WheelFR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelBaseBL_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WheelBaseBL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelBaseBR_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WheelBaseBR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelBaseFL_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WheelBaseFL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelBaseFR_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WheelBaseFR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PawnAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnBoostSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PawnBoostSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnNormalSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PawnNormalSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boostMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_boostMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_normalMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_normalMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RCDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RCDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAVehiclePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AVehiclePawn.h" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBL_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBL = { UE4CodeGen_Private::EPropertyClass::Object, "WheelBL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, WheelBL), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBL_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBR_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBR = { UE4CodeGen_Private::EPropertyClass::Object, "WheelBR", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, WheelBR), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBR_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelFL_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelFL = { UE4CodeGen_Private::EPropertyClass::Object, "WheelFL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, WheelFL), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelFL_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelFL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelFR_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelFR = { UE4CodeGen_Private::EPropertyClass::Object, "WheelFR", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, WheelFR), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelFR_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelFR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseBL_MetaData[] = {
		{ "Category", "Vehicle Parts | Wheels" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseBL = { UE4CodeGen_Private::EPropertyClass::Object, "WheelBaseBL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, WheelBaseBL), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseBL_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseBL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseBR_MetaData[] = {
		{ "Category", "Vehicle Parts | Wheels" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseBR = { UE4CodeGen_Private::EPropertyClass::Object, "WheelBaseBR", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, WheelBaseBR), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseBR_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseBR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseFL_MetaData[] = {
		{ "Category", "Vehicle Parts | Wheels" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseFL = { UE4CodeGen_Private::EPropertyClass::Object, "WheelBaseFL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, WheelBaseFL), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseFL_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseFL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseFR_MetaData[] = {
		{ "Category", "Vehicle Parts | Wheels" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseFR = { UE4CodeGen_Private::EPropertyClass::Object, "WheelBaseFR", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, WheelBaseFR), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseFR_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseFR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnAcceleration_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnAcceleration = { UE4CodeGen_Private::EPropertyClass::Float, "PawnAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, PawnAcceleration), METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_frameRate_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_frameRate = { UE4CodeGen_Private::EPropertyClass::Float, "frameRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, frameRate), METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_frameRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_frameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnBoostSpeed_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnBoostSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "PawnBoostSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, PawnBoostSpeed), METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnBoostSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnBoostSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnNormalSpeed_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnNormalSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "PawnNormalSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, PawnNormalSpeed), METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnNormalSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnNormalSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_boostMaxSpeed_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_boostMaxSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "boostMaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, boostMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_boostMaxSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_boostMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_normalMaxSpeed_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_normalMaxSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "normalMaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, normalMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_normalMaxSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_normalMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_MinSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MinSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, MinSpeed), METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_MinSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_RCDistance_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
		{ "ToolTip", "distance for ray cast" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_RCDistance = { UE4CodeGen_Private::EPropertyClass::Float, "RCDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, RCDistance), METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_RCDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_RCDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnMovementComponent_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
		{ "ToolTip", "Vehicle Movement component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnMovementComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PawnMovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, PawnMovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnMovementComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_CameraSpringArm_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
		{ "ToolTip", "Controls camera delay" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_CameraSpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "CameraSpringArm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, CameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_CameraSpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_CameraSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
		{ "ToolTip", "Camera component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Vehicle Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVehiclePawn.h" },
		{ "ToolTip", "Vehicle with a mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AAVehiclePawn, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAVehiclePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelFL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelFR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseBL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseBR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseFL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_WheelBaseFR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_frameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnBoostSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnNormalSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_boostMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_normalMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_MinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_RCDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_PawnMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_CameraSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVehiclePawn_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAVehiclePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAVehiclePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAVehiclePawn_Statics::ClassParams = {
		&AAVehiclePawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AAVehiclePawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAVehiclePawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAVehiclePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAVehiclePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAVehiclePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAVehiclePawn, 3935591835);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAVehiclePawn(Z_Construct_UClass_AAVehiclePawn, &AAVehiclePawn::StaticClass, TEXT("/Script/VehicleMovement"), TEXT("AAVehiclePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAVehiclePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
