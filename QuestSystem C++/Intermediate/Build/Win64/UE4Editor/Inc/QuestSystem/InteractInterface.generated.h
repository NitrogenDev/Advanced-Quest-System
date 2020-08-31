// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTSYSTEM_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define QUESTSYSTEM_InteractInterface_generated_h

#define QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_SPARSE_DATA
#define QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_RPC_WRAPPERS
#define QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractInterface(UInteractInterface&&); \
	NO_API UInteractInterface(const UInteractInterface&); \
public:


#define QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractInterface(UInteractInterface&&); \
	NO_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface)


#define QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_GENERATED_UINTERFACE_BODY() \
	QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_GENERATED_UINTERFACE_BODY() \
	QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_7_PROLOG
#define QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_SPARSE_DATA \
	QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_RPC_WRAPPERS \
	QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_SPARSE_DATA \
	QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID QuestSystem_C___Source_QuestSystem_Interfaces_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
