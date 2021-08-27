// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Backup/Grabber2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabber2() {}
// Cross Module References
	ESCAPEIT_API UClass* Z_Construct_UClass_UGrabber2_NoRegister();
	ESCAPEIT_API UClass* Z_Construct_UClass_UGrabber2();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_EscapeIt();
// End Cross Module References
	void UGrabber2::StaticRegisterNativesUGrabber2()
	{
	}
	UClass* Z_Construct_UClass_UGrabber2_NoRegister()
	{
		return UGrabber2::StaticClass();
	}
	struct Z_Construct_UClass_UGrabber2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabber2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeIt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber2_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Grabber2.h" },
		{ "ModuleRelativePath", "Grabber2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabber2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabber2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabber2_Statics::ClassParams = {
		&UGrabber2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGrabber2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabber2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabber2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabber2, 2569627043);
	template<> ESCAPEIT_API UClass* StaticClass<UGrabber2>()
	{
		return UGrabber2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabber2(Z_Construct_UClass_UGrabber2, &UGrabber2::StaticClass, TEXT("/Script/EscapeIt"), TEXT("UGrabber2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabber2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
