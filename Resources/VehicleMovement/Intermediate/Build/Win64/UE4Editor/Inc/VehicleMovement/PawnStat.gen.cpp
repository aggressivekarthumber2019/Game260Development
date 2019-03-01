// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleMovement/PawnStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnStat() {}
// Cross Module References
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnStat_NoRegister();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnStat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VehicleMovement();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnStat_ConstructPawnStat();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnStat_GetCurrentSpeed();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnStat_GetHealthFactor();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnStat_GetMaxSpeedFactor();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnStat_GetMinSpeedFactor();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnStat_SetCurrentSpeed();
// End Cross Module References
	void UPawnStat::StaticRegisterNativesUPawnStat()
	{
		UClass* Class = UPawnStat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendCurrentSpeed", &UPawnStat::execAppendCurrentSpeed },
			{ "ConstructPawnStat", &UPawnStat::execConstructPawnStat },
			{ "GetCurrentSpeed", &UPawnStat::execGetCurrentSpeed },
			{ "GetHealthFactor", &UPawnStat::execGetHealthFactor },
			{ "GetMaxSpeedFactor", &UPawnStat::execGetMaxSpeedFactor },
			{ "GetMinSpeedFactor", &UPawnStat::execGetMinSpeedFactor },
			{ "SetCurrentSpeed", &UPawnStat::execSetCurrentSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed_Statics
	{
		struct PawnStat_eventAppendCurrentSpeed_Parms
		{
			float Amount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed_Statics::NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Float, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PawnStat_eventAppendCurrentSpeed_Parms, Amount), METADATA_PARAMS(Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed_Statics::NewProp_Amount_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed_Statics::NewProp_Amount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PawnStat.h" },
		{ "ToolTip", "\\fn  void UPawnStat::AppendCurrentSpeed(const float Amount);\n\n\\brief       Appends a current speed\n\n\\author      Jaymie\n\\date        2/28/2019\n\n\\param       Amount  The amount." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnStat, "AppendCurrentSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PawnStat_eventAppendCurrentSpeed_Parms), Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics
	{
		struct PawnStat_eventConstructPawnStat_Parms
		{
			float HealthFactor;
			float MaxSpeedFactor;
			float MinSpeedFactor;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_MinSpeedFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_MinSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "MinSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PawnStat_eventConstructPawnStat_Parms, MinSpeedFactor), METADATA_PARAMS(Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_MinSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_MinSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_MaxSpeedFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_MaxSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PawnStat_eventConstructPawnStat_Parms, MaxSpeedFactor), METADATA_PARAMS(Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_MaxSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_MaxSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_HealthFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_HealthFactor = { UE4CodeGen_Private::EPropertyClass::Float, "HealthFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PawnStat_eventConstructPawnStat_Parms, HealthFactor), METADATA_PARAMS(Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_HealthFactor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_HealthFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_MinSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_MaxSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::NewProp_HealthFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PawnStat.h" },
		{ "ToolTip", "\\fn  void UPawnStat::Construct(const float HealthFactor, const float MaxSpeedFactor, const float MinSpeedFactor);\n\n\\brief       Constructs\n\n\\author      Jaymie\n\\date        2/18/2019\n\n\\param       HealthFactor    The health factor.\n\\param       MaxSpeedFactor  The maximum speed factor.\n\\param       MinSpeedFactor  The minimum speed factor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnStat, "ConstructPawnStat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PawnStat_eventConstructPawnStat_Parms), Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnStat_ConstructPawnStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnStat_ConstructPawnStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnStat_GetCurrentSpeed_Statics
	{
		struct PawnStat_eventGetCurrentSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnStat_GetCurrentSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnStat_eventGetCurrentSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnStat_GetCurrentSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnStat_GetCurrentSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnStat_GetCurrentSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PawnStat.h" },
		{ "ToolTip", "\\fn  float UPawnStat::GetCurrentSpeed() const;\n\n\\brief       Gets current speed\n\n\\author      Jaymie\n\\date        2/28/2019\n\n\\returns     The current speed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnStat_GetCurrentSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnStat, "GetCurrentSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PawnStat_eventGetCurrentSpeed_Parms), Z_Construct_UFunction_UPawnStat_GetCurrentSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_GetCurrentSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnStat_GetCurrentSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_GetCurrentSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnStat_GetCurrentSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnStat_GetCurrentSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnStat_GetHealthFactor_Statics
	{
		struct PawnStat_eventGetHealthFactor_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnStat_GetHealthFactor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnStat_eventGetHealthFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnStat_GetHealthFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnStat_GetHealthFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnStat_GetHealthFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PawnStat.h" },
		{ "ToolTip", "\\fn  float UPawnStat::GetHealthFactor() const;\n\n\\brief       Gets health factor\n\n\\author      Jaymie\n\\date        2/18/2019\n\n\\returns     The health factor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnStat_GetHealthFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnStat, "GetHealthFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PawnStat_eventGetHealthFactor_Parms), Z_Construct_UFunction_UPawnStat_GetHealthFactor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_GetHealthFactor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnStat_GetHealthFactor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_GetHealthFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnStat_GetHealthFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnStat_GetHealthFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnStat_GetMaxSpeedFactor_Statics
	{
		struct PawnStat_eventGetMaxSpeedFactor_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnStat_GetMaxSpeedFactor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnStat_eventGetMaxSpeedFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnStat_GetMaxSpeedFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnStat_GetMaxSpeedFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnStat_GetMaxSpeedFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PawnStat.h" },
		{ "ToolTip", "\\fn  float UPawnStat::GetMaxSpeedFactor() const;\n\n\\brief       Gets maximum speed factor\n\n\\author      Jaymie\n\\date        2/18/2019\n\n\\returns     The maximum speed factor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnStat_GetMaxSpeedFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnStat, "GetMaxSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PawnStat_eventGetMaxSpeedFactor_Parms), Z_Construct_UFunction_UPawnStat_GetMaxSpeedFactor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_GetMaxSpeedFactor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnStat_GetMaxSpeedFactor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_GetMaxSpeedFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnStat_GetMaxSpeedFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnStat_GetMaxSpeedFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnStat_GetMinSpeedFactor_Statics
	{
		struct PawnStat_eventGetMinSpeedFactor_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnStat_GetMinSpeedFactor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnStat_eventGetMinSpeedFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnStat_GetMinSpeedFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnStat_GetMinSpeedFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnStat_GetMinSpeedFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PawnStat.h" },
		{ "ToolTip", "\\fn  float UPawnStat::GetMinSpeedFactor() const;\n\n\\brief       Gets minimum speed factor\n\n\\author      Jaymie\n\\date        2/18/2019\n\n\\returns     The minimum speed factor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnStat_GetMinSpeedFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnStat, "GetMinSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PawnStat_eventGetMinSpeedFactor_Parms), Z_Construct_UFunction_UPawnStat_GetMinSpeedFactor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_GetMinSpeedFactor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnStat_GetMinSpeedFactor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_GetMinSpeedFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnStat_GetMinSpeedFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnStat_GetMinSpeedFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnStat_SetCurrentSpeed_Statics
	{
		struct PawnStat_eventSetCurrentSpeed_Parms
		{
			float NewSpeed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnStat_SetCurrentSpeed_Statics::NewProp_NewSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnStat_SetCurrentSpeed_Statics::NewProp_NewSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "NewSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PawnStat_eventSetCurrentSpeed_Parms, NewSpeed), METADATA_PARAMS(Z_Construct_UFunction_UPawnStat_SetCurrentSpeed_Statics::NewProp_NewSpeed_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_SetCurrentSpeed_Statics::NewProp_NewSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnStat_SetCurrentSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnStat_SetCurrentSpeed_Statics::NewProp_NewSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnStat_SetCurrentSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PawnStat.h" },
		{ "ToolTip", "\\fn  void UPawnStat::SetCurrentSpeed();\n\n\\brief       Sets current speed\n\n\\author      Jaymie\n\\date        2/28/2019" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnStat_SetCurrentSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnStat, "SetCurrentSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PawnStat_eventSetCurrentSpeed_Parms), Z_Construct_UFunction_UPawnStat_SetCurrentSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_SetCurrentSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnStat_SetCurrentSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnStat_SetCurrentSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnStat_SetCurrentSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnStat_SetCurrentSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnStat_NoRegister()
	{
		return UPawnStat::StaticClass();
	}
	struct Z_Construct_UClass_UPawnStat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MCurrentSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MCurrentSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MMinSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MMinSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MMaxSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MMaxSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MHealthFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MHealthFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnStat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnStat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnStat_AppendCurrentSpeed, "AppendCurrentSpeed" }, // 3993979749
		{ &Z_Construct_UFunction_UPawnStat_ConstructPawnStat, "ConstructPawnStat" }, // 2343903501
		{ &Z_Construct_UFunction_UPawnStat_GetCurrentSpeed, "GetCurrentSpeed" }, // 2453160975
		{ &Z_Construct_UFunction_UPawnStat_GetHealthFactor, "GetHealthFactor" }, // 3764739463
		{ &Z_Construct_UFunction_UPawnStat_GetMaxSpeedFactor, "GetMaxSpeedFactor" }, // 2963660184
		{ &Z_Construct_UFunction_UPawnStat_GetMinSpeedFactor, "GetMinSpeedFactor" }, // 3413194514
		{ &Z_Construct_UFunction_UPawnStat_SetCurrentSpeed, "SetCurrentSpeed" }, // 4028536968
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PawnStat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PawnStat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStat_Statics::NewProp_MCurrentSpeed_MetaData[] = {
		{ "Category", "PawnStat" },
		{ "ModuleRelativePath", "PawnStat.h" },
		{ "ToolTip", "\\brief The current speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnStat_Statics::NewProp_MCurrentSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MCurrentSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000004, 1, nullptr, STRUCT_OFFSET(UPawnStat, MCurrentSpeed), METADATA_PARAMS(Z_Construct_UClass_UPawnStat_Statics::NewProp_MCurrentSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnStat_Statics::NewProp_MCurrentSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStat_Statics::NewProp_MMinSpeedFactor_MetaData[] = {
		{ "Category", "PawnStat" },
		{ "ModuleRelativePath", "PawnStat.h" },
		{ "ToolTip", "\\brief The minimum speed factor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnStat_Statics::NewProp_MMinSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "MMinSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000004, 1, nullptr, STRUCT_OFFSET(UPawnStat, MMinSpeedFactor), METADATA_PARAMS(Z_Construct_UClass_UPawnStat_Statics::NewProp_MMinSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnStat_Statics::NewProp_MMinSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStat_Statics::NewProp_MMaxSpeedFactor_MetaData[] = {
		{ "Category", "PawnStat" },
		{ "ModuleRelativePath", "PawnStat.h" },
		{ "ToolTip", "\\brief The maximum speed factor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnStat_Statics::NewProp_MMaxSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "MMaxSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000004, 1, nullptr, STRUCT_OFFSET(UPawnStat, MMaxSpeedFactor), METADATA_PARAMS(Z_Construct_UClass_UPawnStat_Statics::NewProp_MMaxSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnStat_Statics::NewProp_MMaxSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStat_Statics::NewProp_MHealthFactor_MetaData[] = {
		{ "Category", "PawnStat" },
		{ "ModuleRelativePath", "PawnStat.h" },
		{ "ToolTip", "\\brief The health factor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnStat_Statics::NewProp_MHealthFactor = { UE4CodeGen_Private::EPropertyClass::Float, "MHealthFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000004, 1, nullptr, STRUCT_OFFSET(UPawnStat, MHealthFactor), METADATA_PARAMS(Z_Construct_UClass_UPawnStat_Statics::NewProp_MHealthFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnStat_Statics::NewProp_MHealthFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnStat_Statics::NewProp_MCurrentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnStat_Statics::NewProp_MMinSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnStat_Statics::NewProp_MMaxSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnStat_Statics::NewProp_MHealthFactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnStat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnStat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnStat_Statics::ClassParams = {
		&UPawnStat::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UPawnStat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPawnStat_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPawnStat_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPawnStat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnStat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnStat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnStat, 4023696181);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnStat(Z_Construct_UClass_UPawnStat, &UPawnStat::StaticClass, TEXT("/Script/VehicleMovement"), TEXT("UPawnStat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnStat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
