// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagara/Public/HoudiniPointCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPointCache() {}
// Cross Module References
	HOUDININIAGARA_API UEnum* Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType();
	UPackage* Z_Construct_UPackage__Script_HoudiniNiagara();
	HOUDININIAGARA_API UEnum* Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes();
	HOUDININIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FPointIndexes();
	HOUDININIAGARA_API UClass* Z_Construct_UClass_UHoudiniPointCache_NoRegister();
	HOUDININIAGARA_API UClass* Z_Construct_UClass_UHoudiniPointCache();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
	static UEnum* EHoudiniPointCacheFileType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType, Z_Construct_UPackage__Script_HoudiniNiagara(), TEXT("EHoudiniPointCacheFileType"));
		}
		return Singleton;
	}
	template<> HOUDININIAGARA_API UEnum* StaticEnum<EHoudiniPointCacheFileType>()
	{
		return EHoudiniPointCacheFileType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniPointCacheFileType(EHoudiniPointCacheFileType_StaticEnum, TEXT("/Script/HoudiniNiagara"), TEXT("EHoudiniPointCacheFileType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Hash() { return 2692212574U; }
	UEnum* Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniNiagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniPointCacheFileType"), 0, Get_Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniPointCacheFileType::Invalid", (int64)EHoudiniPointCacheFileType::Invalid },
				{ "EHoudiniPointCacheFileType::CSV", (int64)EHoudiniPointCacheFileType::CSV },
				{ "EHoudiniPointCacheFileType::JSON", (int64)EHoudiniPointCacheFileType::JSON },
				{ "EHoudiniPointCacheFileType::BJSON", (int64)EHoudiniPointCacheFileType::BJSON },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BJSON.Name", "EHoudiniPointCacheFileType::BJSON" },
				{ "CSV.Name", "EHoudiniPointCacheFileType::CSV" },
				{ "Invalid.Name", "EHoudiniPointCacheFileType::Invalid" },
				{ "JSON.Name", "EHoudiniPointCacheFileType::JSON" },
				{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniNiagara,
				nullptr,
				"EHoudiniPointCacheFileType",
				"EHoudiniPointCacheFileType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHoudiniAttributes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes, Z_Construct_UPackage__Script_HoudiniNiagara(), TEXT("EHoudiniAttributes"));
		}
		return Singleton;
	}
	template<> HOUDININIAGARA_API UEnum* StaticEnum<EHoudiniAttributes>()
	{
		return EHoudiniAttributes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniAttributes(EHoudiniAttributes_StaticEnum, TEXT("/Script/HoudiniNiagara"), TEXT("EHoudiniAttributes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Hash() { return 3568276965U; }
	UEnum* Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniNiagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniAttributes"), 0, Get_Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HOUDINI_ATTR_BEGIN", (int64)HOUDINI_ATTR_BEGIN },
				{ "POSITION", (int64)POSITION },
				{ "NORMAL", (int64)NORMAL },
				{ "TIME", (int64)TIME },
				{ "POINTID", (int64)POINTID },
				{ "LIFE", (int64)LIFE },
				{ "COLOR", (int64)COLOR },
				{ "ALPHA", (int64)ALPHA },
				{ "VELOCITY", (int64)VELOCITY },
				{ "TYPE", (int64)TYPE },
				{ "IMPULSE", (int64)IMPULSE },
				{ "AGE", (int64)AGE },
				{ "HOUDINI_ATTR_SIZE", (int64)HOUDINI_ATTR_SIZE },
				{ "HOUDINI_ATTR_END", (int64)HOUDINI_ATTR_END },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AGE.Name", "AGE" },
				{ "ALPHA.Name", "ALPHA" },
				{ "COLOR.Name", "COLOR" },
				{ "HOUDINI_ATTR_BEGIN.Name", "HOUDINI_ATTR_BEGIN" },
				{ "HOUDINI_ATTR_END.Name", "HOUDINI_ATTR_END" },
				{ "HOUDINI_ATTR_SIZE.Name", "HOUDINI_ATTR_SIZE" },
				{ "IMPULSE.Name", "IMPULSE" },
				{ "LIFE.Name", "LIFE" },
				{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
				{ "NORMAL.Name", "NORMAL" },
				{ "POINTID.Name", "POINTID" },
				{ "POSITION.Name", "POSITION" },
				{ "TIME.Name", "TIME" },
				{ "TYPE.Name", "TYPE" },
				{ "VELOCITY.Name", "VELOCITY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniNiagara,
				nullptr,
				"EHoudiniAttributes",
				"EHoudiniAttributes",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPointIndexes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDININIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FPointIndexes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointIndexes, Z_Construct_UPackage__Script_HoudiniNiagara(), TEXT("PointIndexes"), sizeof(FPointIndexes), Get_Z_Construct_UScriptStruct_FPointIndexes_Hash());
	}
	return Singleton;
}
template<> HOUDININIAGARA_API UScriptStruct* StaticStruct<FPointIndexes>()
{
	return FPointIndexes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointIndexes(FPointIndexes::StaticStruct, TEXT("/Script/HoudiniNiagara"), TEXT("PointIndexes"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniNiagara_StaticRegisterNativesFPointIndexes
{
	FScriptStruct_HoudiniNiagara_StaticRegisterNativesFPointIndexes()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointIndexes")),new UScriptStruct::TCppStructOps<FPointIndexes>);
	}
} ScriptStruct_HoudiniNiagara_StaticRegisterNativesFPointIndexes;
	struct Z_Construct_UScriptStruct_FPointIndexes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SampleIndexes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleIndexes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointIndexes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointIndexes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointIndexes>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_MetaData[] = {
		{ "Comment", "// Simple structure for storing all the sample indexes used for a given point\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Simple structure for storing all the sample indexes used for a given point" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes = { "SampleIndexes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointIndexes, SampleIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_Inner = { "SampleIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointIndexes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointIndexes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagara,
		nullptr,
		&NewStructOps,
		"PointIndexes",
		sizeof(FPointIndexes),
		alignof(FPointIndexes),
		Z_Construct_UScriptStruct_FPointIndexes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointIndexes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointIndexes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointIndexes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointIndexes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointIndexes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniNiagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointIndexes"), sizeof(FPointIndexes), Get_Z_Construct_UScriptStruct_FPointIndexes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointIndexes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointIndexes_Hash() { return 3822933178U; }
	DEFINE_FUNCTION(UHoudiniPointCache::execSetUseCustomCSVTitleRow)
	{
		P_GET_UBOOL(Z_Param_bInUseCustomCSVTitleRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseCustomCSVTitleRow(Z_Param_bInUseCustomCSVTitleRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetUseCustomCSVTitleRow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseCustomCSVTitleRow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointValueIndexes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPointIndexes>*)Z_Param__Result=P_THIS->GetPointValueIndexes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetSpecialAttributeIndexes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetSpecialAttributeIndexes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointTypes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetPointTypes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetLifeValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetLifeValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetSpawnTimes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetSpawnTimes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetFloatSampleData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetFloatSampleData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointType)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointType(Z_Param_Out_PointID,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointLifeAtTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DesiredTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointLifeAtTime(Z_Param_Out_PointID,Z_Param_Out_DesiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointLife)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointLife(Z_Param_Out_PointID,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointPositionAtTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointPositionAtTime(Z_Param_Out_PointID,Z_Param_Out_desiredTime,Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointInt32ValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointInt32ValueAtTime(Z_Param_PointID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointFloatValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointFloatValueAtTime(Z_Param_PointID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointQuatValueAtTimeForString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat);
		P_GET_UBOOL(Z_Param_DoHoudiniToUnrealConversion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointQuatValueAtTimeForString(Z_Param_PointID,Z_Param_Attribute,Z_Param_desiredTime,Z_Param_Out_Quat,Z_Param_DoHoudiniToUnrealConversion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointQuatValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat);
		P_GET_UBOOL(Z_Param_DoHoudiniToUnrealConversion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointQuatValueAtTime(Z_Param_PointID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Quat,Z_Param_DoHoudiniToUnrealConversion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointVector4ValueAtTimeForString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointVector4ValueAtTimeForString(Z_Param_PointID,Z_Param_Attribute,Z_Param_desiredTime,Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointVector4ValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointVector4ValueAtTime(Z_Param_PointID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointVectorValueAtTimeForString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
		P_GET_UBOOL(Z_Param_DoSwap);
		P_GET_UBOOL(Z_Param_DoScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointVectorValueAtTimeForString(Z_Param_PointID,Z_Param_Attribute,Z_Param_desiredTime,Z_Param_Out_Vector,Z_Param_DoSwap,Z_Param_DoScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointVectorValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
		P_GET_UBOOL(Z_Param_DoSwap);
		P_GET_UBOOL(Z_Param_DoScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointVectorValueAtTime(Z_Param_PointID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Vector,Z_Param_DoSwap,Z_Param_DoScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointValueAtTimeForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointValueAtTimeForString(Z_Param_Out_PointID,Z_Param_Attribute,Z_Param_Out_desiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointValueAtTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointValueAtTime(Z_Param_Out_PointID,Z_Param_Out_AttributeIndex,Z_Param_Out_desiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetSampleIndexesForPointAtTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PrevSampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NextSampleIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PrevWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSampleIndexesForPointAtTime(Z_Param_Out_PointID,Z_Param_Out_desiredTime,Z_Param_Out_PrevSampleIndex,Z_Param_Out_NextSampleIndex,Z_Param_Out_PrevWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointIDsToSpawnAtTime)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LastSpawnedPointID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LastSpawnTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LastSpawnTimeRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointIDsToSpawnAtTime(Z_Param_Out_desiredTime,Z_Param_Out_MinID,Z_Param_Out_MaxID,Z_Param_Out_Count,Z_Param_Out_LastSpawnedPointID,Z_Param_Out_LastSpawnTime,Z_Param_Out_LastSpawnTimeRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetLastPointIDToSpawnAtTime)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_time);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_lastID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLastPointIDToSpawnAtTime(Z_Param_Out_time,Z_Param_Out_lastID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetLastSampleIndexAtTime)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_lastSampleIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLastSampleIndexAtTime(Z_Param_Out_desiredTime,Z_Param_Out_lastSampleIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetImpulseValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetImpulseValue(Z_Param_Out_sampleIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVelocityValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVelocityValue(Z_Param_Out_sampleIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetColorValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetColorValue(Z_Param_Out_sampleIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetNormalValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNormalValue(Z_Param_Out_sampleIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPositionValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPositionValue(Z_Param_Out_sampleIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetTimeValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTimeValue(Z_Param_Out_sampleIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetQuatValueForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_value);
		P_GET_UBOOL_REF(Z_Param_Out_DoHoudiniToUnrealConversion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQuatValueForString(Z_Param_Out_sampleIndex,Z_Param_Attribute,Z_Param_Out_value,Z_Param_Out_DoHoudiniToUnrealConversion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetQuatValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_attrIndex);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_value);
		P_GET_UBOOL_REF(Z_Param_Out_DoHoudiniToUnrealConversion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQuatValue(Z_Param_Out_sampleIndex,Z_Param_Out_attrIndex,Z_Param_Out_value,Z_Param_Out_DoHoudiniToUnrealConversion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVector4ValueForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVector4ValueForString(Z_Param_Out_sampleIndex,Z_Param_Attribute,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVector4Value)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_attrIndex);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVector4Value(Z_Param_Out_sampleIndex,Z_Param_Out_attrIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVectorValueForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_GET_UBOOL_REF(Z_Param_Out_DoSwap);
		P_GET_UBOOL_REF(Z_Param_Out_DoScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVectorValueForString(Z_Param_Out_sampleIndex,Z_Param_Attribute,Z_Param_Out_value,Z_Param_Out_DoSwap,Z_Param_Out_DoScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVectorValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_attrIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_GET_UBOOL_REF(Z_Param_Out_DoSwap);
		P_GET_UBOOL_REF(Z_Param_Out_DoScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVectorValue(Z_Param_Out_sampleIndex,Z_Param_Out_attrIndex,Z_Param_Out_value,Z_Param_Out_DoSwap,Z_Param_Out_DoScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetFloatValueForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFloatValueForString(Z_Param_Out_sampleIndex,Z_Param_Attribute,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetFloatValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_attrIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFloatValue(Z_Param_Out_sampleIndex,Z_Param_Out_attrIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetAttributeIndexInArrayFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InAttribute);
		P_GET_TARRAY_REF(FString,Z_Param_Out_InAttributeArray);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutAttributeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHoudiniPointCache::GetAttributeIndexInArrayFromString(Z_Param_InAttribute,Z_Param_Out_InAttributeArray,Z_Param_Out_OutAttributeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetAttributeIndexFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAttributeIndexFromString(Z_Param_Attribute,Z_Param_Out_AttributeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetNumberOfAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfAttributes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetNumberOfSamples)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfSamples();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetNumberOfPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfPoints();
		P_NATIVE_END;
	}
	void UHoudiniPointCache::StaticRegisterNativesUHoudiniPointCache()
	{
		UClass* Class = UHoudiniPointCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttributeIndexFromString", &UHoudiniPointCache::execGetAttributeIndexFromString },
			{ "GetAttributeIndexInArrayFromString", &UHoudiniPointCache::execGetAttributeIndexInArrayFromString },
			{ "GetColorValue", &UHoudiniPointCache::execGetColorValue },
			{ "GetFloatSampleData", &UHoudiniPointCache::execGetFloatSampleData },
			{ "GetFloatValue", &UHoudiniPointCache::execGetFloatValue },
			{ "GetFloatValueForString", &UHoudiniPointCache::execGetFloatValueForString },
			{ "GetImpulseValue", &UHoudiniPointCache::execGetImpulseValue },
			{ "GetLastPointIDToSpawnAtTime", &UHoudiniPointCache::execGetLastPointIDToSpawnAtTime },
			{ "GetLastSampleIndexAtTime", &UHoudiniPointCache::execGetLastSampleIndexAtTime },
			{ "GetLifeValues", &UHoudiniPointCache::execGetLifeValues },
			{ "GetNormalValue", &UHoudiniPointCache::execGetNormalValue },
			{ "GetNumberOfAttributes", &UHoudiniPointCache::execGetNumberOfAttributes },
			{ "GetNumberOfPoints", &UHoudiniPointCache::execGetNumberOfPoints },
			{ "GetNumberOfSamples", &UHoudiniPointCache::execGetNumberOfSamples },
			{ "GetPointFloatValueAtTime", &UHoudiniPointCache::execGetPointFloatValueAtTime },
			{ "GetPointIDsToSpawnAtTime", &UHoudiniPointCache::execGetPointIDsToSpawnAtTime },
			{ "GetPointInt32ValueAtTime", &UHoudiniPointCache::execGetPointInt32ValueAtTime },
			{ "GetPointLife", &UHoudiniPointCache::execGetPointLife },
			{ "GetPointLifeAtTime", &UHoudiniPointCache::execGetPointLifeAtTime },
			{ "GetPointPositionAtTime", &UHoudiniPointCache::execGetPointPositionAtTime },
			{ "GetPointQuatValueAtTime", &UHoudiniPointCache::execGetPointQuatValueAtTime },
			{ "GetPointQuatValueAtTimeForString", &UHoudiniPointCache::execGetPointQuatValueAtTimeForString },
			{ "GetPointType", &UHoudiniPointCache::execGetPointType },
			{ "GetPointTypes", &UHoudiniPointCache::execGetPointTypes },
			{ "GetPointValueAtTime", &UHoudiniPointCache::execGetPointValueAtTime },
			{ "GetPointValueAtTimeForString", &UHoudiniPointCache::execGetPointValueAtTimeForString },
			{ "GetPointValueIndexes", &UHoudiniPointCache::execGetPointValueIndexes },
			{ "GetPointVector4ValueAtTime", &UHoudiniPointCache::execGetPointVector4ValueAtTime },
			{ "GetPointVector4ValueAtTimeForString", &UHoudiniPointCache::execGetPointVector4ValueAtTimeForString },
			{ "GetPointVectorValueAtTime", &UHoudiniPointCache::execGetPointVectorValueAtTime },
			{ "GetPointVectorValueAtTimeForString", &UHoudiniPointCache::execGetPointVectorValueAtTimeForString },
			{ "GetPositionValue", &UHoudiniPointCache::execGetPositionValue },
			{ "GetQuatValue", &UHoudiniPointCache::execGetQuatValue },
			{ "GetQuatValueForString", &UHoudiniPointCache::execGetQuatValueForString },
			{ "GetSampleIndexesForPointAtTime", &UHoudiniPointCache::execGetSampleIndexesForPointAtTime },
			{ "GetSpawnTimes", &UHoudiniPointCache::execGetSpawnTimes },
			{ "GetSpecialAttributeIndexes", &UHoudiniPointCache::execGetSpecialAttributeIndexes },
			{ "GetTimeValue", &UHoudiniPointCache::execGetTimeValue },
			{ "GetUseCustomCSVTitleRow", &UHoudiniPointCache::execGetUseCustomCSVTitleRow },
			{ "GetVector4Value", &UHoudiniPointCache::execGetVector4Value },
			{ "GetVector4ValueForString", &UHoudiniPointCache::execGetVector4ValueForString },
			{ "GetVectorValue", &UHoudiniPointCache::execGetVectorValue },
			{ "GetVectorValueForString", &UHoudiniPointCache::execGetVectorValueForString },
			{ "GetVelocityValue", &UHoudiniPointCache::execGetVelocityValue },
			{ "SetUseCustomCSVTitleRow", &UHoudiniPointCache::execSetUseCustomCSVTitleRow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics
	{
		struct HoudiniPointCache_eventGetAttributeIndexFromString_Parms
		{
			FString Attribute;
			int32 AttributeIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetAttributeIndexFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetAttributeIndexFromString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexFromString_Parms, AttributeIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexFromString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_AttributeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the attribute index for a given string. \n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the attribute index for a given string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetAttributeIndexFromString", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetAttributeIndexFromString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics
	{
		struct HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms
		{
			FString InAttribute;
			TArray<FString> InAttributeArray;
			int32 OutAttributeIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutAttributeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAttributeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InAttributeArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAttributeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAttribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_OutAttributeIndex = { "OutAttributeIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms, OutAttributeIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray = { "InAttributeArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms, InAttributeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_Inner = { "InAttributeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute = { "InAttribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms, InAttribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_OutAttributeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the attribute index for a given string. This is a static version of the function that\n// takes the attribute name array as an argument as well.\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the attribute index for a given string. This is a static version of the function that\ntakes the attribute name array as an argument as well." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetAttributeIndexInArrayFromString", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics
	{
		struct HoudiniPointCache_eventGetColorValue_Parms
		{
			int32 sampleIndex;
			FLinearColor value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetColorValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetColorValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetColorValue_Parms, value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetColorValue_Parms, sampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_sampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_sampleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_sampleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns a Color for a given point in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns a Color for a given point in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetColorValue", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetColorValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetColorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics
	{
		struct HoudiniPointCache_eventGetFloatSampleData_Parms
		{
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatSampleData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Point Cache Data" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetFloatSampleData", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetFloatSampleData_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics
	{
		struct HoudiniPointCache_eventGetFloatValue_Parms
		{
			int32 sampleIndex;
			int32 attrIndex;
			float value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attrIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_attrIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetFloatValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetFloatValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex = { "attrIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValue_Parms, attrIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValue_Parms, sampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_sampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_sampleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_sampleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the float value at a given point in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the float value at a given point in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetFloatValue", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetFloatValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics
	{
		struct HoudiniPointCache_eventGetFloatValueForString_Parms
		{
			int32 sampleIndex;
			FString Attribute;
			float value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetFloatValueForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetFloatValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValueForString_Parms, value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValueForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValueForString_Parms, sampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_sampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_sampleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_sampleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the float value at a given point in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the float value at a given point in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetFloatValueForString", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetFloatValueForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics
	{
		struct HoudiniPointCache_eventGetImpulseValue_Parms
		{
			int32 sampleIndex;
			float value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetImpulseValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetImpulseValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetImpulseValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetImpulseValue_Parms, sampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_sampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_sampleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_sampleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns an Impulse float value for a given point in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns an Impulse float value for a given point in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetImpulseValue", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetImpulseValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics
	{
		struct HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms
		{
			float time;
			int32 lastID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lastID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_lastID = { "lastID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms, lastID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms, time), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_lastID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Get the last pointID of the points to be spawned at time t\n// Invalid Index are used to indicate edge cases:\n// -1 will be returned if there is no points to spawn ( t is smaller than the first point time )\n// NumberOfSamples will be returned if all points in the CSV have been spawned ( t is higher than the last point time )\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Get the last pointID of the points to be spawned at time t\nInvalid Index are used to indicate edge cases:\n-1 will be returned if there is no points to spawn ( t is smaller than the first point time )\nNumberOfSamples will be returned if all points in the CSV have been spawned ( t is higher than the last point time )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetLastPointIDToSpawnAtTime", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics
	{
		struct HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms
		{
			float desiredTime;
			int32 lastSampleIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lastSampleIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_lastSampleIndex = { "lastSampleIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms, lastSampleIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms, desiredTime), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_lastSampleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Get the last sample index for a given time value (the sample with a time smaller or equal to desiredTime)\n// If the point cache doesn't have time informations, returns false and set LastsampleIndex to the last sample in the file\n// If desiredTime is smaller than the time value in the first sample, LastsampleIndex will be set to -1\n// If desiredTime is higher than the last time value in the last sample of the point cache, LastIndex will be set to the last sample's index\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Get the last sample index for a given time value (the sample with a time smaller or equal to desiredTime)\nIf the point cache doesn't have time informations, returns false and set LastsampleIndex to the last sample in the file\nIf desiredTime is smaller than the time value in the first sample, LastsampleIndex will be set to -1\nIf desiredTime is higher than the last time value in the last sample of the point cache, LastIndex will be set to the last sample's index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetLastSampleIndexAtTime", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics
	{
		struct HoudiniPointCache_eventGetLifeValues_Parms
		{
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetLifeValues_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Point Cache Data" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetLifeValues", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetLifeValues_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics
	{
		struct HoudiniPointCache_eventGetNormalValue_Parms
		{
			int32 sampleIndex;
			FVector value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetNormalValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetNormalValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetNormalValue_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetNormalValue_Parms, sampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_sampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_sampleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_sampleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns a Normal Vector3 for a given point in the point cache (converted to unreal's coordinate system)\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns a Normal Vector3 for a given point in the point cache (converted to unreal's coordinate system)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetNormalValue", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetNormalValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics
	{
		struct HoudiniPointCache_eventGetNumberOfAttributes_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetNumberOfAttributes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the number of attributes found in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the number of attributes found in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetNumberOfAttributes", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetNumberOfAttributes_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics
	{
		struct HoudiniPointCache_eventGetNumberOfPoints_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetNumberOfPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the number of points found in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the number of points found in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetNumberOfPoints", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetNumberOfPoints_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics
	{
		struct HoudiniPointCache_eventGetNumberOfSamples_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetNumberOfSamples_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the number of samples found in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the number of samples found in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetNumberOfSamples", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetNumberOfSamples_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointFloatValueAtTime_Parms
		{
			int32 PointID;
			int32 AttributeIndex;
			float desiredTime;
			float Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointFloatValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms, PointID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_desiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_AttributeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointFloatValueAtTime", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms
		{
			float desiredTime;
			int32 MinID;
			int32 MaxID;
			int32 Count;
			int32 LastSpawnedPointID;
			float LastSpawnTime;
			float LastSpawnTimeRequest;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastSpawnTimeRequest;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastSpawnTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastSpawnedPointID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnTimeRequest = { "LastSpawnTimeRequest", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, LastSpawnTimeRequest), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnTime = { "LastSpawnTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, LastSpawnTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnedPointID = { "LastSpawnedPointID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, LastSpawnedPointID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_MaxID = { "MaxID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, MaxID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_MinID = { "MinID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, MinID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, desiredTime), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnTimeRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnedPointID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_MaxID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_MinID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointIDsToSpawnAtTime", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms
		{
			int32 PointID;
			int32 AttributeIndex;
			float desiredTime;
			int32 Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms, PointID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_desiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_AttributeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Return the integer value of the point at the keyframe before the desired time. No value interpolation will take place.\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Return the integer value of the point at the keyframe before the desired time. No value interpolation will take place." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointInt32ValueAtTime", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics
	{
		struct HoudiniPointCache_eventGetPointLife_Parms
		{
			int32 PointID;
			float Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointLife_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointLife_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLife_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_PointID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLife_Parms, PointID), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_PointID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_PointID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Return a given point's life value at spawn\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Return a given point's life value at spawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointLife", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointLife_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointLife()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointLifeAtTime_Parms
		{
			int32 PointID;
			float DesiredTime;
			float Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointLifeAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointLifeAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLifeAtTime_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_DesiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_DesiredTime = { "DesiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLifeAtTime_Parms, DesiredTime), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_DesiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_DesiredTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_PointID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLifeAtTime_Parms, PointID), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_PointID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_PointID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_DesiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Return a point's life for a given time value\n// Note this function currently behaves exactly the same as GetPointLife\n// since the Lifetime value is currently treated as a constant. This could\n// change in the future.\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Return a point's life for a given time value\nNote this function currently behaves exactly the same as GetPointLife\nsince the Lifetime value is currently treated as a constant. This could\nchange in the future." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointLifeAtTime", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointLifeAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointPositionAtTime_Parms
		{
			int32 PointID;
			float desiredTime;
			FVector Vector;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointPositionAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointPositionAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointPositionAtTime_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointPositionAtTime_Parms, desiredTime), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_PointID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointPositionAtTime_Parms, PointID), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_PointID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_PointID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the Position Value for a given point at a given time value (linearly interpolated)\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the Position Value for a given point at a given time value (linearly interpolated)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointPositionAtTime", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointPositionAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointQuatValueAtTime_Parms
		{
			int32 PointID;
			int32 AttributeIndex;
			float desiredTime;
			FQuat Quat;
			bool DoHoudiniToUnrealConversion;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoHoudiniToUnrealConversion;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quat;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointQuatValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointQuatValueAtTime_Parms*)Obj)->DoHoudiniToUnrealConversion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_DoHoudiniToUnrealConversion = { "DoHoudiniToUnrealConversion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms, Quat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms, PointID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_DoHoudiniToUnrealConversion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_Quat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_desiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_AttributeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the Quat Value for a given point at a given time value (linearly interpolated)\n" },
		{ "CPP_Default_DoHoudiniToUnrealConversion", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the Quat Value for a given point at a given time value (linearly interpolated)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointQuatValueAtTime", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics
	{
		struct HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms
		{
			int32 PointID;
			FString Attribute;
			float desiredTime;
			FQuat Quat;
			bool DoHoudiniToUnrealConversion;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoHoudiniToUnrealConversion;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quat;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms*)Obj)->DoHoudiniToUnrealConversion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_DoHoudiniToUnrealConversion = { "DoHoudiniToUnrealConversion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms, Quat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms, PointID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_DoHoudiniToUnrealConversion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Quat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_desiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the Quat Value for a given point at a given time value (linearly interpolated), via the attribute name\n" },
		{ "CPP_Default_DoHoudiniToUnrealConversion", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the Quat Value for a given point at a given time value (linearly interpolated), via the attribute name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointQuatValueAtTimeForString", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics
	{
		struct HoudiniPointCache_eventGetPointType_Parms
		{
			int32 PointID;
			int32 Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointType_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointType_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_PointID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointType_Parms, PointID), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_PointID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_PointID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Return a point's type at spawn\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Return a point's type at spawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointType", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointType_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics
	{
		struct HoudiniPointCache_eventGetPointTypes_Parms
		{
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointTypes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Point Cache Data" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointTypes", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointTypes_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointValueAtTime_Parms
		{
			int32 PointID;
			int32 AttributeIndex;
			float desiredTime;
			float Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTime_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTime_Parms, desiredTime), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_PointID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTime_Parms, PointID), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_PointID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_PointID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the value for a point at a given time value (linearly interpolated)\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the value for a point at a given time value (linearly interpolated)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointValueAtTime", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointValueAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics
	{
		struct HoudiniPointCache_eventGetPointValueAtTimeForString_Parms
		{
			int32 PointID;
			FString Attribute;
			float desiredTime;
			float Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointValueAtTimeForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms, desiredTime), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_PointID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms, PointID), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_PointID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_PointID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the value for a point at a given time value (linearly interpolated), via the attribute name\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the value for a point at a given time value (linearly interpolated), via the attribute name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointValueAtTimeForString", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics
	{
		struct HoudiniPointCache_eventGetPointValueIndexes_Parms
		{
			TArray<FPointIndexes> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueIndexes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPointIndexes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointValueIndexes", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointValueIndexes_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms
		{
			int32 PointID;
			int32 AttributeIndex;
			float desiredTime;
			FVector4 Vector;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms, Vector), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms, PointID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_desiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_AttributeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the Vector4 Value for a given point at a given time value (linearly interpolated)\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the Vector4 Value for a given point at a given time value (linearly interpolated)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointVector4ValueAtTime", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics
	{
		struct HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms
		{
			int32 PointID;
			FString Attribute;
			float desiredTime;
			FVector4 Vector;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms, Vector), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms, PointID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_desiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the Vector4 Value for a given point at a given time value (linearly interpolated), via the attribute name\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the Vector4 Value for a given point at a given time value (linearly interpolated), via the attribute name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointVector4ValueAtTimeForString", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointVectorValueAtTime_Parms
		{
			int32 PointID;
			int32 AttributeIndex;
			float desiredTime;
			FVector Vector;
			bool DoSwap;
			bool DoScale;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_DoScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoScale;
		static void NewProp_DoSwap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoSwap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoScale_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTime_Parms*)Obj)->DoScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoScale = { "DoScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoSwap_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTime_Parms*)Obj)->DoSwap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoSwap = { "DoSwap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoSwap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms, PointID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoSwap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_desiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_AttributeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the Vector Value for a given point at a given time value (linearly interpolated)\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the Vector Value for a given point at a given time value (linearly interpolated)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointVectorValueAtTime", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics
	{
		struct HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms
		{
			int32 PointID;
			FString Attribute;
			float desiredTime;
			FVector Vector;
			bool DoSwap;
			bool DoScale;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_DoScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoScale;
		static void NewProp_DoSwap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoSwap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoScale_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms*)Obj)->DoScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoScale = { "DoScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoSwap_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms*)Obj)->DoSwap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoSwap = { "DoSwap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoSwap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms, PointID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoSwap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_desiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the Vector Value for a given point at a given time value (linearly interpolated), via the attribute name\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the Vector Value for a given point at a given time value (linearly interpolated), via the attribute name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointVectorValueAtTimeForString", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics
	{
		struct HoudiniPointCache_eventGetPositionValue_Parms
		{
			int32 sampleIndex;
			FVector value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPositionValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPositionValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPositionValue_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPositionValue_Parms, sampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_sampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_sampleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_sampleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns a Position Vector3 for a given point in the point cache (converted to unreal's coordinate system)\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns a Position Vector3 for a given point in the point cache (converted to unreal's coordinate system)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPositionValue", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetPositionValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics
	{
		struct HoudiniPointCache_eventGetQuatValue_Parms
		{
			int32 sampleIndex;
			int32 attrIndex;
			FQuat value;
			bool DoHoudiniToUnrealConversion;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoHoudiniToUnrealConversion_MetaData[];
#endif
		static void NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoHoudiniToUnrealConversion;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attrIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_attrIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetQuatValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetQuatValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetQuatValue_Parms*)Obj)->DoHoudiniToUnrealConversion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion = { "DoHoudiniToUnrealConversion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetQuatValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValue_Parms, value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex = { "attrIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValue_Parms, attrIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValue_Parms, sampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_sampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_sampleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_sampleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns a Quat for a given point in the point cache\n" },
		{ "CPP_Default_DoHoudiniToUnrealConversion", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns a Quat for a given point in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetQuatValue", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetQuatValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics
	{
		struct HoudiniPointCache_eventGetQuatValueForString_Parms
		{
			int32 sampleIndex;
			FString Attribute;
			FQuat value;
			bool DoHoudiniToUnrealConversion;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoHoudiniToUnrealConversion_MetaData[];
#endif
		static void NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoHoudiniToUnrealConversion;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetQuatValueForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetQuatValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetQuatValueForString_Parms*)Obj)->DoHoudiniToUnrealConversion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion = { "DoHoudiniToUnrealConversion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetQuatValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValueForString_Parms, value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValueForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValueForString_Parms, sampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_sampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_sampleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_sampleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns a Quat for a given point in the point cache by column name\n" },
		{ "CPP_Default_DoHoudiniToUnrealConversion", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns a Quat for a given point in the point cache by column name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetQuatValueForString", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetQuatValueForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics
	{
		struct HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms
		{
			int32 PointID;
			float desiredTime;
			int32 PrevSampleIndex;
			int32 NextSampleIndex;
			float PrevWeight;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrevWeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextSampleIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrevSampleIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PrevWeight = { "PrevWeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, PrevWeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_NextSampleIndex = { "NextSampleIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, NextSampleIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PrevSampleIndex = { "PrevSampleIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, PrevSampleIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, desiredTime), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PointID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, PointID), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PointID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PointID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PrevWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_NextSampleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PrevSampleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PointID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns the previous and next sample indexes for reading the values of a specified point at a given time\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns the previous and next sample indexes for reading the values of a specified point at a given time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetSampleIndexesForPointAtTime", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics
	{
		struct HoudiniPointCache_eventGetSpawnTimes_Parms
		{
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetSpawnTimes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Point Cache Data" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetSpawnTimes", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetSpawnTimes_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics
	{
		struct HoudiniPointCache_eventGetSpecialAttributeIndexes_Parms
		{
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetSpecialAttributeIndexes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Point Cache Data" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetSpecialAttributeIndexes", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetSpecialAttributeIndexes_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics
	{
		struct HoudiniPointCache_eventGetTimeValue_Parms
		{
			int32 sampleIndex;
			float value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetTimeValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetTimeValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetTimeValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetTimeValue_Parms, sampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_sampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_sampleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_sampleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns a time value for a given point in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns a time value for a given point in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetTimeValue", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetTimeValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics
	{
		struct HoudiniPointCache_eventGetUseCustomCSVTitleRow_Parms
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
	void Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetUseCustomCSVTitleRow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetUseCustomCSVTitleRow_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Point Cache Settings" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetUseCustomCSVTitleRow", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetUseCustomCSVTitleRow_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics
	{
		struct HoudiniPointCache_eventGetVector4Value_Parms
		{
			int32 sampleIndex;
			int32 attrIndex;
			FVector4 value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attrIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_attrIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVector4Value_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVector4Value_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4Value_Parms, value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex = { "attrIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4Value_Parms, attrIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4Value_Parms, sampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_sampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_sampleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_sampleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns a Vector4 for a given point in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns a Vector4 for a given point in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVector4Value", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetVector4Value_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics
	{
		struct HoudiniPointCache_eventGetVector4ValueForString_Parms
		{
			int32 sampleIndex;
			FString Attribute;
			FVector4 value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVector4ValueForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVector4ValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4ValueForString_Parms, value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4ValueForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4ValueForString_Parms, sampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_sampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_sampleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_sampleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns a Vector4 for a given point in the point cache by column name\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns a Vector4 for a given point in the point cache by column name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVector4ValueForString", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetVector4ValueForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics
	{
		struct HoudiniPointCache_eventGetVectorValue_Parms
		{
			int32 sampleIndex;
			int32 attrIndex;
			FVector value;
			bool DoSwap;
			bool DoScale;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoScale_MetaData[];
#endif
		static void NewProp_DoScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoSwap_MetaData[];
#endif
		static void NewProp_DoSwap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoSwap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attrIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_attrIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValue_Parms*)Obj)->DoScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale = { "DoScale", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValue_Parms*)Obj)->DoSwap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap = { "DoSwap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValue_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex = { "attrIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValue_Parms, attrIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValue_Parms, sampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_sampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_sampleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_sampleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "/*\n\x09// Returns the string value at a given point in the point cache\n\x09""bool GetCSVStringValue( const int32& sampleIndex, const int32& attrIndex, FString& value );\n\x09// Returns the string value at a given point in the point cache\n\x09""bool GetCSVStringValue( const int32& sampleIndex, const FString& Attribute, FString& value );\n\x09*/// Returns a Vector3 for a given point in the point cache\n" },
		{ "CPP_Default_DoScale", "true" },
		{ "CPP_Default_DoSwap", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "// Returns the string value at a given point in the point cache\nbool GetCSVStringValue( const int32& sampleIndex, const int32& attrIndex, FString& value );\n// Returns the string value at a given point in the point cache\nbool GetCSVStringValue( const int32& sampleIndex, const FString& Attribute, FString& value );\n// Returns a Vector3 for a given point in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVectorValue", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetVectorValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics
	{
		struct HoudiniPointCache_eventGetVectorValueForString_Parms
		{
			int32 sampleIndex;
			FString Attribute;
			FVector value;
			bool DoSwap;
			bool DoScale;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoScale_MetaData[];
#endif
		static void NewProp_DoScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoSwap_MetaData[];
#endif
		static void NewProp_DoSwap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoSwap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValueForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValueForString_Parms*)Obj)->DoScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale = { "DoScale", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValueForString_Parms*)Obj)->DoSwap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap = { "DoSwap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValueForString_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValueForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValueForString_Parms, sampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_sampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_sampleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_sampleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns a Vector3 for a given point in the point cache by column name\n" },
		{ "CPP_Default_DoScale", "true" },
		{ "CPP_Default_DoSwap", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns a Vector3 for a given point in the point cache by column name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVectorValueForString", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetVectorValueForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics
	{
		struct HoudiniPointCache_eventGetVelocityValue_Parms
		{
			int32 sampleIndex;
			FVector value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVelocityValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVelocityValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVelocityValue_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVelocityValue_Parms, sampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_sampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_sampleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_sampleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "Comment", "// Returns a Velocity Vector3 for a given point in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Returns a Velocity Vector3 for a given point in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVelocityValue", nullptr, nullptr, sizeof(HoudiniPointCache_eventGetVelocityValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics
	{
		struct HoudiniPointCache_eventSetUseCustomCSVTitleRow_Parms
		{
			bool bInUseCustomCSVTitleRow;
		};
		static void NewProp_bInUseCustomCSVTitleRow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInUseCustomCSVTitleRow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::NewProp_bInUseCustomCSVTitleRow_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventSetUseCustomCSVTitleRow_Parms*)Obj)->bInUseCustomCSVTitleRow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::NewProp_bInUseCustomCSVTitleRow = { "bInUseCustomCSVTitleRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPointCache_eventSetUseCustomCSVTitleRow_Parms), &Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::NewProp_bInUseCustomCSVTitleRow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::NewProp_bInUseCustomCSVTitleRow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Point Cache Settings" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "SetUseCustomCSVTitleRow", nullptr, nullptr, sizeof(HoudiniPointCache_eventSetUseCustomCSVTitleRow_Parms), Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoudiniPointCache_NoRegister()
	{
		return UHoudiniPointCache::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPointCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FileType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomCSVTitleRow_MetaData[];
#endif
		static void NewProp_UseCustomCSVTitleRow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomCSVTitleRow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointValueIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointValueIndexes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointValueIndexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialAttributeIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpecialAttributeIndexes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpecialAttributeIndexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointTypes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LifeValues;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnTimes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnTimes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatSampleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatSampleData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatSampleData_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributeArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceCSVTitleRow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceCSVTitleRow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSampleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSampleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSampleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSampleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfSamples;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPointCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPointCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString, "GetAttributeIndexFromString" }, // 904913657
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString, "GetAttributeIndexInArrayFromString" }, // 3241318233
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetColorValue, "GetColorValue" }, // 3563036981
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData, "GetFloatSampleData" }, // 3377127889
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue, "GetFloatValue" }, // 3574995784
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString, "GetFloatValueForString" }, // 3398675435
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue, "GetImpulseValue" }, // 1184847838
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime, "GetLastPointIDToSpawnAtTime" }, // 2049315878
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime, "GetLastSampleIndexAtTime" }, // 2305892101
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues, "GetLifeValues" }, // 1655064588
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue, "GetNormalValue" }, // 1843336134
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes, "GetNumberOfAttributes" }, // 3402205958
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints, "GetNumberOfPoints" }, // 1141323387
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples, "GetNumberOfSamples" }, // 3239605318
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime, "GetPointFloatValueAtTime" }, // 4106695486
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime, "GetPointIDsToSpawnAtTime" }, // 1403445758
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime, "GetPointInt32ValueAtTime" }, // 3218784250
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointLife, "GetPointLife" }, // 3980603909
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime, "GetPointLifeAtTime" }, // 3809134636
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime, "GetPointPositionAtTime" }, // 2492278940
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime, "GetPointQuatValueAtTime" }, // 4282730359
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString, "GetPointQuatValueAtTimeForString" }, // 228223532
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointType, "GetPointType" }, // 1744621972
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes, "GetPointTypes" }, // 1533526410
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime, "GetPointValueAtTime" }, // 3969220376
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString, "GetPointValueAtTimeForString" }, // 152733949
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes, "GetPointValueIndexes" }, // 293541501
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime, "GetPointVector4ValueAtTime" }, // 777243485
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString, "GetPointVector4ValueAtTimeForString" }, // 1295028178
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime, "GetPointVectorValueAtTime" }, // 3683866116
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString, "GetPointVectorValueAtTimeForString" }, // 712088923
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue, "GetPositionValue" }, // 3585684364
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue, "GetQuatValue" }, // 1994034201
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString, "GetQuatValueForString" }, // 1801522663
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime, "GetSampleIndexesForPointAtTime" }, // 71627566
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes, "GetSpawnTimes" }, // 2686704540
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes, "GetSpecialAttributeIndexes" }, // 3861252015
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue, "GetTimeValue" }, // 2702457844
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow, "GetUseCustomCSVTitleRow" }, // 3052981886
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value, "GetVector4Value" }, // 1205359786
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString, "GetVector4ValueForString" }, // 775356289
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue, "GetVectorValue" }, // 363833969
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString, "GetVectorValueForString" }, // 2193144292
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue, "GetVelocityValue" }, // 2040280013
		{ &Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow, "SetUseCustomCSVTitleRow" }, // 410627065
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniPointCache.h" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_MetaData[] = {
		{ "Comment", "// The type of source file, such as CSV or JSON.\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "The type of source file, such as CSV or JSON." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, FileType), Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_MetaData[] = {
		{ "Comment", "/** For CSV source files, whether to use a custom title row. */" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "For CSV source files, whether to use a custom title row." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_SetBit(void* Obj)
	{
		((UHoudiniPointCache*)Obj)->UseCustomCSVTitleRow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow = { "UseCustomCSVTitleRow", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPointCache), &Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_MetaData[] = {
		{ "Comment", "/*\n\x09// Row indexes for new time values\n\x09UPROPERTY()\n\x09TMap<float, int32> TimeValuesIndexes;\n\x09*/// Sample indexes for each point\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "// Row indexes for new time values\nUPROPERTY()\nTMap<float, int32> TimeValuesIndexes;\n// Sample indexes for each point" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes = { "PointValueIndexes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, PointValueIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_Inner = { "PointValueIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPointIndexes, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_MetaData[] = {
		{ "Comment", "// Array containing the column indexes of the special attributes\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Array containing the column indexes of the special attributes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes = { "SpecialAttributeIndexes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, SpecialAttributeIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_Inner = { "SpecialAttributeIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_MetaData[] = {
		{ "Comment", "// Array containing all the type values for each point in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Array containing all the type values for each point in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes = { "PointTypes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, PointTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_Inner = { "PointTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_MetaData[] = {
		{ "Comment", "// Array containing all the life values for each point in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Array containing all the life values for each point in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues = { "LifeValues", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, LifeValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_Inner = { "LifeValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_MetaData[] = {
		{ "Comment", "// Array containing the spawn times for each point in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Array containing the spawn times for each point in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes = { "SpawnTimes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, SpawnTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_Inner = { "SpawnTimes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_MetaData[] = {
		{ "Comment", "/*\n\x09// Array containing the Raw String data\n\x09UPROPERTY()\n\x09TArray<FString> StringCSVData;\n\x09*/// Array containing all the sample data converted to floats\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "// Array containing the Raw String data\nUPROPERTY()\nTArray<FString> StringCSVData;\n// Array containing all the sample data converted to floats" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData = { "FloatSampleData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, FloatSampleData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_Inner = { "FloatSampleData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "Importing data and options used for this asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0012000800080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
		{ "Comment", "// The final attribute names used by the asset after parsing.\n// Packed vector values are expanded, so additional attributes (.0, .1, ... or .x, .y, .z) might have been inserted.\n// Use the indexes in this array to access your data.\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "The final attribute names used by the asset after parsing.\nPacked vector values are expanded, so additional attributes (.0, .1, ... or .x, .y, .z) might have been inserted.\nUse the indexes in this array to access your data." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray = { "AttributeArray", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, AttributeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_Inner = { "AttributeArray", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
		{ "Comment", "// The source title row for CSV files, describing the content of each column and used to locate specific values in the point cache.\n// Editing this will trigger a re-import of the point cache.\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "The source title row for CSV files, describing the content of each column and used to locate specific values in the point cache.\nEditing this will trigger a re-import of the point cache." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow = { "SourceCSVTitleRow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, SourceCSVTitleRow), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
		{ "Comment", "// The maximum sample time value, in seconds, in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "The maximum sample time value, in seconds, in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime = { "MaxSampleTime", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, MaxSampleTime), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
		{ "Comment", "// The minimum sample time value, in seconds, in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "The minimum sample time value, in seconds, in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime = { "MinSampleTime", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, MinSampleTime), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
		{ "Comment", "// The last frame of the exported frame range\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "The last frame of the exported frame range" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame = { "LastFrame", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, LastFrame), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
		{ "Comment", "// The first frame of the exported frame range\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "The first frame of the exported frame range" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame = { "FirstFrame", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, FirstFrame), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
		{ "Comment", "// The number of frames imported into the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "The number of frames imported into the point cache" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames = { "NumberOfFrames", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, NumberOfFrames), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
		{ "Comment", "// The number of unique points found in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "The number of unique points found in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints = { "NumberOfPoints", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, NumberOfPoints), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
		{ "Comment", "// The number of attributes stored in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "The number of attributes stored in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes = { "NumberOfAttributes", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, NumberOfAttributes), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
		{ "Comment", "// The number of values stored in the point cache\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "The number of values stored in the point cache" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples = { "NumberOfSamples", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, NumberOfSamples), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
		{ "Comment", "//-----------------------------------------------------------------------------------------\n//  MEMBER VARIABLES\n//-----------------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "ToolTip", "MEMBER VARIABLES" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPointCache, FileName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPointCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPointCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPointCache>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPointCache_Statics::ClassParams = {
		&UHoudiniPointCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniPointCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPointCache()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniPointCache_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniPointCache, 2836415726);
	template<> HOUDININIAGARA_API UClass* StaticClass<UHoudiniPointCache>()
	{
		return UHoudiniPointCache::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniPointCache(Z_Construct_UClass_UHoudiniPointCache, &UHoudiniPointCache::StaticClass, TEXT("/Script/HoudiniNiagara"), TEXT("UHoudiniPointCache"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPointCache);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
