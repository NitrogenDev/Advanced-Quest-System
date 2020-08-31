// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/GameInstanceBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstanceBase() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UGameInstanceBase_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UGameInstanceBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestSave_NoRegister();
// End Cross Module References
	void UGameInstanceBase::StaticRegisterNativesUGameInstanceBase()
	{
	}
	UClass* Z_Construct_UClass_UGameInstanceBase_NoRegister()
	{
		return UGameInstanceBase::StaticClass();
	}
	struct Z_Construct_UClass_UGameInstanceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestSave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInstanceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstanceBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameInstanceBase.h" },
		{ "ModuleRelativePath", "GameInstanceBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_QuestSave_MetaData[] = {
		{ "Category", "GameInstanceBase" },
		{ "ModuleRelativePath", "GameInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_QuestSave = { "QuestSave", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameInstanceBase, QuestSave), Z_Construct_UClass_UQuestSave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_QuestSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_QuestSave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameInstanceBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceBase_Statics::NewProp_QuestSave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInstanceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInstanceBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameInstanceBase_Statics::ClassParams = {
		&UGameInstanceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameInstanceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceBase_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGameInstanceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameInstanceBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameInstanceBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameInstanceBase, 3091557895);
	template<> QUESTSYSTEM_API UClass* StaticClass<UGameInstanceBase>()
	{
		return UGameInstanceBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameInstanceBase(Z_Construct_UClass_UGameInstanceBase, &UGameInstanceBase::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UGameInstanceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstanceBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
