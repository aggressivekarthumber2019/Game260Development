// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VEHICLEMOVEMENT_PawnStat_generated_h
#error "PawnStat.generated.h already included, missing '#pragma once' in PawnStat.h"
#endif
#define VEHICLEMOVEMENT_PawnStat_generated_h

#define VehicleMovement_Source_VehicleMovement_PawnStat_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAppendCurrentSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AppendCurrentSpeed(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentSpeed(Z_Param_NewSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinSpeedFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMinSpeedFactor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxSpeedFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxSpeedFactor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealthFactor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructPawnStat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxSpeedFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinSpeedFactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConstructPawnStat(Z_Param_HealthFactor,Z_Param_MaxSpeedFactor,Z_Param_MinSpeedFactor); \
		P_NATIVE_END; \
	}


#define VehicleMovement_Source_VehicleMovement_PawnStat_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAppendCurrentSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AppendCurrentSpeed(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentSpeed(Z_Param_NewSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinSpeedFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMinSpeedFactor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxSpeedFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxSpeedFactor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealthFactor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructPawnStat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxSpeedFactor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinSpeedFactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConstructPawnStat(Z_Param_HealthFactor,Z_Param_MaxSpeedFactor,Z_Param_MinSpeedFactor); \
		P_NATIVE_END; \
	}


#define VehicleMovement_Source_VehicleMovement_PawnStat_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnStat(); \
	friend struct Z_Construct_UClass_UPawnStat_Statics; \
public: \
	DECLARE_CLASS(UPawnStat, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(UPawnStat)


#define VehicleMovement_Source_VehicleMovement_PawnStat_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPawnStat(); \
	friend struct Z_Construct_UClass_UPawnStat_Statics; \
public: \
	DECLARE_CLASS(UPawnStat, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(UPawnStat)


#define VehicleMovement_Source_VehicleMovement_PawnStat_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnStat(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnStat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnStat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnStat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnStat(UPawnStat&&); \
	NO_API UPawnStat(const UPawnStat&); \
public:


#define VehicleMovement_Source_VehicleMovement_PawnStat_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnStat(UPawnStat&&); \
	NO_API UPawnStat(const UPawnStat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnStat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnStat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPawnStat)


#define VehicleMovement_Source_VehicleMovement_PawnStat_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MHealthFactor() { return STRUCT_OFFSET(UPawnStat, MHealthFactor); } \
	FORCEINLINE static uint32 __PPO__MMaxSpeedFactor() { return STRUCT_OFFSET(UPawnStat, MMaxSpeedFactor); } \
	FORCEINLINE static uint32 __PPO__MMinSpeedFactor() { return STRUCT_OFFSET(UPawnStat, MMinSpeedFactor); } \
	FORCEINLINE static uint32 __PPO__MCurrentSpeed() { return STRUCT_OFFSET(UPawnStat, MCurrentSpeed); }


#define VehicleMovement_Source_VehicleMovement_PawnStat_h_13_PROLOG
#define VehicleMovement_Source_VehicleMovement_PawnStat_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovement_Source_VehicleMovement_PawnStat_h_16_PRIVATE_PROPERTY_OFFSET \
	VehicleMovement_Source_VehicleMovement_PawnStat_h_16_RPC_WRAPPERS \
	VehicleMovement_Source_VehicleMovement_PawnStat_h_16_INCLASS \
	VehicleMovement_Source_VehicleMovement_PawnStat_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleMovement_Source_VehicleMovement_PawnStat_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovement_Source_VehicleMovement_PawnStat_h_16_PRIVATE_PROPERTY_OFFSET \
	VehicleMovement_Source_VehicleMovement_PawnStat_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleMovement_Source_VehicleMovement_PawnStat_h_16_INCLASS_NO_PURE_DECLS \
	VehicleMovement_Source_VehicleMovement_PawnStat_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleMovement_Source_VehicleMovement_PawnStat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
