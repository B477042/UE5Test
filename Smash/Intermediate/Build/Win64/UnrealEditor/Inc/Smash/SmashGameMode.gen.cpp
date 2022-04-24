// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smash/SmashGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmashGameMode() {}
// Cross Module References
	SMASH_API UClass* Z_Construct_UClass_ASmashGameMode_NoRegister();
	SMASH_API UClass* Z_Construct_UClass_ASmashGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Smash();
// End Cross Module References
	void ASmashGameMode::StaticRegisterNativesASmashGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASmashGameMode);
	UClass* Z_Construct_UClass_ASmashGameMode_NoRegister()
	{
		return ASmashGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASmashGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASmashGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Smash,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmashGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SmashGameMode.h" },
		{ "ModuleRelativePath", "SmashGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASmashGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmashGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASmashGameMode_Statics::ClassParams = {
		&ASmashGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASmashGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASmashGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASmashGameMode()
	{
		if (!Z_Registration_Info_UClass_ASmashGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASmashGameMode.OuterSingleton, Z_Construct_UClass_ASmashGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASmashGameMode.OuterSingleton;
	}
	template<> SMASH_API UClass* StaticClass<ASmashGameMode>()
	{
		return ASmashGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASmashGameMode);
	struct Z_CompiledInDeferFile_FID_Smash_Source_Smash_SmashGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Smash_Source_Smash_SmashGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASmashGameMode, ASmashGameMode::StaticClass, TEXT("ASmashGameMode"), &Z_Registration_Info_UClass_ASmashGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASmashGameMode), 1383593811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Smash_Source_Smash_SmashGameMode_h_3499306238(TEXT("/Script/Smash"),
		Z_CompiledInDeferFile_FID_Smash_Source_Smash_SmashGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Smash_Source_Smash_SmashGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
