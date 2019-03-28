// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleMovement/KartVehiclePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKartVehiclePawn() {}
// Cross Module References
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_AKartVehiclePawn_NoRegister();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_AKartVehiclePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_VehicleMovement();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_AKartVehiclePawn_GetCurrentSpeedAmount();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_AKartVehiclePawn_GetCurrentTurnAmount();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_AKartVehiclePawn_SetCurrentSpeedAmount();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_AKartVehiclePawn_SetCurrentTurnAmount();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AKartVehiclePawn::StaticRegisterNativesAKartVehiclePawn()
	{
		UClass* Class = AKartVehiclePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentSpeedAmount", &AKartVehiclePawn::execGetCurrentSpeedAmount },
			{ "GetCurrentTurnAmount", &AKartVehiclePawn::execGetCurrentTurnAmount },
			{ "SetCurrentSpeedAmount", &AKartVehiclePawn::execSetCurrentSpeedAmount },
			{ "SetCurrentTurnAmount", &AKartVehiclePawn::execSetCurrentTurnAmount },
			{ "SetDebugModeEnabled", &AKartVehiclePawn::execSetDebugModeEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKartVehiclePawn_GetCurrentSpeedAmount_Statics
	{
		struct KartVehiclePawn_eventGetCurrentSpeedAmount_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKartVehiclePawn_GetCurrentSpeedAmount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KartVehiclePawn_eventGetCurrentSpeedAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKartVehiclePawn_GetCurrentSpeedAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKartVehiclePawn_GetCurrentSpeedAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKartVehiclePawn_GetCurrentSpeedAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle Parts | Getter" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: Getter function for current speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKartVehiclePawn_GetCurrentSpeedAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKartVehiclePawn, "GetCurrentSpeedAmount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KartVehiclePawn_eventGetCurrentSpeedAmount_Parms), Z_Construct_UFunction_AKartVehiclePawn_GetCurrentSpeedAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AKartVehiclePawn_GetCurrentSpeedAmount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKartVehiclePawn_GetCurrentSpeedAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AKartVehiclePawn_GetCurrentSpeedAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKartVehiclePawn_GetCurrentSpeedAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKartVehiclePawn_GetCurrentSpeedAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKartVehiclePawn_GetCurrentTurnAmount_Statics
	{
		struct KartVehiclePawn_eventGetCurrentTurnAmount_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKartVehiclePawn_GetCurrentTurnAmount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KartVehiclePawn_eventGetCurrentTurnAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKartVehiclePawn_GetCurrentTurnAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKartVehiclePawn_GetCurrentTurnAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKartVehiclePawn_GetCurrentTurnAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle Parts | Getter" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: Getter function for current turn amount" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKartVehiclePawn_GetCurrentTurnAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKartVehiclePawn, "GetCurrentTurnAmount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KartVehiclePawn_eventGetCurrentTurnAmount_Parms), Z_Construct_UFunction_AKartVehiclePawn_GetCurrentTurnAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AKartVehiclePawn_GetCurrentTurnAmount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKartVehiclePawn_GetCurrentTurnAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AKartVehiclePawn_GetCurrentTurnAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKartVehiclePawn_GetCurrentTurnAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKartVehiclePawn_GetCurrentTurnAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKartVehiclePawn_SetCurrentSpeedAmount_Statics
	{
		struct KartVehiclePawn_eventSetCurrentSpeedAmount_Parms
		{
			float val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKartVehiclePawn_SetCurrentSpeedAmount_Statics::NewProp_val = { UE4CodeGen_Private::EPropertyClass::Float, "val", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KartVehiclePawn_eventSetCurrentSpeedAmount_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKartVehiclePawn_SetCurrentSpeedAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKartVehiclePawn_SetCurrentSpeedAmount_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKartVehiclePawn_SetCurrentSpeedAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle Parts | Setter" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: Setter function for current speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKartVehiclePawn_SetCurrentSpeedAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKartVehiclePawn, "SetCurrentSpeedAmount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KartVehiclePawn_eventSetCurrentSpeedAmount_Parms), Z_Construct_UFunction_AKartVehiclePawn_SetCurrentSpeedAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AKartVehiclePawn_SetCurrentSpeedAmount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKartVehiclePawn_SetCurrentSpeedAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AKartVehiclePawn_SetCurrentSpeedAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKartVehiclePawn_SetCurrentSpeedAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKartVehiclePawn_SetCurrentSpeedAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKartVehiclePawn_SetCurrentTurnAmount_Statics
	{
		struct KartVehiclePawn_eventSetCurrentTurnAmount_Parms
		{
			float val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKartVehiclePawn_SetCurrentTurnAmount_Statics::NewProp_val = { UE4CodeGen_Private::EPropertyClass::Float, "val", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KartVehiclePawn_eventSetCurrentTurnAmount_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKartVehiclePawn_SetCurrentTurnAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKartVehiclePawn_SetCurrentTurnAmount_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKartVehiclePawn_SetCurrentTurnAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle Parts | Setter" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: Setter function for current turn amount" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKartVehiclePawn_SetCurrentTurnAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKartVehiclePawn, "SetCurrentTurnAmount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KartVehiclePawn_eventSetCurrentTurnAmount_Parms), Z_Construct_UFunction_AKartVehiclePawn_SetCurrentTurnAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AKartVehiclePawn_SetCurrentTurnAmount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKartVehiclePawn_SetCurrentTurnAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AKartVehiclePawn_SetCurrentTurnAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKartVehiclePawn_SetCurrentTurnAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKartVehiclePawn_SetCurrentTurnAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled_Statics
	{
		struct KartVehiclePawn_eventSetDebugModeEnabled_Parms
		{
			bool bDebugOn;
		};
		static void NewProp_bDebugOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled_Statics::NewProp_bDebugOn_SetBit(void* Obj)
	{
		((KartVehiclePawn_eventSetDebugModeEnabled_Parms*)Obj)->bDebugOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled_Statics::NewProp_bDebugOn = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugOn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KartVehiclePawn_eventSetDebugModeEnabled_Parms), &Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled_Statics::NewProp_bDebugOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled_Statics::NewProp_bDebugOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle Parts | Debug" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKartVehiclePawn, "SetDebugModeEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KartVehiclePawn_eventSetDebugModeEnabled_Parms), Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKartVehiclePawn_NoRegister()
	{
		return AKartVehiclePawn::StaticClass();
	}
	struct Z_Construct_UClass_AKartVehiclePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowCarTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlowCarTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowCarSpeedRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlowCarSpeedRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputTurnRateLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputTurnRateLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMaxSpeedAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputMaxSpeedAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMinSpeedAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputMinSpeedAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdPersonFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmCameraRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringArmCameraRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmCameraOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringArmCameraOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarSpeedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarSpeedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehiclePawnBoostSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehiclePawnBoostSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehiclePawnMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehiclePawnMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehiclePawnDeceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehiclePawnDeceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehiclePawnAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehiclePawnAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BRWheelSphereCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BRWheelSphereCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BLWheelSphereCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BLWheelSphereCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FRWheelSphereCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FRWheelSphereCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FLWheelSphereCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FLWheelSphereCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarBoxCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarBoxCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldDisplayOnScreenDebug_MetaData[];
#endif
		static void NewProp_bShouldDisplayOnScreenDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDisplayOnScreenDebug;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKartVehiclePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKartVehiclePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKartVehiclePawn_GetCurrentSpeedAmount, "GetCurrentSpeedAmount" }, // 2298685950
		{ &Z_Construct_UFunction_AKartVehiclePawn_GetCurrentTurnAmount, "GetCurrentTurnAmount" }, // 220024837
		{ &Z_Construct_UFunction_AKartVehiclePawn_SetCurrentSpeedAmount, "SetCurrentSpeedAmount" }, // 3897909020
		{ &Z_Construct_UFunction_AKartVehiclePawn_SetCurrentTurnAmount, "SetCurrentTurnAmount" }, // 804971184
		{ &Z_Construct_UFunction_AKartVehiclePawn_SetDebugModeEnabled, "SetDebugModeEnabled" }, // 3098941136
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "KartVehiclePawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Blueprintable: You can make blueprints out of this class\n\nBlueprintType: This class is accessible in blueprints" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Game Parts" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FrameRate = { UE4CodeGen_Private::EPropertyClass::Float, "FrameRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, FrameRate), METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FrameRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SlowCarTurnRate_MetaData[] = {
		{ "Category", "Vehicle Parts | Car Stats" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: This is the braking speed of the car" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SlowCarTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "SlowCarTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, SlowCarTurnRate), METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SlowCarTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SlowCarTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SlowCarSpeedRate_MetaData[] = {
		{ "Category", "Vehicle Parts | Car Stats" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: This is the braking speed of the car" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SlowCarSpeedRate = { UE4CodeGen_Private::EPropertyClass::Float, "SlowCarSpeedRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, SlowCarSpeedRate), METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SlowCarSpeedRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SlowCarSpeedRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BrakeSpeed_MetaData[] = {
		{ "Category", "Vehicle Parts | Car Stats" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: This is the braking speed of the car" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BrakeSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "BrakeSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, BrakeSpeed), METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BrakeSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BrakeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputTurnRateLimit_MetaData[] = {
		{ "Category", "Vehicle Parts | Car Stats" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: This is the max turning rate for the car" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputTurnRateLimit = { UE4CodeGen_Private::EPropertyClass::Float, "InputTurnRateLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, InputTurnRateLimit), METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputTurnRateLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputTurnRateLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputMaxSpeedAmount_MetaData[] = {
		{ "Category", "Vehicle Parts | Car Stats" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: This is the maximum amount of input that can be applied to the cars speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputMaxSpeedAmount = { UE4CodeGen_Private::EPropertyClass::Float, "InputMaxSpeedAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, InputMaxSpeedAmount), METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputMaxSpeedAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputMaxSpeedAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputMinSpeedAmount_MetaData[] = {
		{ "Category", "Vehicle Parts | Car Stats" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: This is the minimum amount of input that can be applied to the cars speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputMinSpeedAmount = { UE4CodeGen_Private::EPropertyClass::Float, "InputMinSpeedAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, InputMinSpeedAmount), METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputMinSpeedAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputMinSpeedAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_ThirdPersonFOV_MetaData[] = {
		{ "Category", "Vehicle Parts | Camera" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: The public Field of View of the third person camera. Could also be used for changing the FOV while playing the game" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_ThirdPersonFOV = { UE4CodeGen_Private::EPropertyClass::Float, "ThirdPersonFOV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, ThirdPersonFOV), METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_ThirdPersonFOV_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_ThirdPersonFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SpringArmCameraRotation_MetaData[] = {
		{ "Category", "Vehicle Parts | Camera" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: The public rotation of the camera that can be set in the editor. Could also be used for changing the camera rotation while playing the game" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SpringArmCameraRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringArmCameraRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, SpringArmCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SpringArmCameraRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SpringArmCameraRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SpringArmCameraOffset_MetaData[] = {
		{ "Category", "Vehicle Parts | Camera" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: The public offset of the camera that can be set in the editor. Could also be used for changing the camera angle while playing the game" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SpringArmCameraOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringArmCameraOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, SpringArmCameraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SpringArmCameraOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SpringArmCameraOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CameraSpringArm_MetaData[] = {
		{ "Category", "Vehicle Parts | Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Sarfaraz: Controls camera delay and movement behind the car" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CameraSpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "CameraSpringArm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, CameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CameraSpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CameraSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Vehicle Parts | Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Sarfaraz: Camera component of the car" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CarSpeedText_MetaData[] = {
		{ "Category", "Vehicle Parts | Movement Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Text component for the In-Car speed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CarSpeedText = { UE4CodeGen_Private::EPropertyClass::Object, "CarSpeedText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, CarSpeedText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CarSpeedText_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CarSpeedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnBoostSpeed_MetaData[] = {
		{ "Category", "Vehicle Parts | Car Stats" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: The floating pawn movements max speed value. Can be changed in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnBoostSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "VehiclePawnBoostSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, VehiclePawnBoostSpeed), METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnBoostSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnBoostSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnMaxSpeed_MetaData[] = {
		{ "Category", "Vehicle Parts | Car Stats" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: The floating pawn movements max speed value. Can be changed in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnMaxSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "VehiclePawnMaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, VehiclePawnMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnMaxSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnDeceleration_MetaData[] = {
		{ "Category", "Vehicle Parts | Car Stats" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: The floating pawn movements deceleration value. Can be changed in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnDeceleration = { UE4CodeGen_Private::EPropertyClass::Float, "VehiclePawnDeceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, VehiclePawnDeceleration), METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnDeceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnDeceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnAcceleration_MetaData[] = {
		{ "Category", "Vehicle Parts | Car Stats" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: The floating pawn movements acceleration value. Can be changed in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnAcceleration = { UE4CodeGen_Private::EPropertyClass::Float, "VehiclePawnAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, VehiclePawnAcceleration), METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_PawnMovementComponent_MetaData[] = {
		{ "Category", "Vehicle Parts | Movement Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Sarfaraz: Vehicle Movement component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_PawnMovementComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PawnMovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, PawnMovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_PawnMovementComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_PawnMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BRWheelSphereCollider_MetaData[] = {
		{ "Category", "Vehicle Parts | Skeleton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: Sphere component for the back right wheel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BRWheelSphereCollider = { UE4CodeGen_Private::EPropertyClass::Object, "BRWheelSphereCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, BRWheelSphereCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BRWheelSphereCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BRWheelSphereCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BLWheelSphereCollider_MetaData[] = {
		{ "Category", "Vehicle Parts | Skeleton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: Sphere component for the back left wheel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BLWheelSphereCollider = { UE4CodeGen_Private::EPropertyClass::Object, "BLWheelSphereCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, BLWheelSphereCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BLWheelSphereCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BLWheelSphereCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FRWheelSphereCollider_MetaData[] = {
		{ "Category", "Vehicle Parts | Skeleton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: Sphere component for the front right wheel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FRWheelSphereCollider = { UE4CodeGen_Private::EPropertyClass::Object, "FRWheelSphereCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, FRWheelSphereCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FRWheelSphereCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FRWheelSphereCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FLWheelSphereCollider_MetaData[] = {
		{ "Category", "Vehicle Parts | Skeleton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: Sphere component for the front left wheel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FLWheelSphereCollider = { UE4CodeGen_Private::EPropertyClass::Object, "FLWheelSphereCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, FLWheelSphereCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FLWheelSphereCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FLWheelSphereCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CarBoxCollider_MetaData[] = {
		{ "Category", "Vehicle Parts | Skeleton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Mike: Box Collider that represents the body of the car" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CarBoxCollider = { UE4CodeGen_Private::EPropertyClass::Object, "CarBoxCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, CarBoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CarBoxCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CarBoxCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "Vehicle Parts | Skeleton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "Sarfaraz: Vehicle with a mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SkeletalMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AKartVehiclePawn, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SkeletalMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_bShouldDisplayOnScreenDebug_MetaData[] = {
		{ "Category", "Vehicle Parts | Debug" },
		{ "ModuleRelativePath", "KartVehiclePawn.h" },
		{ "ToolTip", "DEBUG MODE - If this is true, it will display on screen debug messages" },
	};
#endif
	void Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_bShouldDisplayOnScreenDebug_SetBit(void* Obj)
	{
		((AKartVehiclePawn*)Obj)->bShouldDisplayOnScreenDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_bShouldDisplayOnScreenDebug = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldDisplayOnScreenDebug", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AKartVehiclePawn), &Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_bShouldDisplayOnScreenDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_bShouldDisplayOnScreenDebug_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_bShouldDisplayOnScreenDebug_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKartVehiclePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SlowCarTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SlowCarSpeedRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BrakeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputTurnRateLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputMaxSpeedAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_InputMinSpeedAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_ThirdPersonFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SpringArmCameraRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SpringArmCameraOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CameraSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CarSpeedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnBoostSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnDeceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_VehiclePawnAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_PawnMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BRWheelSphereCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_BLWheelSphereCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FRWheelSphereCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_FLWheelSphereCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_CarBoxCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKartVehiclePawn_Statics::NewProp_bShouldDisplayOnScreenDebug,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKartVehiclePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKartVehiclePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKartVehiclePawn_Statics::ClassParams = {
		&AKartVehiclePawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AKartVehiclePawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AKartVehiclePawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AKartVehiclePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKartVehiclePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKartVehiclePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKartVehiclePawn, 2333645394);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKartVehiclePawn(Z_Construct_UClass_AKartVehiclePawn, &AKartVehiclePawn::StaticClass, TEXT("/Script/VehicleMovement"), TEXT("AKartVehiclePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKartVehiclePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
