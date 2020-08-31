// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Triggers/QuestTriggerMaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestTriggerMaster() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuestTriggerMaster_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuestTriggerMaster();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestComponent_NoRegister();
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStep();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_ANPCQuest_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AQuestTriggerMaster::execFinishStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FinishStep();
		P_NATIVE_END;
	}
	void AQuestTriggerMaster::StaticRegisterNativesAQuestTriggerMaster()
	{
		UClass* Class = AQuestTriggerMaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishStep", &AQuestTriggerMaster::execFinishStep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AQuestTriggerMaster_FinishStep_Statics
	{
		struct QuestTriggerMaster_eventFinishStep_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AQuestTriggerMaster_FinishStep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestTriggerMaster_eventFinishStep_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AQuestTriggerMaster_FinishStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestTriggerMaster_eventFinishStep_Parms), &Z_Construct_UFunction_AQuestTriggerMaster_FinishStep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuestTriggerMaster_FinishStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestTriggerMaster_FinishStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestTriggerMaster_FinishStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Triggers/QuestTriggerMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestTriggerMaster_FinishStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestTriggerMaster, nullptr, "FinishStep", nullptr, nullptr, sizeof(QuestTriggerMaster_eventFinishStep_Parms), Z_Construct_UFunction_AQuestTriggerMaster_FinishStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestTriggerMaster_FinishStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestTriggerMaster_FinishStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestTriggerMaster_FinishStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestTriggerMaster_FinishStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuestTriggerMaster_FinishStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AQuestTriggerMaster_NoRegister()
	{
		return AQuestTriggerMaster::StaticClass();
	}
	struct Z_Construct_UClass_AQuestTriggerMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Step;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerNPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerNPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuestTriggerMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AQuestTriggerMaster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AQuestTriggerMaster_FinishStep, "FinishStep" }, // 2344959032
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestTriggerMaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Triggers/QuestTriggerMaster.h" },
		{ "ModuleRelativePath", "Triggers/QuestTriggerMaster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_QuestComponent_MetaData[] = {
		{ "Category", "QuestTriggerMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Triggers/QuestTriggerMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_QuestComponent = { "QuestComponent", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestTriggerMaster, QuestComponent), Z_Construct_UClass_UQuestComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_QuestComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_QuestComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_Step_MetaData[] = {
		{ "Category", "QuestTriggerMaster" },
		{ "ModuleRelativePath", "Triggers/QuestTriggerMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestTriggerMaster, Step), Z_Construct_UScriptStruct_FQuestStep, METADATA_PARAMS(Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_Step_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_OwnerNPC_MetaData[] = {
		{ "Category", "QuestTriggerMaster" },
		{ "ModuleRelativePath", "Triggers/QuestTriggerMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_OwnerNPC = { "OwnerNPC", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestTriggerMaster, OwnerNPC), Z_Construct_UClass_ANPCQuest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_OwnerNPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_OwnerNPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_QuestName_MetaData[] = {
		{ "Category", "QuestTriggerMaster" },
		{ "ModuleRelativePath", "Triggers/QuestTriggerMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestTriggerMaster, QuestName), METADATA_PARAMS(Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_QuestName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuestTriggerMaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_QuestComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_Step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_OwnerNPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestTriggerMaster_Statics::NewProp_QuestName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuestTriggerMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestTriggerMaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuestTriggerMaster_Statics::ClassParams = {
		&AQuestTriggerMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AQuestTriggerMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AQuestTriggerMaster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AQuestTriggerMaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestTriggerMaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuestTriggerMaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuestTriggerMaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuestTriggerMaster, 3672288845);
	template<> QUESTSYSTEM_API UClass* StaticClass<AQuestTriggerMaster>()
	{
		return AQuestTriggerMaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuestTriggerMaster(Z_Construct_UClass_AQuestTriggerMaster, &AQuestTriggerMaster::StaticClass, TEXT("/Script/QuestSystem"), TEXT("AQuestTriggerMaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestTriggerMaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
