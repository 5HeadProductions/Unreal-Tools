// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealShowcase/UnrealShowcaseGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealShowcaseGameModeBase() {}
// Cross Module References
	UNREALSHOWCASE_API UClass* Z_Construct_UClass_AUnrealShowcaseGameModeBase_NoRegister();
	UNREALSHOWCASE_API UClass* Z_Construct_UClass_AUnrealShowcaseGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealShowcase();
// End Cross Module References
	void AUnrealShowcaseGameModeBase::StaticRegisterNativesAUnrealShowcaseGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealShowcaseGameModeBase);
	UClass* Z_Construct_UClass_AUnrealShowcaseGameModeBase_NoRegister()
	{
		return AUnrealShowcaseGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealShowcaseGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealShowcaseGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealShowcase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealShowcaseGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealShowcaseGameModeBase.h" },
		{ "ModuleRelativePath", "UnrealShowcaseGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealShowcaseGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealShowcaseGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealShowcaseGameModeBase_Statics::ClassParams = {
		&AUnrealShowcaseGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnrealShowcaseGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealShowcaseGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealShowcaseGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUnrealShowcaseGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealShowcaseGameModeBase.OuterSingleton, Z_Construct_UClass_AUnrealShowcaseGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealShowcaseGameModeBase.OuterSingleton;
	}
	template<> UNREALSHOWCASE_API UClass* StaticClass<AUnrealShowcaseGameModeBase>()
	{
		return AUnrealShowcaseGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealShowcaseGameModeBase);
	struct Z_CompiledInDeferFile_FID_UnrealShowcase_Source_UnrealShowcase_UnrealShowcaseGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealShowcase_Source_UnrealShowcase_UnrealShowcaseGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealShowcaseGameModeBase, AUnrealShowcaseGameModeBase::StaticClass, TEXT("AUnrealShowcaseGameModeBase"), &Z_Registration_Info_UClass_AUnrealShowcaseGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealShowcaseGameModeBase), 1699668368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealShowcase_Source_UnrealShowcase_UnrealShowcaseGameModeBase_h_2081799016(TEXT("/Script/UnrealShowcase"),
		Z_CompiledInDeferFile_FID_UnrealShowcase_Source_UnrealShowcase_UnrealShowcaseGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealShowcase_Source_UnrealShowcase_UnrealShowcaseGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
