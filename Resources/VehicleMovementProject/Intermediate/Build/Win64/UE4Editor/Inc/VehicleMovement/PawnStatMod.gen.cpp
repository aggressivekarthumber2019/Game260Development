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
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnStatMod_Construct();
// End Cross Module References
	void UPawnStatMod::StaticRegisterNativesUPawnStatMod()
	{
		UClass* Class = UPawnStatMod::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &UPawnStatMod::execConstruct },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPawnStatMod_Construct_Statics
	{
		struct PawnStatMod_eventConstruct_Parms
		{
			int32 GUID;
			int32 MaxStack;
			float MaxTimeMS;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTimeMS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxStack;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnStatMod_Construct_Statics::NewProp_MaxTimeMS = { UE4CodeGen_Private::EPropertyClass::Float, "MaxTimeMS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnStatMod_eventConstruct_Parms, MaxTimeMS), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPawnStatMod_Construct_Statics::NewProp_MaxStack = { UE4CodeGen_Private::EPropertyClass::Int, "MaxStack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnStatMod_eventConstruct_Parms, MaxStack), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPawnStatMod_Construct_Statics::NewProp_GUID = { UE4CodeGen_Private::EPropertyClass::Int, "GUID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnStatMod_eventConstruct_Parms, GUID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnStatMod_Construct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnStatMod_Construct_Statics::NewProp_MaxTimeMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnStatMod_Construct_Statics::NewProp_MaxStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnStatMod_Construct_Statics::NewProp_GUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnStatMod_Construct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PawnStatMod.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnStatMod_Construct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnStatMod, "Construct", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PawnStatMod_eventConstruct_Parms), Z_Construct_UFunction_UPawnStatMod_Construct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnStatMod_Construct_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnStatMod_Construct_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnStatMod_Construct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnStatMod_Construct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnStatMod_Construct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnStatMod_NoRegister()
	{
		return UPawnStatMod::StaticClass();
	}
	struct Z_Construct_UClass_UPawnStatMod_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MGUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnStatMod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnStatMod_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnStatMod_Construct, "Construct" }, // 3338897499
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxTimeMS = { UE4CodeGen_Private::EPropertyClass::Float, "MMaxTimeMS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPawnStatMod, MMaxTimeMS), METADATA_PARAMS(Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxTimeMS_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxTimeMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxStackCount_MetaData[] = {
		{ "Category", "PawnStatMod" },
		{ "ModuleRelativePath", "PawnStatMod.h" },
		{ "ToolTip", "\\brief Number of maximum stacks" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxStackCount = { UE4CodeGen_Private::EPropertyClass::Int, "MMaxStackCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPawnStatMod, MMaxStackCount), METADATA_PARAMS(Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxStackCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxStackCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MGUID_MetaData[] = {
		{ "Category", "PawnStatMod" },
		{ "ModuleRelativePath", "PawnStatMod.h" },
		{ "ToolTip", "\\brief Unique identifier" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MGUID = { UE4CodeGen_Private::EPropertyClass::Int, "MGUID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPawnStatMod, MGUID), METADATA_PARAMS(Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MGUID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MGUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnStatMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxTimeMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MMaxStackCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnStatMod_Statics::NewProp_MGUID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnStatMod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnStatMod>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnStatMod_Statics::ClassParams = {
		&UPawnStatMod::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UPawnStatMod, 4239851385);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnStatMod(Z_Construct_UClass_UPawnStatMod, &UPawnStatMod::StaticClass, TEXT("/Script/VehicleMovement"), TEXT("UPawnStatMod"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnStatMod);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
