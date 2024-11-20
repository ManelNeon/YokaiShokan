// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/LevelRandomizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelRandomizer() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ALevelRandomizer();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ALevelRandomizer_NoRegister();
YOKAISHOKAN_API UEnum* Z_Construct_UEnum_YokaiShokan_ECurrentLevel();
// End Cross Module References

// Begin Enum ECurrentLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECurrentLevel;
static UEnum* ECurrentLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECurrentLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECurrentLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YokaiShokan_ECurrentLevel, (UObject*)Z_Construct_UPackage__Script_YokaiShokan(), TEXT("ECurrentLevel"));
	}
	return Z_Registration_Info_UEnum_ECurrentLevel.OuterSingleton;
}
template<> YOKAISHOKAN_API UEnum* StaticEnum<ECurrentLevel>()
{
	return ECurrentLevel_StaticEnum();
}
struct Z_Construct_UEnum_YokaiShokan_ECurrentLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FIRST_LEVEL.Name", "ECurrentLevel::FIRST_LEVEL" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
		{ "SECOND_LEVEL.Name", "ECurrentLevel::SECOND_LEVEL" },
		{ "TOTAL_LEVEL.Name", "ECurrentLevel::TOTAL_LEVEL" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECurrentLevel::FIRST_LEVEL", (int64)ECurrentLevel::FIRST_LEVEL },
		{ "ECurrentLevel::SECOND_LEVEL", (int64)ECurrentLevel::SECOND_LEVEL },
		{ "ECurrentLevel::TOTAL_LEVEL", (int64)ECurrentLevel::TOTAL_LEVEL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YokaiShokan_ECurrentLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YokaiShokan,
	nullptr,
	"ECurrentLevel",
	"ECurrentLevel",
	Z_Construct_UEnum_YokaiShokan_ECurrentLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YokaiShokan_ECurrentLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YokaiShokan_ECurrentLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YokaiShokan_ECurrentLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YokaiShokan_ECurrentLevel()
{
	if (!Z_Registration_Info_UEnum_ECurrentLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECurrentLevel.InnerSingleton, Z_Construct_UEnum_YokaiShokan_ECurrentLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECurrentLevel.InnerSingleton;
}
// End Enum ECurrentLevel

// Begin Class ALevelRandomizer Function RandomizeLevel
struct Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics
{
	struct LevelRandomizer_eventRandomizeLevel_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelRandomizer_eventRandomizeLevel_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelRandomizer, nullptr, "RandomizeLevel", nullptr, nullptr, Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::LevelRandomizer_eventRandomizeLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::LevelRandomizer_eventRandomizeLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelRandomizer::execRandomizeLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->RandomizeLevel();
	P_NATIVE_END;
}
// End Class ALevelRandomizer Function RandomizeLevel

// Begin Class ALevelRandomizer
void ALevelRandomizer::StaticRegisterNativesALevelRandomizer()
{
	UClass* Class = ALevelRandomizer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RandomizeLevel", &ALevelRandomizer::execRandomizeLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelRandomizer);
UClass* Z_Construct_UClass_ALevelRandomizer_NoRegister()
{
	return ALevelRandomizer::StaticClass();
}
struct Z_Construct_UClass_ALevelRandomizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LevelRandomizer.h" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelLocations_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelLocations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel, "RandomizeLevel" }, // 1006738670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelRandomizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelLocations_Inner = { "LevelLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelLocations = { "LevelLocations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, LevelLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelLocations_MetaData), NewProp_LevelLocations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelRandomizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelLocations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelRandomizer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALevelRandomizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelRandomizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelRandomizer_Statics::ClassParams = {
	&ALevelRandomizer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALevelRandomizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALevelRandomizer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelRandomizer_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelRandomizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelRandomizer()
{
	if (!Z_Registration_Info_UClass_ALevelRandomizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelRandomizer.OuterSingleton, Z_Construct_UClass_ALevelRandomizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelRandomizer.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<ALevelRandomizer>()
{
	return ALevelRandomizer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelRandomizer);
ALevelRandomizer::~ALevelRandomizer() {}
// End Class ALevelRandomizer

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECurrentLevel_StaticEnum, TEXT("ECurrentLevel"), &Z_Registration_Info_UEnum_ECurrentLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2045559931U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelRandomizer, ALevelRandomizer::StaticClass, TEXT("ALevelRandomizer"), &Z_Registration_Info_UClass_ALevelRandomizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelRandomizer), 2769008964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_92457401(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
