// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VEHICLEMOVEMENT_VehicleMovementPawn_generated_h
#error "VehicleMovementPawn.generated.h already included, missing '#pragma once' in VehicleMovementPawn.h"
#endif
#define VEHICLEMOVEMENT_VehicleMovementPawn_generated_h

#define VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_RPC_WRAPPERS
#define VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVehicleMovementPawn(); \
	friend struct Z_Construct_UClass_AVehicleMovementPawn_Statics; \
public: \
	DECLARE_CLASS(AVehicleMovementPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(AVehicleMovementPawn)


#define VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAVehicleMovementPawn(); \
	friend struct Z_Construct_UClass_AVehicleMovementPawn_Statics; \
public: \
	DECLARE_CLASS(AVehicleMovementPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(AVehicleMovementPawn)


#define VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVehicleMovementPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVehicleMovementPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicleMovementPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicleMovementPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicleMovementPawn(AVehicleMovementPawn&&); \
	NO_API AVehicleMovementPawn(const AVehicleMovementPawn&); \
public:


#define VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicleMovementPawn(AVehicleMovementPawn&&); \
	NO_API AVehicleMovementPawn(const AVehicleMovementPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicleMovementPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicleMovementPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVehicleMovementPawn)


#define VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AVehicleMovementPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AVehicleMovementPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(AVehicleMovementPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(AVehicleMovementPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(AVehicleMovementPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(AVehicleMovementPawn, InCarGear); }


#define VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_14_PROLOG
#define VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_RPC_WRAPPERS \
	VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_INCLASS \
	VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_INCLASS_NO_PURE_DECLS \
	VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleMovement_Source_VehicleMovement_VehicleMovementPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
