// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleMovement/PawnStatComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnStatComponent() {}
// Cross Module References
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnStatComponent_NoRegister();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnStatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VehicleMovement();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnStatComponent_SwitchState();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnState_NoRegister();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnStat_NoRegister();
// End Cross Module References
	void UPawnStatComponent::StaticRegisterNativesUPawnStatComponent()
	{
		UClass* Class = UPawnStatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SwitchState", &UPawnStatComponent::execSwitchState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPawnStatComponent_SwitchState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnStatComponent_SwitchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PawnStatComponent.h" },
		{ "ToolTip", "\\fn  void UPawnStatComponent::SwitchState();\n\n\\brief       Switches the current state of the FSM\n\n\\author      Jaymie\n\\date        3/14/2019" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnStatComponent_SwitchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnStatComponent, "SwitchState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnStatComponent_SwitchState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnStatComponent_SwitchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnStatComponent_SwitchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnStatComponent_SwitchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnStatComponent_NoRegister()
	{
		return UPawnStatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPawnStatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MStateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MStateMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MBasePawnStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MBasePawnStat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnStatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnStatComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnStatComponent_SwitchState, "SwitchState" }, // 2305649648
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PawnStatComponent.h" },
		{ "ModuleRelativePath", "PawnStatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStatComponent_Statics::NewProp_MStateMachine_MetaData[] = {
		{ "Category", "PawnStatComponent" },
		{ "ModuleRelativePath", "PawnStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnStatComponent_Statics::NewProp_MStateMachine = { UE4CodeGen_Private::EPropertyClass::Object, "MStateMachine", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000004, 1, nullptr, STRUCT_OFFSET(UPawnStatComponent, MStateMachine), Z_Construct_UClass_UPawnState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnStatComponent_Statics::NewProp_MStateMachine_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnStatComponent_Statics::NewProp_MStateMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnStatComponent_Statics::NewProp_MBasePawnStat_MetaData[] = {
		{ "Category", "PawnStatComponent" },
		{ "ModuleRelativePath", "PawnStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnStatComponent_Statics::NewProp_MBasePawnStat = { UE4CodeGen_Private::EPropertyClass::Object, "MBasePawnStat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000004, 1, nullptr, STRUCT_OFFSET(UPawnStatComponent, MBasePawnStat), Z_Construct_UClass_UPawnStat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnStatComponent_Statics::NewProp_MBasePawnStat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnStatComponent_Statics::NewProp_MBasePawnStat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnStatComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnStatComponent_Statics::NewProp_MStateMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnStatComponent_Statics::NewProp_MBasePawnStat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnStatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnStatComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnStatComponent_Statics::ClassParams = {
		&UPawnStatComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UPawnStatComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPawnStatComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPawnStatComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPawnStatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnStatComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnStatComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnStatComponent, 2575849533);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnStatComponent(Z_Construct_UClass_UPawnStatComponent, &UPawnStatComponent::StaticClass, TEXT("/Script/VehicleMovement"), TEXT("UPawnStatComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnStatComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
