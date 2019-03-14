// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleMovement/Items/PawnState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnState() {}
// Cross Module References
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnState_NoRegister();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VehicleMovement();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnState_AddCallableMod();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnStatMod_NoRegister();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnState_EnterState();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_AAVehiclePawn_NoRegister();
	VEHICLEMOVEMENT_API UClass* Z_Construct_UClass_UPawnStat_NoRegister();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnState_ExitState();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnState_InvokeMod();
	VEHICLEMOVEMENT_API UFunction* Z_Construct_UFunction_UPawnState_TickState();
// End Cross Module References
	static FName NAME_UPawnState_EnterState = FName(TEXT("EnterState"));
	void UPawnState::EnterState(UPawnStat* PawnStat, AAVehiclePawn* VehiclePawn)
	{
		PawnState_eventEnterState_Parms Parms;
		Parms.PawnStat=PawnStat;
		Parms.VehiclePawn=VehiclePawn;
		ProcessEvent(FindFunctionChecked(NAME_UPawnState_EnterState),&Parms);
	}
	static FName NAME_UPawnState_ExitState = FName(TEXT("ExitState"));
	void UPawnState::ExitState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPawnState_ExitState),NULL);
	}
	static FName NAME_UPawnState_InvokeMod = FName(TEXT("InvokeMod"));
	void UPawnState::InvokeMod(UPawnStatMod* Mod)
	{
		PawnState_eventInvokeMod_Parms Parms;
		Parms.Mod=Mod;
		ProcessEvent(FindFunctionChecked(NAME_UPawnState_InvokeMod),&Parms);
	}
	static FName NAME_UPawnState_TickState = FName(TEXT("TickState"));
	void UPawnState::TickState(const float DeltaTime)
	{
		PawnState_eventTickState_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UPawnState_TickState),&Parms);
	}
	void UPawnState::StaticRegisterNativesUPawnState()
	{
		UClass* Class = UPawnState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCallableMod", &UPawnState::execAddCallableMod },
			{ "EnterState", &UPawnState::execEnterState },
			{ "ExitState", &UPawnState::execExitState },
			{ "InvokeMod", &UPawnState::execInvokeMod },
			{ "TickState", &UPawnState::execTickState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPawnState_AddCallableMod_Statics
	{
		struct PawnState_eventAddCallableMod_Parms
		{
			const TSubclassOf<UPawnStatMod>  Mod;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mod_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Mod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnState_AddCallableMod_Statics::NewProp_Mod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPawnState_AddCallableMod_Statics::NewProp_Mod = { UE4CodeGen_Private::EPropertyClass::Class, "Mod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000082, 1, nullptr, STRUCT_OFFSET(PawnState_eventAddCallableMod_Parms, Mod), Z_Construct_UClass_UPawnStatMod_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UPawnState_AddCallableMod_Statics::NewProp_Mod_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPawnState_AddCallableMod_Statics::NewProp_Mod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnState_AddCallableMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnState_AddCallableMod_Statics::NewProp_Mod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnState_AddCallableMod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Items/PawnState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnState_AddCallableMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnState, "AddCallableMod", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PawnState_eventAddCallableMod_Parms), Z_Construct_UFunction_UPawnState_AddCallableMod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnState_AddCallableMod_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnState_AddCallableMod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnState_AddCallableMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnState_AddCallableMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnState_AddCallableMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnState_EnterState_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehiclePawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnStat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnState_EnterState_Statics::NewProp_VehiclePawn = { UE4CodeGen_Private::EPropertyClass::Object, "VehiclePawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnState_eventEnterState_Parms, VehiclePawn), Z_Construct_UClass_AAVehiclePawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnState_EnterState_Statics::NewProp_PawnStat = { UE4CodeGen_Private::EPropertyClass::Object, "PawnStat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnState_eventEnterState_Parms, PawnStat), Z_Construct_UClass_UPawnStat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnState_EnterState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnState_EnterState_Statics::NewProp_VehiclePawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnState_EnterState_Statics::NewProp_PawnStat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnState_EnterState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Items/PawnState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnState_EnterState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnState, "EnterState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(PawnState_eventEnterState_Parms), Z_Construct_UFunction_UPawnState_EnterState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnState_EnterState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnState_EnterState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnState_EnterState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnState_EnterState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnState_EnterState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnState_ExitState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnState_ExitState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Items/PawnState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnState_ExitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnState, "ExitState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnState_ExitState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnState_ExitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnState_ExitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnState_ExitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnState_InvokeMod_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnState_InvokeMod_Statics::NewProp_Mod = { UE4CodeGen_Private::EPropertyClass::Object, "Mod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnState_eventInvokeMod_Parms, Mod), Z_Construct_UClass_UPawnStatMod_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnState_InvokeMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnState_InvokeMod_Statics::NewProp_Mod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnState_InvokeMod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Items/PawnState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnState_InvokeMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnState, "InvokeMod", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(PawnState_eventInvokeMod_Parms), Z_Construct_UFunction_UPawnState_InvokeMod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnState_InvokeMod_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnState_InvokeMod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnState_InvokeMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnState_InvokeMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnState_InvokeMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnState_TickState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnState_TickState_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnState_TickState_Statics::NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PawnState_eventTickState_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UPawnState_TickState_Statics::NewProp_DeltaTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPawnState_TickState_Statics::NewProp_DeltaTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnState_TickState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnState_TickState_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnState_TickState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Items/PawnState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnState_TickState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnState, "TickState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(PawnState_eventTickState_Parms), Z_Construct_UFunction_UPawnState_TickState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnState_TickState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnState_TickState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnState_TickState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnState_TickState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnState_TickState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnState_NoRegister()
	{
		return UPawnState::StaticClass();
	}
	struct Z_Construct_UClass_UPawnState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnState_AddCallableMod, "AddCallableMod" }, // 1950183784
		{ &Z_Construct_UFunction_UPawnState_EnterState, "EnterState" }, // 2629205527
		{ &Z_Construct_UFunction_UPawnState_ExitState, "ExitState" }, // 1014282183
		{ &Z_Construct_UFunction_UPawnState_InvokeMod, "InvokeMod" }, // 1898930834
		{ &Z_Construct_UFunction_UPawnState_TickState, "TickState" }, // 2173671360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Items/PawnState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Items/PawnState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnState_Statics::ClassParams = {
		&UPawnState::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPawnState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPawnState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnState, 1139310976);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnState(Z_Construct_UClass_UPawnState, &UPawnState::StaticClass, TEXT("/Script/VehicleMovement"), TEXT("UPawnState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
