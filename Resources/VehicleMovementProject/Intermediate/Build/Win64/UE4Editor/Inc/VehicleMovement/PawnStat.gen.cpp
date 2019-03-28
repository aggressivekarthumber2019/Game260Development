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
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnStat_ConstructPawnStat();
// End Cross Module References
	void UPawnStat::StaticRegisterNativesUPawnStat()
	{
		UClass* Class = UPawnStat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructPawnStat", &UPawnStat::execConstructPawnStat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
		{ &Z_Construct_UFunction_UPawnStat_ConstructPawnStat, "ConstructPawnStat" }, // 2343903501
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PawnStat.h" },
		{ "ModuleRelativePath", "PawnStat.h" },
	};
#endif
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
	IMPLEMENT_CLASS(UPawnStat, 879167834);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnStat(Z_Construct_UClass_UPawnStat, &UPawnStat::StaticClass, TEXT("/Script/VehicleMovement"), TEXT("UPawnStat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnStat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
