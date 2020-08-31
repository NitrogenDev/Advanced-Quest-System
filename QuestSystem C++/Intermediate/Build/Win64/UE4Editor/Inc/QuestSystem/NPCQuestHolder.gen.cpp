// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/NPCQuestHolder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCQuestHolder() {}
// Cross Module References
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestHolder();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestStruct();
// End Cross Module References
class UScriptStruct* FNPCQuestHolder::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FNPCQuestHolder_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPCQuestHolder, Z_Construct_UPackage__Script_QuestSystem(), TEXT("NPCQuestHolder"), sizeof(FNPCQuestHolder), Get_Z_Construct_UScriptStruct_FNPCQuestHolder_Hash());
	}
	return Singleton;
}
template<> QUESTSYSTEM_API UScriptStruct* StaticStruct<FNPCQuestHolder>()
{
	return FNPCQuestHolder::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNPCQuestHolder(FNPCQuestHolder::StaticStruct, TEXT("/Script/QuestSystem"), TEXT("NPCQuestHolder"), false, nullptr, nullptr);
static struct FScriptStruct_QuestSystem_StaticRegisterNativesFNPCQuestHolder
{
	FScriptStruct_QuestSystem_StaticRegisterNativesFNPCQuestHolder()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NPCQuestHolder")),new UScriptStruct::TCppStructOps<FNPCQuestHolder>);
	}
} ScriptStruct_QuestSystem_StaticRegisterNativesFNPCQuestHolder;
	struct Z_Construct_UScriptStruct_FNPCQuestHolder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestSteps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestSteps_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "NPCQuestHolder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPCQuestHolder>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewProp_QuestSteps_MetaData[] = {
		{ "Category", "NPCQuestHolder" },
		{ "ModuleRelativePath", "NPCQuestHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewProp_QuestSteps = { "QuestSteps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNPCQuestHolder, QuestSteps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewProp_QuestSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewProp_QuestSteps_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewProp_QuestSteps_Inner = { "QuestSteps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNPCQuestStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewProp_QuestSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewProp_QuestSteps_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"NPCQuestHolder",
		sizeof(FNPCQuestHolder),
		alignof(FNPCQuestHolder),
		Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestHolder()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNPCQuestHolder_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NPCQuestHolder"), sizeof(FNPCQuestHolder), Get_Z_Construct_UScriptStruct_FNPCQuestHolder_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNPCQuestHolder_Hash() { return 3461050332U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
