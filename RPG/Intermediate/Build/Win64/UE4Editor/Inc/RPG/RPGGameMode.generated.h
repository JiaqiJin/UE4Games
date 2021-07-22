// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_RPGGameMode_generated_h
#error "RPGGameMode.generated.h already included, missing '#pragma once' in RPGGameMode.h"
#endif
#define RPG_RPGGameMode_generated_h

#define RPG_Source_RPG_RPGGameMode_h_12_SPARSE_DATA
#define RPG_Source_RPG_RPGGameMode_h_12_RPC_WRAPPERS
#define RPG_Source_RPG_RPGGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define RPG_Source_RPG_RPGGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGGameMode(); \
	friend struct Z_Construct_UClass_ARPGGameMode_Statics; \
public: \
	DECLARE_CLASS(ARPGGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), RPG_API) \
	DECLARE_SERIALIZER(ARPGGameMode)


#define RPG_Source_RPG_RPGGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARPGGameMode(); \
	friend struct Z_Construct_UClass_ARPGGameMode_Statics; \
public: \
	DECLARE_CLASS(ARPGGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), RPG_API) \
	DECLARE_SERIALIZER(ARPGGameMode)


#define RPG_Source_RPG_RPGGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RPG_API ARPGGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RPG_API, ARPGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RPG_API ARPGGameMode(ARPGGameMode&&); \
	RPG_API ARPGGameMode(const ARPGGameMode&); \
public:


#define RPG_Source_RPG_RPGGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RPG_API ARPGGameMode(ARPGGameMode&&); \
	RPG_API ARPGGameMode(const ARPGGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RPG_API, ARPGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARPGGameMode)


#define RPG_Source_RPG_RPGGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define RPG_Source_RPG_RPGGameMode_h_9_PROLOG
#define RPG_Source_RPG_RPGGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_RPGGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_RPGGameMode_h_12_SPARSE_DATA \
	RPG_Source_RPG_RPGGameMode_h_12_RPC_WRAPPERS \
	RPG_Source_RPG_RPGGameMode_h_12_INCLASS \
	RPG_Source_RPG_RPGGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_Source_RPG_RPGGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_RPGGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_RPGGameMode_h_12_SPARSE_DATA \
	RPG_Source_RPG_RPGGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_Source_RPG_RPGGameMode_h_12_INCLASS_NO_PURE_DECLS \
	RPG_Source_RPG_RPGGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_API UClass* StaticClass<class ARPGGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Source_RPG_RPGGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
