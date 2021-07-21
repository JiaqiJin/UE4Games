// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONRPG_KawaiiPlayerState_generated_h
#error "KawaiiPlayerState.generated.h already included, missing '#pragma once' in KawaiiPlayerState.h"
#endif
#define ACTIONRPG_KawaiiPlayerState_generated_h

#define ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMovementSpeed);


#define ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMovementSpeed);


#define ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKawaiiPlayerState(); \
	friend struct Z_Construct_UClass_AKawaiiPlayerState_Statics; \
public: \
	DECLARE_CLASS(AKawaiiPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(AKawaiiPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AKawaiiPlayerState*>(this); }


#define ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAKawaiiPlayerState(); \
	friend struct Z_Construct_UClass_AKawaiiPlayerState_Statics; \
public: \
	DECLARE_CLASS(AKawaiiPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(AKawaiiPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AKawaiiPlayerState*>(this); }


#define ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKawaiiPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKawaiiPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKawaiiPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKawaiiPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKawaiiPlayerState(AKawaiiPlayerState&&); \
	NO_API AKawaiiPlayerState(const AKawaiiPlayerState&); \
public:


#define ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKawaiiPlayerState(AKawaiiPlayerState&&); \
	NO_API AKawaiiPlayerState(const AKawaiiPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKawaiiPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKawaiiPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKawaiiPlayerState)


#define ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AbilitySystemComponent() { return STRUCT_OFFSET(AKawaiiPlayerState, AbilitySystemComponent); } \
	FORCEINLINE static uint32 __PPO__AttributeSetBase() { return STRUCT_OFFSET(AKawaiiPlayerState, AttributeSetBase); }


#define ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_14_PROLOG
#define ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_INCLASS \
	ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class AKawaiiPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_PlayerState_KawaiiPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
