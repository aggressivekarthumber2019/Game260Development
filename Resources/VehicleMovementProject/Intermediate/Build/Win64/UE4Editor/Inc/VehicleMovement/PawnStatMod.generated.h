// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VEHICLEMOVEMENT_PawnStatMod_generated_h
#error "PawnStatMod.generated.h already included, missing '#pragma once' in PawnStatMod.h"
#endif
#define VEHICLEMOVEMENT_PawnStatMod_generated_h

#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConstruct) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GUID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxStack); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxTimeMS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Construct(Z_Param_GUID,Z_Param_MaxStack,Z_Param_MaxTimeMS); \
		P_NATIVE_END; \
	}


#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConstruct) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GUID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxStack); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxTimeMS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Construct(Z_Param_GUID,Z_Param_MaxStack,Z_Param_MaxTimeMS); \
		P_NATIVE_END; \
	}


#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnStatMod(); \
	friend struct Z_Construct_UClass_UPawnStatMod_Statics; \
public: \
	DECLARE_CLASS(UPawnStatMod, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(UPawnStatMod)


#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPawnStatMod(); \
	friend struct Z_Construct_UClass_UPawnStatMod_Statics; \
public: \
	DECLARE_CLASS(UPawnStatMod, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(UPawnStatMod)


#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnStatMod(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnStatMod) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnStatMod); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnStatMod); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnStatMod(UPawnStatMod&&); \
	NO_API UPawnStatMod(const UPawnStatMod&); \
public:


#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnStatMod(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnStatMod(UPawnStatMod&&); \
	NO_API UPawnStatMod(const UPawnStatMod&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnStatMod); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnStatMod); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnStatMod)


#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_PRIVATE_PROPERTY_OFFSET
#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_16_PROLOG
#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_PRIVATE_PROPERTY_OFFSET \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_RPC_WRAPPERS \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_INCLASS \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_PRIVATE_PROPERTY_OFFSET \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_INCLASS_NO_PURE_DECLS \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleMovementProjectNOSTEAM_Source_VehicleMovement_PawnStatMod_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
