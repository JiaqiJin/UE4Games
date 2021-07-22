// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONRPG_HeroPlayerState_generated_h
#error "HeroPlayerState.generated.h already included, missing '#pragma once' in HeroPlayerState.h"
#endif
#define ACTIONRPG_HeroPlayerState_generated_h

#define ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_RPC_WRAPPERS
#define ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroPlayerState(); \
	friend struct Z_Construct_UClass_AHeroPlayerState_Statics; \
public: \
	DECLARE_CLASS(AHeroPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(AHeroPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AHeroPlayerState*>(this); }


#define ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAHeroPlayerState(); \
	friend struct Z_Construct_UClass_AHeroPlayerState_Statics; \
public: \
	DECLARE_CLASS(AHeroPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(AHeroPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AHeroPlayerState*>(this); }


#define ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroPlayerState(AHeroPlayerState&&); \
	NO_API AHeroPlayerState(const AHeroPlayerState&); \
public:


#define ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroPlayerState(AHeroPlayerState&&); \
	NO_API AHeroPlayerState(const AHeroPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroPlayerState)


#define ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AttributeSetBase() { return STRUCT_OFFSET(AHeroPlayerState, AttributeSetBase); }


#define ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_14_PROLOG
#define ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_INCLASS \
	ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class AHeroPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_PlayerState_HeroPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
