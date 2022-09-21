// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealShowcase/PlayerPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawn() {}
// Cross Module References
	UNREALSHOWCASE_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
	UNREALSHOWCASE_API UClass* Z_Construct_UClass_APlayerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UnrealShowcase();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void APlayerPawn::StaticRegisterNativesAPlayerPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerPawn);
	UClass* Z_Construct_UClass_APlayerPawn_NoRegister()
	{
		return APlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_APlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealShowcase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPawn.h" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_Sphere_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "Comment", "/* sphere to use for root component and collision */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
		{ "ToolTip", "sphere to use for root component and collision" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_Sphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "Comment", "/* Static mesh for the body attached to the root */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
		{ "ToolTip", "Static mesh for the body attached to the root" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "Comment", "/* Static mesh for the body attached to the body */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
		{ "ToolTip", "Static mesh for the body attached to the body" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, Head), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "Comment", "/* Spring arm to attach camera to root */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
		{ "ToolTip", "Spring arm to attach camera to root" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "Comment", "/* Camera attached to spring arm to provide pawn's view */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
		{ "ToolTip", "Camera attached to spring arm to provide pawn's view" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_Camera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_Sphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_Head,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerPawn_Statics::ClassParams = {
		&APlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerPawn()
	{
		if (!Z_Registration_Info_UClass_APlayerPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerPawn.OuterSingleton, Z_Construct_UClass_APlayerPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerPawn.OuterSingleton;
	}
	template<> UNREALSHOWCASE_API UClass* StaticClass<APlayerPawn>()
	{
		return APlayerPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawn);
	struct Z_CompiledInDeferFile_FID_UnrealShowcase_Source_UnrealShowcase_PlayerPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealShowcase_Source_UnrealShowcase_PlayerPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerPawn, APlayerPawn::StaticClass, TEXT("APlayerPawn"), &Z_Registration_Info_UClass_APlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerPawn), 3308456575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealShowcase_Source_UnrealShowcase_PlayerPawn_h_3642326016(TEXT("/Script/UnrealShowcase"),
		Z_CompiledInDeferFile_FID_UnrealShowcase_Source_UnrealShowcase_PlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealShowcase_Source_UnrealShowcase_PlayerPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
