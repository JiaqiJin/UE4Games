// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_HeroDebugWidget_generated_h
#error "HeroDebugWidget.generated.h already included, missing '#pragma once' in HeroDebugWidget.h"
#endif
#define RPG_HeroDebugWidget_generated_h

#define RPG_Source_RPG_UI_HeroDebugWidget_h_15_SPARSE_DATA
#define RPG_Source_RPG_UI_HeroDebugWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseHeroDebugButton);


#define RPG_Source_RPG_UI_HeroDebugWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseHeroDebugButton);


#define RPG_Source_RPG_UI_HeroDebugWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroDebugWidget(); \
	friend struct Z_Construct_UClass_UHeroDebugWidget_Statics; \
public: \
	DECLARE_CLASS(UHeroDebugWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(UHeroDebugWidget)


#define RPG_Source_RPG_UI_HeroDebugWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHeroDebugWidget(); \
	friend struct Z_Construct_UClass_UHeroDebugWidget_Statics; \
public: \
	DECLARE_CLASS(UHeroDebugWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(UHeroDebugWidget)


#define RPG_Source_RPG_UI_HeroDebugWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroDebugWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroDebugWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroDebugWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroDebugWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeroDebugWidget(UHeroDebugWidget&&); \
	NO_API UHeroDebugWidget(const UHeroDebugWidget&); \
public:


#define RPG_Source_RPG_UI_HeroDebugWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroDebugWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeroDebugWidget(UHeroDebugWidget&&); \
	NO_API UHeroDebugWidget(const UHeroDebugWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroDebugWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroDebugWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroDebugWidget)


#define RPG_Source_RPG_UI_HeroDebugWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define RPG_Source_RPG_UI_HeroDebugWidget_h_12_PROLOG
#define RPG_Source_RPG_UI_HeroDebugWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_UI_HeroDebugWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_UI_HeroDebugWidget_h_15_SPARSE_DATA \
	RPG_Source_RPG_UI_HeroDebugWidget_h_15_RPC_WRAPPERS \
	RPG_Source_RPG_UI_HeroDebugWidget_h_15_INCLASS \
	RPG_Source_RPG_UI_HeroDebugWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_Source_RPG_UI_HeroDebugWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_Source_RPG_UI_HeroDebugWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	RPG_Source_RPG_UI_HeroDebugWidget_h_15_SPARSE_DATA \
	RPG_Source_RPG_UI_HeroDebugWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_Source_RPG_UI_HeroDebugWidget_h_15_INCLASS_NO_PURE_DECLS \
	RPG_Source_RPG_UI_HeroDebugWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_API UClass* StaticClass<class UHeroDebugWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_Source_RPG_UI_HeroDebugWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
