// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleMovement/Misc/GUIDDictionary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGUIDDictionary() {}
// Cross Module References
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UGUIDDictionary_NoRegister();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UGUIDDictionary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VehicleMovement();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UGUIDDictionary_GetGUID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnStatMod_NoRegister();
// End Cross Module References
	void UGUIDDictionary::StaticRegisterNativesUGUIDDictionary()
	{
		UClass* Class = UGUIDDictionary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGUID", &UGUIDDictionary::execGetGUID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics
	{
		struct GUIDDictionary_eventGetGUID_Parms
		{
			const TSubclassOf<UPawnStatMod>  ModType;
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ModType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GUIDDictionary_eventGetGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::NewProp_ModType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::NewProp_ModType = { UE4CodeGen_Private::EPropertyClass::Class, "ModType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000008000182, 1, nullptr, STRUCT_OFFSET(GUIDDictionary_eventGetGUID_Parms, ModType), Z_Construct_UClass_UPawnStatMod_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::NewProp_ModType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::NewProp_ModType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::NewProp_ModType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Misc/GUIDDictionary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGUIDDictionary, "GetGUID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(GUIDDictionary_eventGetGUID_Parms), Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGUIDDictionary_GetGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGUIDDictionary_GetGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGUIDDictionary_NoRegister()
	{
		return UGUIDDictionary::StaticClass();
	}
	struct Z_Construct_UClass_UGUIDDictionary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGUIDDictionary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGUIDDictionary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGUIDDictionary_GetGUID, "GetGUID" }, // 1656440371
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGUIDDictionary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Misc/GUIDDictionary.h" },
		{ "ModuleRelativePath", "Misc/GUIDDictionary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGUIDDictionary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGUIDDictionary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGUIDDictionary_Statics::ClassParams = {
		&UGUIDDictionary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGUIDDictionary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGUIDDictionary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGUIDDictionary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGUIDDictionary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGUIDDictionary, 1326096222);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGUIDDictionary(Z_Construct_UClass_UGUIDDictionary, &UGUIDDictionary::StaticClass, TEXT("/Script/VehicleMovement"), TEXT("UGUIDDictionary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGUIDDictionary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
