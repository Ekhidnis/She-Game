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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Reach;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber2_Statics::NewProp_Reach_MetaData[] = {
		{ "Category", "Grabber2" },
		{ "Comment", "// player's reach in cm\n" },
		{ "ModuleRelativePath", "Grabber2.h" },
		{ "ToolTip", "player's reach in cm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber2_Statics::NewProp_Reach = { "Reach", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabber2, Reach), METADATA_PARAMS(Z_Construct_UClass_UGrabber2_Statics::NewProp_Reach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber2_Statics::NewProp_Reach_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabber2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber2_Statics::NewProp_Reach,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabber2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabber2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabber2_Statics::ClassParams = {
		&UGrabber2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGrabber2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber2_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UGrabber2, 3841858244);
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
