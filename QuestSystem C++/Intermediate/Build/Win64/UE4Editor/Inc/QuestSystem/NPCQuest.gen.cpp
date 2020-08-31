// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/NPC/NPCQuest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCQuest() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_ANPCQuest_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_ANPCQuest();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_ANPCMaster();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References
	void ANPCQuest::StaticRegisterNativesANPCQuest()
	{
	}
	UClass* Z_Construct_UClass_ANPCQuest_NoRegister()
	{
		return ANPCQuest::StaticClass();
	}
	struct Z_Construct_UClass_ANPCQuest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCQuest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANPCMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCQuest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC/NPCQuest.h" },
		{ "ModuleRelativePath", "NPC/NPCQuest.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCQuest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCQuest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPCQuest_Statics::ClassParams = {
		&ANPCQuest::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPCQuest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCQuest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCQuest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPCQuest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPCQuest, 3194130396);
	template<> QUESTSYSTEM_API UClass* StaticClass<ANPCQuest>()
	{
		return ANPCQuest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPCQuest(Z_Construct_UClass_ANPCQuest, &ANPCQuest::StaticClass, TEXT("/Script/QuestSystem"), TEXT("ANPCQuest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCQuest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
