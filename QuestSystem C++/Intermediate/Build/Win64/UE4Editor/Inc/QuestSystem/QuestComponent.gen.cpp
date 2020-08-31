// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Components/QuestComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestComponent() {}
// Cross Module References
	QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_SelectQuest__DelegateSignature();
	QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature();
	QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_AddedRemovedQuest__DelegateSignature();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestComponent_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestStruct();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestSave_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature_Statics
	{
		struct _Script_QuestSystem_eventStepUpdate_Parms
		{
			bool bShowAnimation;
		};
		static void NewProp_bShowAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature_Statics::NewProp_bShowAnimation_SetBit(void* Obj)
	{
		((_Script_QuestSystem_eventStepUpdate_Parms*)Obj)->bShowAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature_Statics::NewProp_bShowAnimation = { "bShowAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_QuestSystem_eventStepUpdate_Parms), &Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature_Statics::NewProp_bShowAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature_Statics::NewProp_bShowAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "StepUpdate__DelegateSignature", nullptr, nullptr, sizeof(_Script_QuestSystem_eventStepUpdate_Parms), Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_QuestSystem_SelectQuest__DelegateSignature_Statics
	{
		struct _Script_QuestSystem_eventSelectQuest_Parms
		{
			FString QuestName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_QuestSystem_SelectQuest__DelegateSignature_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_QuestSystem_eventSelectQuest_Parms, QuestName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestSystem_SelectQuest__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_SelectQuest__DelegateSignature_Statics::NewProp_QuestName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestSystem_SelectQuest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestSystem_SelectQuest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "SelectQuest__DelegateSignature", nullptr, nullptr, sizeof(_Script_QuestSystem_eventSelectQuest_Parms), Z_Construct_UDelegateFunction_QuestSystem_SelectQuest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_SelectQuest__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestSystem_SelectQuest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_SelectQuest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestSystem_SelectQuest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_SelectQuest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics
	{
		struct _Script_QuestSystem_eventQuestNotification_Parms
		{
			bool bQuestCompleted;
			FString QuestName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestName;
		static void NewProp_bQuestCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQuestCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_QuestSystem_eventQuestNotification_Parms, QuestName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics::NewProp_bQuestCompleted_SetBit(void* Obj)
	{
		((_Script_QuestSystem_eventQuestNotification_Parms*)Obj)->bQuestCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics::NewProp_bQuestCompleted = { "bQuestCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_QuestSystem_eventQuestNotification_Parms), &Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics::NewProp_bQuestCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics::NewProp_QuestName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics::NewProp_bQuestCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "QuestNotification__DelegateSignature", nullptr, nullptr, sizeof(_Script_QuestSystem_eventQuestNotification_Parms), Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_QuestSystem_AddedRemovedQuest__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestSystem_AddedRemovedQuest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestSystem_AddedRemovedQuest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "AddedRemovedQuest__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestSystem_AddedRemovedQuest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_AddedRemovedQuest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestSystem_AddedRemovedQuest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_AddedRemovedQuest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UQuestComponent::execRemoveQuest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_QuestName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveQuest(Z_Param_QuestName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestComponent::execSelectQuest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_QuestName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectQuest(Z_Param_QuestName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestComponent::execCompleteQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteQuest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestComponent::execAddQuest)
	{
		P_GET_STRUCT(FNPCQuestStruct,Z_Param_Quest);
		P_GET_UBOOL(Z_Param_bIsLoadedQuest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddQuest(Z_Param_Quest,Z_Param_bIsLoadedQuest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestComponent::execResetCurrentQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCurrentQuest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestComponent::execUpdateCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCache();
		P_NATIVE_END;
	}
	void UQuestComponent::StaticRegisterNativesUQuestComponent()
	{
		UClass* Class = UQuestComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddQuest", &UQuestComponent::execAddQuest },
			{ "CompleteQuest", &UQuestComponent::execCompleteQuest },
			{ "RemoveQuest", &UQuestComponent::execRemoveQuest },
			{ "ResetCurrentQuest", &UQuestComponent::execResetCurrentQuest },
			{ "SelectQuest", &UQuestComponent::execSelectQuest },
			{ "UpdateCache", &UQuestComponent::execUpdateCache },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestComponent_AddQuest_Statics
	{
		struct QuestComponent_eventAddQuest_Parms
		{
			FNPCQuestStruct Quest;
			bool bIsLoadedQuest;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoadedQuest_MetaData[];
#endif
		static void NewProp_bIsLoadedQuest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoadedQuest;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::NewProp_bIsLoadedQuest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::NewProp_bIsLoadedQuest_SetBit(void* Obj)
	{
		((QuestComponent_eventAddQuest_Parms*)Obj)->bIsLoadedQuest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::NewProp_bIsLoadedQuest = { "bIsLoadedQuest", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestComponent_eventAddQuest_Parms), &Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::NewProp_bIsLoadedQuest_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::NewProp_bIsLoadedQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::NewProp_bIsLoadedQuest_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestComponent_eventAddQuest_Parms, Quest), Z_Construct_UScriptStruct_FNPCQuestStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::NewProp_bIsLoadedQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestComponent, nullptr, "AddQuest", nullptr, nullptr, sizeof(QuestComponent_eventAddQuest_Parms), Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestComponent_AddQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestComponent_AddQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestComponent_CompleteQuest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestComponent_CompleteQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestComponent_CompleteQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestComponent, nullptr, "CompleteQuest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestComponent_CompleteQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_CompleteQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestComponent_CompleteQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestComponent_CompleteQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestComponent_RemoveQuest_Statics
	{
		struct QuestComponent_eventRemoveQuest_Parms
		{
			FString QuestName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestComponent_RemoveQuest_Statics::NewProp_QuestName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestComponent_RemoveQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestComponent_eventRemoveQuest_Parms, QuestName), METADATA_PARAMS(Z_Construct_UFunction_UQuestComponent_RemoveQuest_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_RemoveQuest_Statics::NewProp_QuestName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestComponent_RemoveQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestComponent_RemoveQuest_Statics::NewProp_QuestName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestComponent_RemoveQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestComponent_RemoveQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestComponent, nullptr, "RemoveQuest", nullptr, nullptr, sizeof(QuestComponent_eventRemoveQuest_Parms), Z_Construct_UFunction_UQuestComponent_RemoveQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_RemoveQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestComponent_RemoveQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_RemoveQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestComponent_RemoveQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestComponent_RemoveQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestComponent_ResetCurrentQuest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestComponent_ResetCurrentQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestComponent_ResetCurrentQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestComponent, nullptr, "ResetCurrentQuest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestComponent_ResetCurrentQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_ResetCurrentQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestComponent_ResetCurrentQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestComponent_ResetCurrentQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestComponent_SelectQuest_Statics
	{
		struct QuestComponent_eventSelectQuest_Parms
		{
			FString QuestName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestComponent_SelectQuest_Statics::NewProp_QuestName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestComponent_SelectQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestComponent_eventSelectQuest_Parms, QuestName), METADATA_PARAMS(Z_Construct_UFunction_UQuestComponent_SelectQuest_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_SelectQuest_Statics::NewProp_QuestName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestComponent_SelectQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestComponent_SelectQuest_Statics::NewProp_QuestName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestComponent_SelectQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestComponent_SelectQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestComponent, nullptr, "SelectQuest", nullptr, nullptr, sizeof(QuestComponent_eventSelectQuest_Parms), Z_Construct_UFunction_UQuestComponent_SelectQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_SelectQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestComponent_SelectQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_SelectQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestComponent_SelectQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestComponent_SelectQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestComponent_UpdateCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestComponent_UpdateCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestComponent_UpdateCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestComponent, nullptr, "UpdateCache", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestComponent_UpdateCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_UpdateCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestComponent_UpdateCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestComponent_UpdateCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestComponent_NoRegister()
	{
		return UQuestComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQuestComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStepUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStepUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQuestNotification_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestNotification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAddedRemovedQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddedRemovedQuest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestComponent_AddQuest, "AddQuest" }, // 2274508924
		{ &Z_Construct_UFunction_UQuestComponent_CompleteQuest, "CompleteQuest" }, // 234742229
		{ &Z_Construct_UFunction_UQuestComponent_RemoveQuest, "RemoveQuest" }, // 1767259456
		{ &Z_Construct_UFunction_UQuestComponent_ResetCurrentQuest, "ResetCurrentQuest" }, // 412832320
		{ &Z_Construct_UFunction_UQuestComponent_SelectQuest, "SelectQuest" }, // 659922665
		{ &Z_Construct_UFunction_UQuestComponent_UpdateCache, "UpdateCache" }, // 2448354351
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/QuestComponent.h" },
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestComponent_Statics::NewProp_QuestSave_MetaData[] = {
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestComponent_Statics::NewProp_QuestSave = { "QuestSave", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestComponent, QuestSave), Z_Construct_UClass_UQuestSave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestComponent_Statics::NewProp_QuestSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::NewProp_QuestSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnStepUpdate_MetaData[] = {
		{ "Category", "Event Dispatchers" },
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnStepUpdate = { "OnStepUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestComponent, OnStepUpdate), Z_Construct_UDelegateFunction_QuestSystem_StepUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnStepUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnStepUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnSelectQuest_MetaData[] = {
		{ "Category", "Event Dispatchers" },
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnSelectQuest = { "OnSelectQuest", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestComponent, OnSelectQuest), Z_Construct_UDelegateFunction_QuestSystem_SelectQuest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnSelectQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnSelectQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnQuestNotification_MetaData[] = {
		{ "Category", "Event Dispatchers" },
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnQuestNotification = { "OnQuestNotification", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestComponent, OnQuestNotification), Z_Construct_UDelegateFunction_QuestSystem_QuestNotification__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnQuestNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnQuestNotification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnAddedRemovedQuest_MetaData[] = {
		{ "Category", "Event Dispatchers" },
		{ "ModuleRelativePath", "Components/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnAddedRemovedQuest = { "OnAddedRemovedQuest", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestComponent, OnAddedRemovedQuest), Z_Construct_UDelegateFunction_QuestSystem_AddedRemovedQuest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnAddedRemovedQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnAddedRemovedQuest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestComponent_Statics::NewProp_QuestSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnStepUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnSelectQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnQuestNotification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestComponent_Statics::NewProp_OnAddedRemovedQuest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestComponent_Statics::ClassParams = {
		&UQuestComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestComponent, 3914715853);
	template<> QUESTSYSTEM_API UClass* StaticClass<UQuestComponent>()
	{
		return UQuestComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestComponent(Z_Construct_UClass_UQuestComponent, &UQuestComponent::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UQuestComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
