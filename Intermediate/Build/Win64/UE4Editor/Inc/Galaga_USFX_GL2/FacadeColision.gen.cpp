// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_GL2/FacadeColision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacadeColision() {}
// Cross Module References
	GALAGA_USFX_GL2_API UClass* Z_Construct_UClass_AFacadeColision_NoRegister();
	GALAGA_USFX_GL2_API UClass* Z_Construct_UClass_AFacadeColision();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_GL2();
// End Cross Module References
	void AFacadeColision::StaticRegisterNativesAFacadeColision()
	{
	}
	UClass* Z_Construct_UClass_AFacadeColision_NoRegister()
	{
		return AFacadeColision::StaticClass();
	}
	struct Z_Construct_UClass_AFacadeColision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacadeColision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_GL2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacadeColision_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FacadeColision.h" },
		{ "ModuleRelativePath", "FacadeColision.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacadeColision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacadeColision>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacadeColision_Statics::ClassParams = {
		&AFacadeColision::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFacadeColision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeColision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacadeColision()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacadeColision_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacadeColision, 2605052139);
	template<> GALAGA_USFX_GL2_API UClass* StaticClass<AFacadeColision>()
	{
		return AFacadeColision::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacadeColision(Z_Construct_UClass_AFacadeColision, &AFacadeColision::StaticClass, TEXT("/Script/Galaga_USFX_GL2"), TEXT("AFacadeColision"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacadeColision);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
