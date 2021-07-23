// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIGHTING_FightingCharacter_generated_h
#error "FightingCharacter.generated.h already included, missing '#pragma once' in FightingCharacter.h"
#endif
#define FIGHTING_FightingCharacter_generated_h

#define Fighting_Source_Fighting_FightingCharacter_h_12_SPARSE_DATA
#define Fighting_Source_Fighting_FightingCharacter_h_12_RPC_WRAPPERS
#define Fighting_Source_Fighting_FightingCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Fighting_Source_Fighting_FightingCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFightingCharacter(); \
	friend struct Z_Construct_UClass_AFightingCharacter_Statics; \
public: \
	DECLARE_CLASS(AFightingCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fighting"), NO_API) \
	DECLARE_SERIALIZER(AFightingCharacter)


#define Fighting_Source_Fighting_FightingCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFightingCharacter(); \
	friend struct Z_Construct_UClass_AFightingCharacter_Statics; \
public: \
	DECLARE_CLASS(AFightingCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fighting"), NO_API) \
	DECLARE_SERIALIZER(AFightingCharacter)


#define Fighting_Source_Fighting_FightingCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFightingCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFightingCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFightingCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFightingCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFightingCharacter(AFightingCharacter&&); \
	NO_API AFightingCharacter(const AFightingCharacter&); \
public:


#define Fighting_Source_Fighting_FightingCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFightingCharacter(AFightingCharacter&&); \
	NO_API AFightingCharacter(const AFightingCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFightingCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFightingCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFightingCharacter)


#define Fighting_Source_Fighting_FightingCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AFightingCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFightingCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__playerHealth() { return STRUCT_OFFSET(AFightingCharacter, playerHealth); }


#define Fighting_Source_Fighting_FightingCharacter_h_9_PROLOG
#define Fighting_Source_Fighting_FightingCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fighting_Source_Fighting_FightingCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Fighting_Source_Fighting_FightingCharacter_h_12_SPARSE_DATA \
	Fighting_Source_Fighting_FightingCharacter_h_12_RPC_WRAPPERS \
	Fighting_Source_Fighting_FightingCharacter_h_12_INCLASS \
	Fighting_Source_Fighting_FightingCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fighting_Source_Fighting_FightingCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fighting_Source_Fighting_FightingCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Fighting_Source_Fighting_FightingCharacter_h_12_SPARSE_DATA \
	Fighting_Source_Fighting_FightingCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Fighting_Source_Fighting_FightingCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Fighting_Source_Fighting_FightingCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIGHTING_API UClass* StaticClass<class AFightingCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fighting_Source_Fighting_FightingCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
