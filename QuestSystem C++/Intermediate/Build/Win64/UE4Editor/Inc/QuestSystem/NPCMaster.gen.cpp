// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/NPC/NPCMaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCMaster() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_ANPCMaster_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_ANPCMaster();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	void ANPCMaster::StaticRegisterNativesANPCMaster()
	{
	}
	UClass* Z_Construct_UClass_ANPCMaster_NoRegister()
	{
		return ANPCMaster::StaticClass();
	}
	struct Z_Construct_UClass_ANPCMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCMaster_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC/NPCMaster.h" },
		{ "ModuleRelativePath", "NPC/NPCMaster.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANPCMaster_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(ANPCMaster, IInteractInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCMaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPCMaster_Statics::ClassParams = {
		&ANPCMaster::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPCMaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCMaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCMaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPCMaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPCMaster, 191183606);
	template<> QUESTSYSTEM_API UClass* StaticClass<ANPCMaster>()
	{
		return ANPCMaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPCMaster(Z_Construct_UClass_ANPCMaster, &ANPCMaster::StaticClass, TEXT("/Script/QuestSystem"), TEXT("ANPCMaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCMaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
