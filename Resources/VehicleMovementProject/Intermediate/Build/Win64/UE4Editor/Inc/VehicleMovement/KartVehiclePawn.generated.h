// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VEHICLEMOVEMENT_KartVehiclePawn_generated_h
#error "KartVehiclePawn.generated.h already included, missing '#pragma once' in KartVehiclePawn.h"
#endif
#define VEHICLEMOVEMENT_KartVehiclePawn_generated_h

#define VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentTurnAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentTurnAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSpeedAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentSpeedAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentTurnAmount) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentTurnAmount(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentSpeedAmount) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentSpeedAmount(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDebugModeEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bDebugOn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDebugModeEnabled(Z_Param_bDebugOn); \
		P_NATIVE_END; \
	}


#define VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentTurnAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentTurnAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSpeedAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentSpeedAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentTurnAmount) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentTurnAmount(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentSpeedAmount) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentSpeedAmount(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDebugModeEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bDebugOn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDebugModeEnabled(Z_Param_bDebugOn); \
		P_NATIVE_END; \
	}


#define VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKartVehiclePawn(); \
	friend struct Z_Construct_UClass_AKartVehiclePawn_Statics; \
public: \
	DECLARE_CLASS(AKartVehiclePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(AKartVehiclePawn)


#define VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAKartVehiclePawn(); \
	friend struct Z_Construct_UClass_AKartVehiclePawn_Statics; \
public: \
	DECLARE_CLASS(AKartVehiclePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(AKartVehiclePawn)


#define VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKartVehiclePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKartVehiclePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKartVehiclePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKartVehiclePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKartVehiclePawn(AKartVehiclePawn&&); \
	NO_API AKartVehiclePawn(const AKartVehiclePawn&); \
public:


#define VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKartVehiclePawn(AKartVehiclePawn&&); \
	NO_API AKartVehiclePawn(const AKartVehiclePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKartVehiclePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKartVehiclePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKartVehiclePawn)


#define VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_PRIVATE_PROPERTY_OFFSET
#define VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_15_PROLOG
#define VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_PRIVATE_PROPERTY_OFFSET \
	VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_RPC_WRAPPERS \
	VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_INCLASS \
	VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_PRIVATE_PROPERTY_OFFSET \
	VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_INCLASS_NO_PURE_DECLS \
	VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleMovementProject_Source_VehicleMovement_KartVehiclePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
