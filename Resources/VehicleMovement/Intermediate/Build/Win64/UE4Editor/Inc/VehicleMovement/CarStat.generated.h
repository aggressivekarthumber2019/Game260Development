// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VEHICLEMOVEMENT_CarStat_generated_h
#error "CarStat.generated.h already included, missing '#pragma once' in CarStat.h"
#endif
#define VEHICLEMOVEMENT_CarStat_generated_h

#define VehicleMovement_Source_VehicleMovement_CarStat_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConstructCarStat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxSpeedFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinSpeedFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HandleFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AccelerationFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_WeightFactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConstructCarStat(Z_Param_HealthFactor,Z_Param_MaxSpeedFactor,Z_Param_MinSpeedFactor,Z_Param_HandleFactor,Z_Param_AccelerationFactor,Z_Param_WeightFactor); \
		P_NATIVE_END; \
	}


#define VehicleMovement_Source_VehicleMovement_CarStat_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConstructCarStat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxSpeedFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinSpeedFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HandleFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AccelerationFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_WeightFactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConstructCarStat(Z_Param_HealthFactor,Z_Param_MaxSpeedFactor,Z_Param_MinSpeedFactor,Z_Param_HandleFactor,Z_Param_AccelerationFactor,Z_Param_WeightFactor); \
		P_NATIVE_END; \
	}


#define VehicleMovement_Source_VehicleMovement_CarStat_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCarStat(); \
	friend struct Z_Construct_UClass_UCarStat_Statics; \
public: \
	DECLARE_CLASS(UCarStat, UPawnStat, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(UCarStat)


#define VehicleMovement_Source_VehicleMovement_CarStat_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCarStat(); \
	friend struct Z_Construct_UClass_UCarStat_Statics; \
public: \
	DECLARE_CLASS(UCarStat, UPawnStat, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(UCarStat)


#define VehicleMovement_Source_VehicleMovement_CarStat_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCarStat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCarStat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCarStat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCarStat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCarStat(UCarStat&&); \
	NO_API UCarStat(const UCarStat&); \
public:


#define VehicleMovement_Source_VehicleMovement_CarStat_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCarStat() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCarStat(UCarStat&&); \
	NO_API UCarStat(const UCarStat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCarStat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCarStat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCarStat)


#define VehicleMovement_Source_VehicleMovement_CarStat_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MHandleFactor() { return STRUCT_OFFSET(UCarStat, MHandleFactor); } \
	FORCEINLINE static uint32 __PPO__MAccelerationFactor() { return STRUCT_OFFSET(UCarStat, MAccelerationFactor); } \
	FORCEINLINE static uint32 __PPO__MWeightFactor() { return STRUCT_OFFSET(UCarStat, MWeightFactor); }


#define VehicleMovement_Source_VehicleMovement_CarStat_h_12_PROLOG
#define VehicleMovement_Source_VehicleMovement_CarStat_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovement_Source_VehicleMovement_CarStat_h_15_PRIVATE_PROPERTY_OFFSET \
	VehicleMovement_Source_VehicleMovement_CarStat_h_15_RPC_WRAPPERS \
	VehicleMovement_Source_VehicleMovement_CarStat_h_15_INCLASS \
	VehicleMovement_Source_VehicleMovement_CarStat_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleMovement_Source_VehicleMovement_CarStat_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovement_Source_VehicleMovement_CarStat_h_15_PRIVATE_PROPERTY_OFFSET \
	VehicleMovement_Source_VehicleMovement_CarStat_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleMovement_Source_VehicleMovement_CarStat_h_15_INCLASS_NO_PURE_DECLS \
	VehicleMovement_Source_VehicleMovement_CarStat_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleMovement_Source_VehicleMovement_CarStat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
