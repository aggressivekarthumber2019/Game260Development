// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VEHICLEMOVEMENT_AVehiclePawn_generated_h
#error "AVehiclePawn.generated.h already included, missing '#pragma once' in AVehiclePawn.h"
#endif
#define VEHICLEMOVEMENT_AVehiclePawn_generated_h

#define VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_RPC_WRAPPERS
#define VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAVehiclePawn(); \
	friend struct Z_Construct_UClass_AAVehiclePawn_Statics; \
public: \
	DECLARE_CLASS(AAVehiclePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(AAVehiclePawn)


#define VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAVehiclePawn(); \
	friend struct Z_Construct_UClass_AAVehiclePawn_Statics; \
public: \
	DECLARE_CLASS(AAVehiclePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(AAVehiclePawn)


#define VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAVehiclePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAVehiclePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAVehiclePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAVehiclePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAVehiclePawn(AAVehiclePawn&&); \
	NO_API AAVehiclePawn(const AAVehiclePawn&); \
public:


#define VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAVehiclePawn(AAVehiclePawn&&); \
	NO_API AAVehiclePawn(const AAVehiclePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAVehiclePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAVehiclePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAVehiclePawn)


#define VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentStat() { return STRUCT_OFFSET(AAVehiclePawn, CurrentStat); } \
	FORCEINLINE static uint32 __PPO__SpeedCapMod() { return STRUCT_OFFSET(AAVehiclePawn, SpeedCapMod); }


#define VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_9_PROLOG
#define VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_RPC_WRAPPERS \
	VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_INCLASS \
	VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_INCLASS_NO_PURE_DECLS \
	VehicleMovement_Source_VehicleMovement_AVehiclePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleMovement_Source_VehicleMovement_AVehiclePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
