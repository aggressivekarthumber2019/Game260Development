// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleMovement/CarStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarStat() {}
// Cross Module References
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UDelegateFunction_VehicleMovement_OnAccelerationChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VehicleMovement();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UCarStat_NoRegister();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UCarStat();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnStat();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UCarStat_ConstructCarStat();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UCarStat_SetAccelerationFactor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VehicleMovement_OnAccelerationChangedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VehicleMovement_OnAccelerationChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CarStat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VehicleMovement_OnAccelerationChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VehicleMovement, "OnAccelerationChangedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VehicleMovement_OnAccelerationChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_VehicleMovement_OnAccelerationChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VehicleMovement_OnAccelerationChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VehicleMovement_OnAccelerationChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UCarStat::StaticRegisterNativesUCarStat()
	{
		UClass* Class = UCarStat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructCarStat", &UCarStat::execConstructCarStat },
			{ "SetAccelerationFactor", &UCarStat::execSetAccelerationFactor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics
	{
		struct CarStat_eventConstructCarStat_Parms
		{
			float HealthFactor;
			float MaxSpeedFactor;
			float MinSpeedFactor;
			float HandleFactor;
			float AccelerationFactor;
			float WeightFactor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccelerationFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandleFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_WeightFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_WeightFactor = { UE4CodeGen_Private::EPropertyClass::Float, "WeightFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(CarStat_eventConstructCarStat_Parms, WeightFactor), METADATA_PARAMS(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_WeightFactor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_WeightFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_AccelerationFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_AccelerationFactor = { UE4CodeGen_Private::EPropertyClass::Float, "AccelerationFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(CarStat_eventConstructCarStat_Parms, AccelerationFactor), METADATA_PARAMS(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_AccelerationFactor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_AccelerationFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_HandleFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_HandleFactor = { UE4CodeGen_Private::EPropertyClass::Float, "HandleFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(CarStat_eventConstructCarStat_Parms, HandleFactor), METADATA_PARAMS(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_HandleFactor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_HandleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_MinSpeedFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_MinSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "MinSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(CarStat_eventConstructCarStat_Parms, MinSpeedFactor), METADATA_PARAMS(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_MinSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_MinSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_MaxSpeedFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_MaxSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(CarStat_eventConstructCarStat_Parms, MaxSpeedFactor), METADATA_PARAMS(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_MaxSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_MaxSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_HealthFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_HealthFactor = { UE4CodeGen_Private::EPropertyClass::Float, "HealthFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(CarStat_eventConstructCarStat_Parms, HealthFactor), METADATA_PARAMS(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_HealthFactor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_HealthFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_WeightFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_AccelerationFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_HandleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_MinSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_MaxSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::NewProp_HealthFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CarStat.h" },
		{ "ToolTip", "\\fn  void UCarStat::Construct(const float HealthFactor, const float MaxSpeedFactor, const float MinSpeedFactor);\n\n\\brief       Constructs\n\n\\author      Jaymie\n\\date        2/18/2019\n\n\\param       HealthFactor    The health factor.\n\\param       MaxSpeedFactor  The maximum speed factor.\n\\param       MinSpeedFactor  The minimum speed factor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCarStat, "ConstructCarStat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CarStat_eventConstructCarStat_Parms), Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCarStat_ConstructCarStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCarStat_ConstructCarStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCarStat_SetAccelerationFactor_Statics
	{
		struct CarStat_eventSetAccelerationFactor_Parms
		{
			float AccelerationFactor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccelerationFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCarStat_SetAccelerationFactor_Statics::NewProp_AccelerationFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCarStat_SetAccelerationFactor_Statics::NewProp_AccelerationFactor = { UE4CodeGen_Private::EPropertyClass::Float, "AccelerationFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(CarStat_eventSetAccelerationFactor_Parms, AccelerationFactor), METADATA_PARAMS(Z_Construct_UFunction_UCarStat_SetAccelerationFactor_Statics::NewProp_AccelerationFactor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCarStat_SetAccelerationFactor_Statics::NewProp_AccelerationFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCarStat_SetAccelerationFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCarStat_SetAccelerationFactor_Statics::NewProp_AccelerationFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCarStat_SetAccelerationFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CarStat.h" },
		{ "ToolTip", "\\fn  void UCarStat::SetAccelerationFactor();\n\n\\brief       Sets acceleration factor\n\n\\author      Jaymie\n\\date        2/28/2019" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCarStat_SetAccelerationFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCarStat, "SetAccelerationFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(CarStat_eventSetAccelerationFactor_Parms), Z_Construct_UFunction_UCarStat_SetAccelerationFactor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCarStat_SetAccelerationFactor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCarStat_SetAccelerationFactor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCarStat_SetAccelerationFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCarStat_SetAccelerationFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCarStat_SetAccelerationFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCarStat_NoRegister()
	{
		return UCarStat::StaticClass();
	}
	struct Z_Construct_UClass_UCarStat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAccelerationChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAccelerationChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MWeightFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MWeightFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAccelerationFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAccelerationFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MHandleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MHandleFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCarStat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnStat,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCarStat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCarStat_ConstructCarStat, "ConstructCarStat" }, // 3043046053
		{ &Z_Construct_UFunction_UCarStat_SetAccelerationFactor, "SetAccelerationFactor" }, // 650797767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCarStat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CarStat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CarStat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCarStat_Statics::NewProp_OnAccelerationChanged_MetaData[] = {
		{ "ModuleRelativePath", "CarStat.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCarStat_Statics::NewProp_OnAccelerationChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAccelerationChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UCarStat, OnAccelerationChanged), Z_Construct_UDelegateFunction_VehicleMovement_OnAccelerationChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCarStat_Statics::NewProp_OnAccelerationChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCarStat_Statics::NewProp_OnAccelerationChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCarStat_Statics::NewProp_MWeightFactor_MetaData[] = {
		{ "Category", "CarStat" },
		{ "ModuleRelativePath", "CarStat.h" },
		{ "ToolTip", "\\brief The weight factor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCarStat_Statics::NewProp_MWeightFactor = { UE4CodeGen_Private::EPropertyClass::Float, "MWeightFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000004, 1, nullptr, STRUCT_OFFSET(UCarStat, MWeightFactor), METADATA_PARAMS(Z_Construct_UClass_UCarStat_Statics::NewProp_MWeightFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCarStat_Statics::NewProp_MWeightFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCarStat_Statics::NewProp_MAccelerationFactor_MetaData[] = {
		{ "BlueprintSetter", "SetAccelerationFactor" },
		{ "Category", "CarStat" },
		{ "ModuleRelativePath", "CarStat.h" },
		{ "ToolTip", "\\brief The acceleration factor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCarStat_Statics::NewProp_MAccelerationFactor = { UE4CodeGen_Private::EPropertyClass::Float, "MAccelerationFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000004, 1, nullptr, STRUCT_OFFSET(UCarStat, MAccelerationFactor), METADATA_PARAMS(Z_Construct_UClass_UCarStat_Statics::NewProp_MAccelerationFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCarStat_Statics::NewProp_MAccelerationFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCarStat_Statics::NewProp_MHandleFactor_MetaData[] = {
		{ "Category", "CarStat" },
		{ "ModuleRelativePath", "CarStat.h" },
		{ "ToolTip", "\\brief The handle factor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCarStat_Statics::NewProp_MHandleFactor = { UE4CodeGen_Private::EPropertyClass::Float, "MHandleFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000004, 1, nullptr, STRUCT_OFFSET(UCarStat, MHandleFactor), METADATA_PARAMS(Z_Construct_UClass_UCarStat_Statics::NewProp_MHandleFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCarStat_Statics::NewProp_MHandleFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCarStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCarStat_Statics::NewProp_OnAccelerationChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCarStat_Statics::NewProp_MWeightFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCarStat_Statics::NewProp_MAccelerationFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCarStat_Statics::NewProp_MHandleFactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCarStat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCarStat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCarStat_Statics::ClassParams = {
		&UCarStat::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCarStat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCarStat_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCarStat_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCarStat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCarStat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCarStat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCarStat, 592811703);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCarStat(Z_Construct_UClass_UCarStat, &UCarStat::StaticClass, TEXT("/Script/VehicleMovement"), TEXT("UCarStat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCarStat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
