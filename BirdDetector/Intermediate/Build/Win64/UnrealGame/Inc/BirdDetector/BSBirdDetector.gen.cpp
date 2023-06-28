// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BirdDetector/Public/BSBirdDetector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBSBirdDetector() {}
// Cross Module References
	BIRDDETECTOR_API UClass* Z_Construct_UClass_UBSBirdDetector_NoRegister();
	BIRDDETECTOR_API UClass* Z_Construct_UClass_UBSBirdDetector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BirdDetector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBSBirdDetector::execScan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Scan();
		P_NATIVE_END;
	}
	void UBSBirdDetector::StaticRegisterNativesUBSBirdDetector()
	{
		UClass* Class = UBSBirdDetector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Scan", &UBSBirdDetector::execScan },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBSBirdDetector_Scan_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBSBirdDetector_Scan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BSBirdDetector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBSBirdDetector_Scan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBSBirdDetector, nullptr, "Scan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBSBirdDetector_Scan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBSBirdDetector_Scan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBSBirdDetector_Scan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBSBirdDetector_Scan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBSBirdDetector);
	UClass* Z_Construct_UClass_UBSBirdDetector_NoRegister()
	{
		return UBSBirdDetector::StaticClass();
	}
	struct Z_Construct_UClass_UBSBirdDetector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScanEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScanEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BirdSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BirdSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugScan_MetaData[];
#endif
		static void NewProp_bDebugScan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugScan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScanRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScanRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBSBirdDetector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BirdDetector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBSBirdDetector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBSBirdDetector_Scan, "Scan" }, // 158871792
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBSBirdDetector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BSBirdDetector.h" },
		{ "ModuleRelativePath", "Public/BSBirdDetector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_ScanEffect_MetaData[] = {
		{ "Category", "BSBirdDetector" },
		{ "ModuleRelativePath", "Public/BSBirdDetector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_ScanEffect = { "ScanEffect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBSBirdDetector, ScanEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_ScanEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_ScanEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_BirdSprite_MetaData[] = {
		{ "Category", "BSBirdDetector" },
		{ "ModuleRelativePath", "Public/BSBirdDetector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_BirdSprite = { "BirdSprite", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBSBirdDetector, BirdSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_BirdSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_BirdSprite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_bDebugScan_MetaData[] = {
		{ "Category", "BSBirdDetector" },
		{ "ModuleRelativePath", "Public/BSBirdDetector.h" },
	};
#endif
	void Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_bDebugScan_SetBit(void* Obj)
	{
		((UBSBirdDetector*)Obj)->bDebugScan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_bDebugScan = { "bDebugScan", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBSBirdDetector), &Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_bDebugScan_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_bDebugScan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_bDebugScan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_ScanRadius_MetaData[] = {
		{ "Category", "BSBirdDetector" },
		{ "ModuleRelativePath", "Public/BSBirdDetector.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_ScanRadius = { "ScanRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBSBirdDetector, ScanRadius), METADATA_PARAMS(Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_ScanRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_ScanRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBSBirdDetector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_ScanEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_BirdSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_bDebugScan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBSBirdDetector_Statics::NewProp_ScanRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBSBirdDetector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBSBirdDetector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBSBirdDetector_Statics::ClassParams = {
		&UBSBirdDetector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBSBirdDetector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdDetector_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBSBirdDetector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdDetector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBSBirdDetector()
	{
		if (!Z_Registration_Info_UClass_UBSBirdDetector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBSBirdDetector.OuterSingleton, Z_Construct_UClass_UBSBirdDetector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBSBirdDetector.OuterSingleton;
	}
	template<> BIRDDETECTOR_API UClass* StaticClass<UBSBirdDetector>()
	{
		return UBSBirdDetector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBSBirdDetector);
	struct Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdDetector_Source_BirdDetector_Public_BSBirdDetector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdDetector_Source_BirdDetector_Public_BSBirdDetector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBSBirdDetector, UBSBirdDetector::StaticClass, TEXT("UBSBirdDetector"), &Z_Registration_Info_UClass_UBSBirdDetector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBSBirdDetector), 2950775667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdDetector_Source_BirdDetector_Public_BSBirdDetector_h_2830153757(TEXT("/Script/BirdDetector"),
		Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdDetector_Source_BirdDetector_Public_BSBirdDetector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdDetector_Source_BirdDetector_Public_BSBirdDetector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
