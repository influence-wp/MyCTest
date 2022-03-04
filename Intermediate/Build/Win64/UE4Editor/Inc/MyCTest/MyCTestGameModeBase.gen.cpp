// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCTest/MyCTestGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCTestGameModeBase() {}
// Cross Module References
	MYCTEST_API UClass* Z_Construct_UClass_AMyCTestGameModeBase_NoRegister();
	MYCTEST_API UClass* Z_Construct_UClass_AMyCTestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyCTest();
// End Cross Module References
	void AMyCTestGameModeBase::StaticRegisterNativesAMyCTestGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMyCTestGameModeBase_NoRegister()
	{
		return AMyCTestGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyCTestGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCTestGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCTestGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyCTestGameModeBase.h" },
		{ "ModuleRelativePath", "MyCTestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCTestGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCTestGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCTestGameModeBase_Statics::ClassParams = {
		&AMyCTestGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyCTestGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCTestGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCTestGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCTestGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCTestGameModeBase, 2558153344);
	template<> MYCTEST_API UClass* StaticClass<AMyCTestGameModeBase>()
	{
		return AMyCTestGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCTestGameModeBase(Z_Construct_UClass_AMyCTestGameModeBase, &AMyCTestGameModeBase::StaticClass, TEXT("/Script/MyCTest"), TEXT("AMyCTestGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCTestGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
