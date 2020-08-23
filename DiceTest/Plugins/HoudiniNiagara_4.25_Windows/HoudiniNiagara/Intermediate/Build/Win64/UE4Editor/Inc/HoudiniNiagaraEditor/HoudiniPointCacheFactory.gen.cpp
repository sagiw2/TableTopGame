// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagaraEditor/Public/HoudiniPointCacheFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPointCacheFactory() {}
// Cross Module References
	HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheFactory_NoRegister();
	HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_HoudiniNiagaraEditor();
// End Cross Module References
	void UHoudiniPointCacheFactory::StaticRegisterNativesUHoudiniPointCacheFactory()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniPointCacheFactory_NoRegister()
	{
		return UHoudiniPointCacheFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPointCacheFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagaraEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A factory for HoudiniPointCache assets. */" },
		{ "IncludePath", "HoudiniPointCacheFactory.h" },
		{ "ModuleRelativePath", "Public/HoudiniPointCacheFactory.h" },
		{ "ToolTip", "A factory for HoudiniPointCache assets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPointCacheFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::ClassParams = {
		&UHoudiniPointCacheFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPointCacheFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniPointCacheFactory, 349963842);
	template<> HOUDININIAGARAEDITOR_API UClass* StaticClass<UHoudiniPointCacheFactory>()
	{
		return UHoudiniPointCacheFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniPointCacheFactory(Z_Construct_UClass_UHoudiniPointCacheFactory, &UHoudiniPointCacheFactory::StaticClass, TEXT("/Script/HoudiniNiagaraEditor"), TEXT("UHoudiniPointCacheFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPointCacheFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
