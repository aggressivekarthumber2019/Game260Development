// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCarStat;
#ifdef VEHICLEMOVEMENT_PawnStatMod_generated_h
#error "PawnStatMod.generated.h already included, missing '#pragma once' in PawnStatMod.h"
#endif
#define VEHICLEMOVEMENT_PawnStatMod_generated_h

#define VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_RPC_WRAPPERS \
	virtual void DisableMod_Implementation(UCarStat* StatType); \
	virtual void EnableMod_Implementation(UCarStat* StatType); \
 \
	DECLARE_FUNCTION(execDisableMod) \
	{ \
		P_GET_OBJECT(UCarStat,Z_Param_StatType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableMod_Implementation(Z_Param_StatType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableMod) \
	{ \
		P_GET_OBJECT(UCarStat,Z_Param_StatType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableMod_Implementation(Z_Param_StatType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstruct) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxStack); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxTimeMS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Construct(Z_Param_MaxStack,Z_Param_MaxTimeMS); \
		P_NATIVE_END; \
	}


#define VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableMod) \
	{ \
		P_GET_OBJECT(UCarStat,Z_Param_StatType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableMod_Implementation(Z_Param_StatType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableMod) \
	{ \
		P_GET_OBJECT(UCarStat,Z_Param_StatType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableMod_Implementation(Z_Param_StatType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstruct) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxStack); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxTimeMS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Construct(Z_Param_MaxStack,Z_Param_MaxTimeMS); \
		P_NATIVE_END; \
	}


#define VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_EVENT_PARMS \
	struct PawnStatMod_eventDisableMod_Parms \
	{ \
		UCarStat* StatType; \
	}; \
	struct PawnStatMod_eventEnableMod_Parms \
	{ \
		UCarStat* StatType; \
	};


#define VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_CALLBACK_WRAPPERS
#define VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnStatMod(); \
	friend struct Z_Construct_UClass_UPawnStatMod_Statics; \
public: \
	DECLARE_CLASS(UPawnStatMod, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(UPawnStatMod)


#define VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPawnStatMod(); \
	friend struct Z_Construct_UClass_UPawnStatMod_Statics; \
public: \
	DECLARE_CLASS(UPawnStatMod, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(UPawnStatMod)


#define VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_STANDARD_CONSTRUCTORS \
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


#define VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_ENHANCED_CONSTRUCTORS \
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


#define VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GUID() { return STRUCT_OFFSET(UPawnStatMod, GUID); }


#define VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_17_PROLOG \
	VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_EVENT_PARMS


#define VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_PRIVATE_PROPERTY_OFFSET \
	VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_RPC_WRAPPERS \
	VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_CALLBACK_WRAPPERS \
	VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_INCLASS \
	VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_PRIVATE_PROPERTY_OFFSET \
	VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_CALLBACK_WRAPPERS \
	VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_INCLASS_NO_PURE_DECLS \
	VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleMovement_Source_VehicleMovement_Items_Mods_PawnStatMod_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
