// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Backup/PositionReporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePositionReporter() {}
// Cross Module References
	ESCAPEIT_API UClass* Z_Construct_UClass_UPositionReporter_NoRegister();
	ESCAPEIT_API UClass* Z_Construct_UClass_UPositionReporter();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_EscapeIt();
// End Cross Module References
	void UPositionReporter::StaticRegisterNativesUPositionReporter()
	{
	}
	UClass* Z_Construct_UClass_UPositionReporter_NoRegister()
	{
		return UPositionReporter::StaticClass();
	}
	struct Z_Construct_UClass_UPositionReporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPositionReporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeIt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPositionReporter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PositionReporter.h" },
		{ "ModuleRelativePath", "PositionReporter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPositionReporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPositionReporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPositionReporter_Statics::ClassParams = {
		&UPositionReporter::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPositionReporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPositionReporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPositionReporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPositionReporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPositionReporter, 1980361214);
	template<> ESCAPEIT_API UClass* StaticClass<UPositionReporter>()
	{
		return UPositionReporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPositionReporter(Z_Construct_UClass_UPositionReporter, &UPositionReporter::StaticClass, TEXT("/Script/EscapeIt"), TEXT("UPositionReporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPositionReporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
