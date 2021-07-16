// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONRPG_PlayerAttributeSet_generated_h
#error "PlayerAttributeSet.generated.h already included, missing '#pragma once' in PlayerAttributeSet.h"
#endif
#define ACTIONRPG_PlayerAttributeSet_generated_h

#define ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_12_DELEGATE \
struct _Script_ActionRPG_eventOnplayerMovementSpeedChangedDelegate_Parms \
{ \
	float PlayerMovementSpeed; \
}; \
static inline void FOnplayerMovementSpeedChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnplayerMovementSpeedChangedDelegate, float PlayerMovementSpeed) \
{ \
	_Script_ActionRPG_eventOnplayerMovementSpeedChangedDelegate_Parms Parms; \
	Parms.PlayerMovementSpeed=PlayerMovementSpeed; \
	OnplayerMovementSpeedChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_RPC_WRAPPERS
#define ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAttributeSet(); \
	friend struct Z_Construct_UClass_UPlayerAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UPlayerAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAttributeSet)


#define ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerAttributeSet(); \
	friend struct Z_Construct_UClass_UPlayerAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UPlayerAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAttributeSet)


#define ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAttributeSet(UPlayerAttributeSet&&); \
	NO_API UPlayerAttributeSet(const UPlayerAttributeSet&); \
public:


#define ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAttributeSet(UPlayerAttributeSet&&); \
	NO_API UPlayerAttributeSet(const UPlayerAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerAttributeSet)


#define ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_PRIVATE_PROPERTY_OFFSET
#define ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_14_PROLOG
#define ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_INCLASS \
	ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class UPlayerAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_Attributes_PlayerAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
