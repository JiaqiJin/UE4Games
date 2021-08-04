// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_RPGCharacter_generated_h
#error "RPGCharacter.generated.h already included, missing '#pragma once' in RPGCharacter.h"
#endif
#define RPG_RPGCharacter_generated_h

#define RPG_Source_RPG_RPGCharacter_h_20_SPARSE_DATA
#define RPG_Source_RPG_RPGCharacter_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAirControl); \
	DECLARE_FUNCTION(execGetJumpHeightMultiplier); \
	DECLARE_FUNCTION(execGetJumpHeight); \
	DECLARE_FUNCTION(execGetMovementSpeedMultiplierBase); \
	DECLARE_FUNCTION(execGetMovementSpeedMultiplier); \
	DECLARE_FUNCTION(execGetMovementSpeedBaseValue); \
	DECLARE_FUNCTION(execGetMovementSpeed);


#define RPG_Source_RPG_RPGCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAirControl); \
	DECLARE_FUNCTION(execGetJumpHeightMultiplier); \
	DECLARE_FUNCTION(execGetJumpHeight); \
	DECLARE_FUNCTION(execGetMovementSpeedMultiplierBase); \
	DECLARE_FUNCTION(execGetMovementSpeedMultiplier); \
	DECLARE_FUNCTION(execGetMovementSpeedBaseValue); \
	DECLARE_FUNCTION(execGetMovementSpeed);


#define RPG_Source_RPG_RPGCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGCharacter(); \
	friend struct Z_Construct_UClass_ARPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ARPGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(ARPGCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGCharacter*>(this); }


#define RPG_Source_RPG_RPGCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesARPGCharacter(); \
	friend struct Z_Construct_UClass_ARPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ARPGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(ARPGCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGCharacter*>(this); }


#define RPG_Source_RPG_RPGCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGCharacter(ARPGCharacter&&); \
	NO_API ARPGCharacter(const ARPGCharacter&); \
public:


#define RPG_Source_RPG_RPGCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGCharacter(ARPGCharacter&&); \
	NO_API ARPGCharacter(const ARPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGCharacter)


#define RPG_Source_RPG_RPGCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ARPGCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ARPGCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__DefaultAbilities() { return STRUCT_OFFSET(ARPGCharacter, DefaultAbilities); }


#define RPG_Source_RPG_RPGCharacter_h_17_PROLOG
#define RPG_Source_RPG_RPGCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_RPGCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_RPGCharacter_h_20_SPARSE_DATA \
	RPG_Source_RPG_RPGCharacter_h_20_RPC_WRAPPERS \
	RPG_Source_RPG_RPGCharacter_h_20_INCLASS \
	RPG_Source_RPG_RPGCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_Source_RPG_RPGCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_RPGCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_RPGCharacter_h_20_SPARSE_DATA \
	RPG_Source_RPG_RPGCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_Source_RPG_RPGCharacter_h_20_INCLASS_NO_PURE_DECLS \
	RPG_Source_RPG_RPGCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_API UClass* StaticClass<class ARPGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Source_RPG_RPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
