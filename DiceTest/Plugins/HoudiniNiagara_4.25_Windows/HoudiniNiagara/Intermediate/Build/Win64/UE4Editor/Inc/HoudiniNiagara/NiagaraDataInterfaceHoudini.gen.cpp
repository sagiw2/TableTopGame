// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagara/Classes/NiagaraDataInterfaceHoudini.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceHoudini() {}
// Cross Module References
	HOUDININIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniEvent();
	UPackage* Z_Construct_UPackage__Script_HoudiniNiagara();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HOUDININIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceHoudini_NoRegister();
	HOUDININIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceHoudini();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	HOUDININIAGARA_API UClass* Z_Construct_UClass_UHoudiniPointCache_NoRegister();
// End Cross Module References
class UScriptStruct* FHoudiniEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDININIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniEvent, Z_Construct_UPackage__Script_HoudiniNiagara(), TEXT("HoudiniEvent"), sizeof(FHoudiniEvent), Get_Z_Construct_UScriptStruct_FHoudiniEvent_Hash());
	}
	return Singleton;
}
template<> HOUDININIAGARA_API UScriptStruct* StaticStruct<FHoudiniEvent>()
{
	return FHoudiniEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniEvent(FHoudiniEvent::StaticStruct, TEXT("/Script/HoudiniNiagara"), TEXT("HoudiniEvent"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniNiagara_StaticRegisterNativesFHoudiniEvent
{
	FScriptStruct_HoudiniNiagara_StaticRegisterNativesFHoudiniEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HoudiniEvent")),new UScriptStruct::TCppStructOps<FHoudiniEvent>);
	}
} ScriptStruct_HoudiniNiagara_StaticRegisterNativesFHoudiniEvent;
	struct Z_Construct_UScriptStruct_FHoudiniEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Life_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Life;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Impulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniEvent, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Life_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Life = { "Life", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniEvent, Life), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Life_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Life_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniEvent, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_PointID_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniEvent, PointID), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_PointID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_PointID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniEvent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Impulse_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniEvent, Impulse), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Impulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Impulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniEvent, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniEvent, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Life,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_PointID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Impulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagara,
		nullptr,
		&NewStructOps,
		"HoudiniEvent",
		sizeof(FHoudiniEvent),
		alignof(FHoudiniEvent),
		Z_Construct_UScriptStruct_FHoudiniEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniNiagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniEvent"), sizeof(FHoudiniEvent), Get_Z_Construct_UScriptStruct_FHoudiniEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniEvent_Hash() { return 3934416845U; }
	void UNiagaraDataInterfaceHoudini::StaticRegisterNativesUNiagaraDataInterfaceHoudini()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceHoudini_NoRegister()
	{
		return UNiagaraDataInterfaceHoudini::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniPointCacheAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoudiniPointCacheAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::Class_MetaDataParams[] = {
		{ "Category", "Houdini Niagara" },
		{ "Comment", "/** Data Interface allowing sampling of UHoudiniPointCache assets (CSV, .json (binary) files) files. */" },
		{ "DisplayName", "Houdini Point Cache Info" },
		{ "IncludePath", "NiagaraDataInterfaceHoudini.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
		{ "ToolTip", "Data Interface allowing sampling of UHoudiniPointCache assets (CSV, .json (binary) files) files." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::NewProp_HoudiniPointCacheAsset_MetaData[] = {
		{ "Category", "Houdini Niagara" },
		{ "Comment", "// Houdini Point Cache Asset to sample\n" },
		{ "DisplayName", "Houdini Point Cache Asset" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
		{ "ToolTip", "Houdini Point Cache Asset to sample" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::NewProp_HoudiniPointCacheAsset = { "HoudiniPointCacheAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceHoudini, HoudiniPointCacheAsset), Z_Construct_UClass_UHoudiniPointCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::NewProp_HoudiniPointCacheAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::NewProp_HoudiniPointCacheAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::NewProp_HoudiniPointCacheAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceHoudini>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::ClassParams = {
		&UNiagaraDataInterfaceHoudini::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceHoudini()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceHoudini, 2561401203);
	template<> HOUDININIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceHoudini>()
	{
		return UNiagaraDataInterfaceHoudini::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceHoudini(Z_Construct_UClass_UNiagaraDataInterfaceHoudini, &UNiagaraDataInterfaceHoudini::StaticClass, TEXT("/Script/HoudiniNiagara"), TEXT("UNiagaraDataInterfaceHoudini"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceHoudini);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
