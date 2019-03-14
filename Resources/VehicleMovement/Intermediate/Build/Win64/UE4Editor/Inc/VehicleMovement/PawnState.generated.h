// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPawnStatMod;
class UPawnStat;
class AAVehiclePawn;
#ifdef VEHICLEMOVEMENT_PawnState_generated_h
#error "PawnState.generated.h already included, missing '#pragma once' in PawnState.h"
#endif
#define VEHICLEMOVEMENT_PawnState_generated_h

#define VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_RPC_WRAPPERS \
	virtual void InvokeMod_Implementation(UPawnStatMod* Mod); \
	virtual void ExitState_Implementation(); \
	virtual void TickState_Implementation(const float DeltaTime); \
	virtual void EnterState_Implementation(UPawnStat* PawnStat, AAVehiclePawn* VehiclePawn); \
 \
	DECLARE_FUNCTION(execInvokeMod) \
	{ \
		P_GET_OBJECT(UPawnStatMod,Z_Param_Mod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InvokeMod_Implementation(Z_Param_Mod); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCallableMod) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Mod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCallableMod(Z_Param_Mod); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExitState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitState_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickState) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TickState_Implementation(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterState) \
	{ \
		P_GET_OBJECT(UPawnStat,Z_Param_PawnStat); \
		P_GET_OBJECT(AAVehiclePawn,Z_Param_VehiclePawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterState_Implementation(Z_Param_PawnStat,Z_Param_VehiclePawn); \
		P_NATIVE_END; \
	}


#define VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInvokeMod) \
	{ \
		P_GET_OBJECT(UPawnStatMod,Z_Param_Mod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InvokeMod_Implementation(Z_Param_Mod); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCallableMod) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Mod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCallableMod(Z_Param_Mod); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExitState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitState_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickState) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TickState_Implementation(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterState) \
	{ \
		P_GET_OBJECT(UPawnStat,Z_Param_PawnStat); \
		P_GET_OBJECT(AAVehiclePawn,Z_Param_VehiclePawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterState_Implementation(Z_Param_PawnStat,Z_Param_VehiclePawn); \
		P_NATIVE_END; \
	}


#define VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_EVENT_PARMS \
	struct PawnState_eventEnterState_Parms \
	{ \
		UPawnStat* PawnStat; \
		AAVehiclePawn* VehiclePawn; \
	}; \
	struct PawnState_eventInvokeMod_Parms \
	{ \
		UPawnStatMod* Mod; \
	}; \
	struct PawnState_eventTickState_Parms \
	{ \
		float DeltaTime; \
	};


#define VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_CALLBACK_WRAPPERS
#define VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnState(); \
	friend struct Z_Construct_UClass_UPawnState_Statics; \
public: \
	DECLARE_CLASS(UPawnState, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(UPawnState)


#define VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPawnState(); \
	friend struct Z_Construct_UClass_UPawnState_Statics; \
public: \
	DECLARE_CLASS(UPawnState, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(UPawnState)


#define VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnState(UPawnState&&); \
	NO_API UPawnState(const UPawnState&); \
public:


#define VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnState(UPawnState&&); \
	NO_API UPawnState(const UPawnState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnState)


#define VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_PRIVATE_PROPERTY_OFFSET
#define VehicleMovement_Source_VehicleMovement_Items_PawnState_h_12_PROLOG \
	VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_EVENT_PARMS


#define VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_PRIVATE_PROPERTY_OFFSET \
	VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_RPC_WRAPPERS \
	VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_CALLBACK_WRAPPERS \
	VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_INCLASS \
	VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_PRIVATE_PROPERTY_OFFSET \
	VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_CALLBACK_WRAPPERS \
	VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_INCLASS_NO_PURE_DECLS \
	VehicleMovement_Source_VehicleMovement_Items_PawnState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleMovement_Source_VehicleMovement_Items_PawnState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
