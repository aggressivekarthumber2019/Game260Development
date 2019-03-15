// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPawnStatMod;
struct FGuid;
#ifdef VEHICLEMOVEMENT_GUIDDictionary_generated_h
#error "GUIDDictionary.generated.h already included, missing '#pragma once' in GUIDDictionary.h"
#endif
#define VEHICLEMOVEMENT_GUIDDictionary_generated_h

#define VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGUID) \
	{ \
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UPawnStatMod> ,Z_Param_Out_ModType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuid*)Z_Param__Result=UGUIDDictionary::GetGUID(Z_Param_Out_ModType); \
		P_NATIVE_END; \
	}


#define VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGUID) \
	{ \
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UPawnStatMod> ,Z_Param_Out_ModType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuid*)Z_Param__Result=UGUIDDictionary::GetGUID(Z_Param_Out_ModType); \
		P_NATIVE_END; \
	}


#define VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGUIDDictionary(); \
	friend struct Z_Construct_UClass_UGUIDDictionary_Statics; \
public: \
	DECLARE_CLASS(UGUIDDictionary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(UGUIDDictionary)


#define VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGUIDDictionary(); \
	friend struct Z_Construct_UClass_UGUIDDictionary_Statics; \
public: \
	DECLARE_CLASS(UGUIDDictionary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleMovement"), NO_API) \
	DECLARE_SERIALIZER(UGUIDDictionary)


#define VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGUIDDictionary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGUIDDictionary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGUIDDictionary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGUIDDictionary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGUIDDictionary(UGUIDDictionary&&); \
	NO_API UGUIDDictionary(const UGUIDDictionary&); \
public:


#define VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGUIDDictionary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGUIDDictionary(UGUIDDictionary&&); \
	NO_API UGUIDDictionary(const UGUIDDictionary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGUIDDictionary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGUIDDictionary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGUIDDictionary)


#define VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_PRIVATE_PROPERTY_OFFSET
#define VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_14_PROLOG
#define VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_PRIVATE_PROPERTY_OFFSET \
	VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_RPC_WRAPPERS \
	VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_INCLASS \
	VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_PRIVATE_PROPERTY_OFFSET \
	VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_INCLASS_NO_PURE_DECLS \
	VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleMovement_Source_VehicleMovement_Misc_GUIDDictionary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
