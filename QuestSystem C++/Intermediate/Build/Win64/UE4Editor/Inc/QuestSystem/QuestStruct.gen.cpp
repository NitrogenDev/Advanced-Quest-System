// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/QuestStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestStruct() {}
// Cross Module References
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStruct();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStep();
// End Cross Module References
class UScriptStruct* FQuestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FQuestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestStruct, Z_Construct_UPackage__Script_QuestSystem(), TEXT("QuestStruct"), sizeof(FQuestStruct), Get_Z_Construct_UScriptStruct_FQuestStruct_Hash());
	}
	return Singleton;
}
template<> QUESTSYSTEM_API UScriptStruct* StaticStruct<FQuestStruct>()
{
	return FQuestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestStruct(FQuestStruct::StaticStruct, TEXT("/Script/QuestSystem"), TEXT("QuestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_QuestSystem_StaticRegisterNativesFQuestStruct
{
	FScriptStruct_QuestSystem_StaticRegisterNativesFQuestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestStruct")),new UScriptStruct::TCppStructOps<FQuestStruct>);
	}
} ScriptStruct_QuestSystem_StaticRegisterNativesFQuestStruct;
	struct Z_Construct_UScriptStruct_FQuestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrimaryQuest_MetaData[];
#endif
		static void NewProp_bPrimaryQuest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrimaryQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStatus_MetaData[];
#endif
		static void NewProp_bStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestSteps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestSteps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "QuestStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_bPrimaryQuest_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "QuestStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_bPrimaryQuest_SetBit(void* Obj)
	{
		((FQuestStruct*)Obj)->bPrimaryQuest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_bPrimaryQuest = { "bPrimaryQuest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQuestStruct), &Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_bPrimaryQuest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_bPrimaryQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_bPrimaryQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_bStatus_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "QuestStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_bStatus_SetBit(void* Obj)
	{
		((FQuestStruct*)Obj)->bStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_bStatus = { "bStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQuestStruct), &Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_bStatus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_bStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_bStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestSteps_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "QuestStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestSteps = { "QuestSteps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStruct, QuestSteps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestSteps_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestSteps_Inner = { "QuestSteps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestStep, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestDescription_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "QuestStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestDescription = { "QuestDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStruct, QuestDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestName_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "QuestStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStruct, QuestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_bPrimaryQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_bStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestSteps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_QuestName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"QuestStruct",
		sizeof(FQuestStruct),
		alignof(FQuestStruct),
		Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestStruct"), sizeof(FQuestStruct), Get_Z_Construct_UScriptStruct_FQuestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestStruct_Hash() { return 2278292836U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
