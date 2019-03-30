// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef VEHICLEMOVEMENT_TriggerableItem_generated_h
#error "TriggerableItem.generated.h already included, missing '#pragma once' in TriggerableItem.h"
#endif
#define VEHICLEMOVEMENT_TriggerableItem_generated_h

#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerableItem(); \
	friend struct Z_Construct_UClass_ATriggerableItem_Statics; \
public: \
	DECLARE_CLASS(ATriggerableItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(ATriggerableItem)


#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATriggerableItem(); \
	friend struct Z_Construct_UClass_ATriggerableItem_Statics; \
public: \
	DECLARE_CLASS(ATriggerableItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(ATriggerableItem)


#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerableItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerableItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerableItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerableItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerableItem(ATriggerableItem&&); \
	NO_API ATriggerableItem(const ATriggerableItem&); \
public:


#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerableItem(ATriggerableItem&&); \
	NO_API ATriggerableItem(const ATriggerableItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerableItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerableItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerableItem)


#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_PRIVATE_PROPERTY_OFFSET
#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_10_PROLOG
#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_PRIVATE_PROPERTY_OFFSET \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_RPC_WRAPPERS \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_INCLASS \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_PRIVATE_PROPERTY_OFFSET \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_INCLASS_NO_PURE_DECLS \
	VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleMovementProjectNOSTEAM_Source_VehicleMovement_Items_TriggerableItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
