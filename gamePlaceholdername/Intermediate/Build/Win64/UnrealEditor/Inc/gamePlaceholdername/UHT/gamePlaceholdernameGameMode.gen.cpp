// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gamePlaceholdername/gamePlaceholdernameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegamePlaceholdernameGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GAMEPLACEHOLDERNAME_API UClass* Z_Construct_UClass_AgamePlaceholdernameGameMode();
	GAMEPLACEHOLDERNAME_API UClass* Z_Construct_UClass_AgamePlaceholdernameGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_gamePlaceholdername();
// End Cross Module References
	void AgamePlaceholdernameGameMode::StaticRegisterNativesAgamePlaceholdernameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AgamePlaceholdernameGameMode);
	UClass* Z_Construct_UClass_AgamePlaceholdernameGameMode_NoRegister()
	{
		return AgamePlaceholdernameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AgamePlaceholdernameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AgamePlaceholdernameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_gamePlaceholdername,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AgamePlaceholdernameGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AgamePlaceholdernameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "gamePlaceholdernameGameMode.h" },
		{ "ModuleRelativePath", "gamePlaceholdernameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AgamePlaceholdernameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AgamePlaceholdernameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AgamePlaceholdernameGameMode_Statics::ClassParams = {
		&AgamePlaceholdernameGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AgamePlaceholdernameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AgamePlaceholdernameGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AgamePlaceholdernameGameMode()
	{
		if (!Z_Registration_Info_UClass_AgamePlaceholdernameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AgamePlaceholdernameGameMode.OuterSingleton, Z_Construct_UClass_AgamePlaceholdernameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AgamePlaceholdernameGameMode.OuterSingleton;
	}
	template<> GAMEPLACEHOLDERNAME_API UClass* StaticClass<AgamePlaceholdernameGameMode>()
	{
		return AgamePlaceholdernameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AgamePlaceholdernameGameMode);
	AgamePlaceholdernameGameMode::~AgamePlaceholdernameGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_jerij_Documents_GitHub_game_gamePlaceholdername_Source_gamePlaceholdername_gamePlaceholdernameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jerij_Documents_GitHub_game_gamePlaceholdername_Source_gamePlaceholdername_gamePlaceholdernameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AgamePlaceholdernameGameMode, AgamePlaceholdernameGameMode::StaticClass, TEXT("AgamePlaceholdernameGameMode"), &Z_Registration_Info_UClass_AgamePlaceholdernameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AgamePlaceholdernameGameMode), 1803546447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jerij_Documents_GitHub_game_gamePlaceholdername_Source_gamePlaceholdername_gamePlaceholdernameGameMode_h_1904407284(TEXT("/Script/gamePlaceholdername"),
		Z_CompiledInDeferFile_FID_Users_jerij_Documents_GitHub_game_gamePlaceholdername_Source_gamePlaceholdername_gamePlaceholdernameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jerij_Documents_GitHub_game_gamePlaceholdername_Source_gamePlaceholdername_gamePlaceholdernameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
