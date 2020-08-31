// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/QuestStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestStep() {}
// Cross Module References
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStep();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuestTriggerMaster_NoRegister();
// End Cross Module References
class UScriptStruct* FQuestStep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FQuestStep_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestStep, Z_Construct_UPackage__Script_QuestSystem(), TEXT("QuestStep"), sizeof(FQuestStep), Get_Z_Construct_UScriptStruct_FQuestStep_Hash());
	}
	return Singleton;
}
template<> QUESTSYSTEM_API UScriptStruct* StaticStruct<FQuestStep>()
{
	return FQuestStep::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestStep(FQuestStep::StaticStruct, TEXT("/Script/QuestSystem"), TEXT("QuestStep"), false, nullptr, nullptr);
static struct FScriptStruct_QuestSystem_StaticRegisterNativesFQuestStep
{
	FScriptStruct_QuestSystem_StaticRegisterNativesFQuestStep()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestStep")),new UScriptStruct::TCppStructOps<FQuestStep>);
	}
} ScriptStruct_QuestSystem_StaticRegisterNativesFQuestStep;
	struct Z_Construct_UScriptStruct_FQuestStep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStep_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* \n*/" },
		{ "ModuleRelativePath", "QuestStep.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestStep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestStep>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStep_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "QuestStep" },
		{ "ModuleRelativePath", "QuestStep.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQuestStep_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStep, Trigger), Z_Construct_UClass_AQuestTriggerMaster_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStep_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStep_Statics::NewProp_Trigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStep_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "QuestStep" },
		{ "ModuleRelativePath", "QuestStep.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestStep_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStep, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStep_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStep_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStep_Statics::NewProp_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStep_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestStep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"QuestStep",
		sizeof(FQuestStep),
		alignof(FQuestStep),
		Z_Construct_UScriptStruct_FQuestStep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestStep()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestStep_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestStep"), sizeof(FQuestStep), Get_Z_Construct_UScriptStruct_FQuestStep_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestStep_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestStep_Hash() { return 4227433605U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
