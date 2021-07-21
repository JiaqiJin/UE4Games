// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONRPG_KawaiiPlayerCharacter_generated_h
#error "KawaiiPlayerCharacter.generated.h already included, missing '#pragma once' in KawaiiPlayerCharacter.h"
#endif
#define ACTIONRPG_KawaiiPlayerCharacter_generated_h

#define ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMovementSpeedBaseValue); \
	DECLARE_FUNCTION(execGetMovementSpeed); \
	DECLARE_FUNCTION(execOnPlayerMovementSpeedChanged);


#define ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMovementSpeedBaseValue); \
	DECLARE_FUNCTION(execGetMovementSpeed); \
	DECLARE_FUNCTION(execOnPlayerMovementSpeedChanged);


#define ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKawaiiPlayerCharacter(); \
	friend struct Z_Construct_UClass_AKawaiiPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AKawaiiPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(AKawaiiPlayerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AKawaiiPlayerCharacter*>(this); }


#define ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAKawaiiPlayerCharacter(); \
	friend struct Z_Construct_UClass_AKawaiiPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AKawaiiPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(AKawaiiPlayerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AKawaiiPlayerCharacter*>(this); }


#define ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKawaiiPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKawaiiPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKawaiiPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKawaiiPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKawaiiPlayerCharacter(AKawaiiPlayerCharacter&&); \
	NO_API AKawaiiPlayerCharacter(const AKawaiiPlayerCharacter&); \
public:


#define ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKawaiiPlayerCharacter(AKawaiiPlayerCharacter&&); \
	NO_API AKawaiiPlayerCharacter(const AKawaiiPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKawaiiPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKawaiiPlayerCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKawaiiPlayerCharacter)


#define ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultAttributesEffect() { return STRUCT_OFFSET(AKawaiiPlayerCharacter, DefaultAttributesEffect); }


#define ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_16_PROLOG
#define ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_INCLASS \
	ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class AKawaiiPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_PlayerController_KawaiiPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
