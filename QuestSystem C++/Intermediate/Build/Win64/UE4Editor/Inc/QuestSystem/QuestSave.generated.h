// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQuestComponent;
class ANPCQuest;
struct FNPCQuestStruct;
struct FQuestStruct;
#ifdef QUESTSYSTEM_QuestSave_generated_h
#error "QuestSave.generated.h already included, missing '#pragma once' in QuestSave.h"
#endif
#define QUESTSYSTEM_QuestSave_generated_h

#define QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_SPARSE_DATA
#define QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadQuestComponent); \
	DECLARE_FUNCTION(execLoadNPCQuests); \
	DECLARE_FUNCTION(execSaveNPC); \
	DECLARE_FUNCTION(execSaveQuestComponent);


#define QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadQuestComponent); \
	DECLARE_FUNCTION(execLoadNPCQuests); \
	DECLARE_FUNCTION(execSaveNPC); \
	DECLARE_FUNCTION(execSaveQuestComponent);


#define QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestSave(); \
	friend struct Z_Construct_UClass_UQuestSave_Statics; \
public: \
	DECLARE_CLASS(UQuestSave, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestSave)


#define QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUQuestSave(); \
	friend struct Z_Construct_UClass_UQuestSave_Statics; \
public: \
	DECLARE_CLASS(UQuestSave, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestSave)


#define QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestSave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestSave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestSave); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestSave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestSave(UQuestSave&&); \
	NO_API UQuestSave(const UQuestSave&); \
public:


#define QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestSave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestSave(UQuestSave&&); \
	NO_API UQuestSave(const UQuestSave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestSave); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestSave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestSave)


#define QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_PRIVATE_PROPERTY_OFFSET
#define QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_19_PROLOG
#define QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_PRIVATE_PROPERTY_OFFSET \
	QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_SPARSE_DATA \
	QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_RPC_WRAPPERS \
	QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_INCLASS \
	QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_PRIVATE_PROPERTY_OFFSET \
	QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_SPARSE_DATA \
	QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_INCLASS_NO_PURE_DECLS \
	QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class UQuestSave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID QuestSystem_C___Source_QuestSystem_SaveGames_QuestSave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
