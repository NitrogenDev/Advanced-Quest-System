// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTSYSTEM_QuestTriggerMaster_generated_h
#error "QuestTriggerMaster.generated.h already included, missing '#pragma once' in QuestTriggerMaster.h"
#endif
#define QUESTSYSTEM_QuestTriggerMaster_generated_h

#define QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_SPARSE_DATA
#define QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishStep);


#define QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishStep);


#define QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuestTriggerMaster(); \
	friend struct Z_Construct_UClass_AQuestTriggerMaster_Statics; \
public: \
	DECLARE_CLASS(AQuestTriggerMaster, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(AQuestTriggerMaster)


#define QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAQuestTriggerMaster(); \
	friend struct Z_Construct_UClass_AQuestTriggerMaster_Statics; \
public: \
	DECLARE_CLASS(AQuestTriggerMaster, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(AQuestTriggerMaster)


#define QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuestTriggerMaster(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuestTriggerMaster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestTriggerMaster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestTriggerMaster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuestTriggerMaster(AQuestTriggerMaster&&); \
	NO_API AQuestTriggerMaster(const AQuestTriggerMaster&); \
public:


#define QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuestTriggerMaster(AQuestTriggerMaster&&); \
	NO_API AQuestTriggerMaster(const AQuestTriggerMaster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestTriggerMaster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestTriggerMaster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuestTriggerMaster)


#define QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__QuestName() { return STRUCT_OFFSET(AQuestTriggerMaster, QuestName); } \
	FORCEINLINE static uint32 __PPO__OwnerNPC() { return STRUCT_OFFSET(AQuestTriggerMaster, OwnerNPC); } \
	FORCEINLINE static uint32 __PPO__Step() { return STRUCT_OFFSET(AQuestTriggerMaster, Step); } \
	FORCEINLINE static uint32 __PPO__QuestComponent() { return STRUCT_OFFSET(AQuestTriggerMaster, QuestComponent); }


#define QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_13_PROLOG
#define QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_PRIVATE_PROPERTY_OFFSET \
	QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_SPARSE_DATA \
	QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_RPC_WRAPPERS \
	QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_INCLASS \
	QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_PRIVATE_PROPERTY_OFFSET \
	QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_SPARSE_DATA \
	QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_INCLASS_NO_PURE_DECLS \
	QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class AQuestTriggerMaster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID QuestSystem_C___Source_QuestSystem_Triggers_QuestTriggerMaster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
