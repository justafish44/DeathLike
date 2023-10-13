// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathLike_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DeathLike;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DeathLike()
	{
		if (!Z_Registration_Info_UPackage__Script_DeathLike.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DeathLike",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC74AAE24,
				0x5652CCDB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DeathLike.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DeathLike.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DeathLike(Z_Construct_UPackage__Script_DeathLike, TEXT("/Script/DeathLike"), Z_Registration_Info_UPackage__Script_DeathLike, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC74AAE24, 0x5652CCDB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
