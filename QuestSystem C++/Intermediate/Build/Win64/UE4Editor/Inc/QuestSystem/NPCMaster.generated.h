// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTSYSTEM_NPCMaster_generated_h
#error "NPCMaster.generated.h already included, missing '#pragma once' in NPCMaster.h"
#endif
#define QUESTSYSTEM_NPCMaster_generated_h

#define QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_SPARSE_DATA
#define QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_RPC_WRAPPERS
#define QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCMaster(); \
	friend struct Z_Construct_UClass_ANPCMaster_Statics; \
public: \
	DECLARE_CLASS(ANPCMaster, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(ANPCMaster) \
	virtual UObject* _getUObject() const override { return const_cast<ANPCMaster*>(this); }


#define QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANPCMaster(); \
	friend struct Z_Construct_UClass_ANPCMaster_Statics; \
public: \
	DECLARE_CLASS(ANPCMaster, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(ANPCMaster) \
	virtual UObject* _getUObject() const override { return const_cast<ANPCMaster*>(this); }


#define QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPCMaster(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPCMaster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCMaster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCMaster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCMaster(ANPCMaster&&); \
	NO_API ANPCMaster(const ANPCMaster&); \
public:


#define QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCMaster(ANPCMaster&&); \
	NO_API ANPCMaster(const ANPCMaster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCMaster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCMaster); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPCMaster)


#define QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_PRIVATE_PROPERTY_OFFSET
#define QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_12_PROLOG
#define QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_PRIVATE_PROPERTY_OFFSET \
	QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_SPARSE_DATA \
	QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_RPC_WRAPPERS \
	QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_INCLASS \
	QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_PRIVATE_PROPERTY_OFFSET \
	QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_SPARSE_DATA \
	QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_INCLASS_NO_PURE_DECLS \
	QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class ANPCMaster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID QuestSystem_C___Source_QuestSystem_NPC_NPCMaster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
