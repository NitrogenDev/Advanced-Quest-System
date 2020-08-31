// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNPCQuestStruct;
#ifdef QUESTSYSTEM_QuestComponent_generated_h
#error "QuestComponent.generated.h already included, missing '#pragma once' in QuestComponent.h"
#endif
#define QUESTSYSTEM_QuestComponent_generated_h

#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_19_DELEGATE \
struct _Script_QuestSystem_eventStepUpdate_Parms \
{ \
	bool bShowAnimation; \
}; \
static inline void FStepUpdate_DelegateWrapper(const FMulticastScriptDelegate& StepUpdate, bool bShowAnimation) \
{ \
	_Script_QuestSystem_eventStepUpdate_Parms Parms; \
	Parms.bShowAnimation=bShowAnimation ? true : false; \
	StepUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_17_DELEGATE \
struct _Script_QuestSystem_eventSelectQuest_Parms \
{ \
	FString QuestName; \
}; \
static inline void FSelectQuest_DelegateWrapper(const FMulticastScriptDelegate& SelectQuest, const FString& QuestName) \
{ \
	_Script_QuestSystem_eventSelectQuest_Parms Parms; \
	Parms.QuestName=QuestName; \
	SelectQuest.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_15_DELEGATE \
struct _Script_QuestSystem_eventQuestNotification_Parms \
{ \
	bool bQuestCompleted; \
	FString QuestName; \
}; \
static inline void FQuestNotification_DelegateWrapper(const FMulticastScriptDelegate& QuestNotification, bool bQuestCompleted, const FString& QuestName) \
{ \
	_Script_QuestSystem_eventQuestNotification_Parms Parms; \
	Parms.bQuestCompleted=bQuestCompleted ? true : false; \
	Parms.QuestName=QuestName; \
	QuestNotification.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_13_DELEGATE \
static inline void FAddedRemovedQuest_DelegateWrapper(const FMulticastScriptDelegate& AddedRemovedQuest) \
{ \
	AddedRemovedQuest.ProcessMulticastDelegate<UObject>(NULL); \
}


#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_SPARSE_DATA
#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveQuest); \
	DECLARE_FUNCTION(execSelectQuest); \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execAddQuest); \
	DECLARE_FUNCTION(execResetCurrentQuest); \
	DECLARE_FUNCTION(execUpdateCache);


#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveQuest); \
	DECLARE_FUNCTION(execSelectQuest); \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execAddQuest); \
	DECLARE_FUNCTION(execResetCurrentQuest); \
	DECLARE_FUNCTION(execUpdateCache);


#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestComponent(); \
	friend struct Z_Construct_UClass_UQuestComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestComponent)


#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUQuestComponent(); \
	friend struct Z_Construct_UClass_UQuestComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestComponent)


#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestComponent(UQuestComponent&&); \
	NO_API UQuestComponent(const UQuestComponent&); \
public:


#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestComponent(UQuestComponent&&); \
	NO_API UQuestComponent(const UQuestComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestComponent)


#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__QuestSave() { return STRUCT_OFFSET(UQuestComponent, QuestSave); }


#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_21_PROLOG
#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_SPARSE_DATA \
	QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_RPC_WRAPPERS \
	QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_INCLASS \
	QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_SPARSE_DATA \
	QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_INCLASS_NO_PURE_DECLS \
	QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class UQuestComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID QuestSystem_C___Source_QuestSystem_Components_QuestComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
