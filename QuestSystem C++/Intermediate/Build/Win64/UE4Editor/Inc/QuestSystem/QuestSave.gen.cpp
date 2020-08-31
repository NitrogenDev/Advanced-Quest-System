// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/SaveGames/QuestSave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestSave() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestSave_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestSave();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestStruct();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_ANPCQuest_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestComponent_NoRegister();
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStruct();
// End Cross Module References
	DEFINE_FUNCTION(UQuestSave::execLoadQuestComponent)
	{
		P_GET_OBJECT(UQuestComponent,Z_Param_QuestComponentRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadQuestComponent(Z_Param_QuestComponentRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestSave::execLoadNPCQuests)
	{
		P_GET_OBJECT(ANPCQuest,Z_Param_NPCQuest);
		P_GET_TARRAY(FNPCQuestStruct,Z_Param_Quests);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadNPCQuests(Z_Param_NPCQuest,Z_Param_Quests);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestSave::execSaveNPC)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NPCName);
		P_GET_TARRAY(FNPCQuestStruct,Z_Param_Quests);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveNPC(Z_Param_NPCName,Z_Param_Quests);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestSave::execSaveQuestComponent)
	{
		P_GET_TARRAY(FQuestStruct,Z_Param_QuestsToSave);
		P_GET_PROPERTY(FIntProperty,Z_Param_QuestID);
		P_GET_UBOOL(Z_Param_CanChangeQuest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveQuestComponent(Z_Param_QuestsToSave,Z_Param_QuestID,Z_Param_CanChangeQuest);
		P_NATIVE_END;
	}
	void UQuestSave::StaticRegisterNativesUQuestSave()
	{
		UClass* Class = UQuestSave::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadNPCQuests", &UQuestSave::execLoadNPCQuests },
			{ "LoadQuestComponent", &UQuestSave::execLoadQuestComponent },
			{ "SaveNPC", &UQuestSave::execSaveNPC },
			{ "SaveQuestComponent", &UQuestSave::execSaveQuestComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics
	{
		struct QuestSave_eventLoadNPCQuests_Parms
		{
			const ANPCQuest* NPCQuest;
			TArray<FNPCQuestStruct> Quests;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Quests;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NPCQuest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::NewProp_Quests = { "Quests", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestSave_eventLoadNPCQuests_Parms, Quests), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::NewProp_Quests_Inner = { "Quests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNPCQuestStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::NewProp_NPCQuest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::NewProp_NPCQuest = { "NPCQuest", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestSave_eventLoadNPCQuests_Parms, NPCQuest), Z_Construct_UClass_ANPCQuest_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::NewProp_NPCQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::NewProp_NPCQuest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::NewProp_Quests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::NewProp_Quests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::NewProp_NPCQuest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SaveGames/QuestSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestSave, nullptr, "LoadNPCQuests", nullptr, nullptr, sizeof(QuestSave_eventLoadNPCQuests_Parms), Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestSave_LoadNPCQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestSave_LoadNPCQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestSave_LoadQuestComponent_Statics
	{
		struct QuestSave_eventLoadQuestComponent_Parms
		{
			UQuestComponent* QuestComponentRef;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestComponentRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestComponentRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSave_LoadQuestComponent_Statics::NewProp_QuestComponentRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestSave_LoadQuestComponent_Statics::NewProp_QuestComponentRef = { "QuestComponentRef", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestSave_eventLoadQuestComponent_Parms, QuestComponentRef), Z_Construct_UClass_UQuestComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestSave_LoadQuestComponent_Statics::NewProp_QuestComponentRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSave_LoadQuestComponent_Statics::NewProp_QuestComponentRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSave_LoadQuestComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSave_LoadQuestComponent_Statics::NewProp_QuestComponentRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSave_LoadQuestComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SaveGames/QuestSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSave_LoadQuestComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestSave, nullptr, "LoadQuestComponent", nullptr, nullptr, sizeof(QuestSave_eventLoadQuestComponent_Parms), Z_Construct_UFunction_UQuestSave_LoadQuestComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSave_LoadQuestComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestSave_LoadQuestComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSave_LoadQuestComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestSave_LoadQuestComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestSave_LoadQuestComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestSave_SaveNPC_Statics
	{
		struct QuestSave_eventSaveNPC_Parms
		{
			FString NPCName;
			TArray<FNPCQuestStruct> Quests;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Quests;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NPCName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::NewProp_Quests = { "Quests", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestSave_eventSaveNPC_Parms, Quests), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::NewProp_Quests_Inner = { "Quests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNPCQuestStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::NewProp_NPCName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::NewProp_NPCName = { "NPCName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestSave_eventSaveNPC_Parms, NPCName), METADATA_PARAMS(Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::NewProp_NPCName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::NewProp_NPCName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::NewProp_Quests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::NewProp_Quests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::NewProp_NPCName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SaveGames/QuestSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestSave, nullptr, "SaveNPC", nullptr, nullptr, sizeof(QuestSave_eventSaveNPC_Parms), Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestSave_SaveNPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestSave_SaveNPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics
	{
		struct QuestSave_eventSaveQuestComponent_Parms
		{
			TArray<FQuestStruct> QuestsToSave;
			int32 QuestID;
			bool CanChangeQuest;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanChangeQuest_MetaData[];
#endif
		static void NewProp_CanChangeQuest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanChangeQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestsToSave;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestsToSave_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_CanChangeQuest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_CanChangeQuest_SetBit(void* Obj)
	{
		((QuestSave_eventSaveQuestComponent_Parms*)Obj)->CanChangeQuest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_CanChangeQuest = { "CanChangeQuest", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestSave_eventSaveQuestComponent_Parms), &Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_CanChangeQuest_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_CanChangeQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_CanChangeQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_QuestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestSave_eventSaveQuestComponent_Parms, QuestID), METADATA_PARAMS(Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_QuestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_QuestID_MetaData)) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_QuestsToSave = { "QuestsToSave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestSave_eventSaveQuestComponent_Parms, QuestsToSave), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_QuestsToSave_Inner = { "QuestsToSave", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_CanChangeQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_QuestsToSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::NewProp_QuestsToSave_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SaveGames/QuestSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestSave, nullptr, "SaveQuestComponent", nullptr, nullptr, sizeof(QuestSave_eventSaveQuestComponent_Parms), Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestSave_SaveQuestComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestSave_SaveQuestComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestSave_NoRegister()
	{
		return UQuestSave::StaticClass();
	}
	struct Z_Construct_UClass_UQuestSave_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestSave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestSave_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestSave_LoadNPCQuests, "LoadNPCQuests" }, // 1203605837
		{ &Z_Construct_UFunction_UQuestSave_LoadQuestComponent, "LoadQuestComponent" }, // 3471381315
		{ &Z_Construct_UFunction_UQuestSave_SaveNPC, "SaveNPC" }, // 1336084430
		{ &Z_Construct_UFunction_UQuestSave_SaveQuestComponent, "SaveQuestComponent" }, // 892631633
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSave_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveGames/QuestSave.h" },
		{ "ModuleRelativePath", "SaveGames/QuestSave.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestSave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestSave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestSave_Statics::ClassParams = {
		&UQuestSave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestSave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestSave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestSave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestSave, 428562483);
	template<> QUESTSYSTEM_API UClass* StaticClass<UQuestSave>()
	{
		return UQuestSave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestSave(Z_Construct_UClass_UQuestSave, &UQuestSave::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UQuestSave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestSave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
