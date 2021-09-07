// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESCAPEIT_Grabber2_generated_h
#error "Grabber2.generated.h already included, missing '#pragma once' in Grabber2.h"
#endif
#define ESCAPEIT_Grabber2_generated_h

#define EscapeIt_Source_Backup_Grabber2_h_12_DELEGATE \
static inline void FButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& ButtonEvent) \
{ \
	ButtonEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define EscapeIt_Source_Backup_Grabber2_h_17_SPARSE_DATA
#define EscapeIt_Source_Backup_Grabber2_h_17_RPC_WRAPPERS
#define EscapeIt_Source_Backup_Grabber2_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define EscapeIt_Source_Backup_Grabber2_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabber2(); \
	friend struct Z_Construct_UClass_UGrabber2_Statics; \
public: \
	DECLARE_CLASS(UGrabber2, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EscapeIt"), NO_API) \
	DECLARE_SERIALIZER(UGrabber2)


#define EscapeIt_Source_Backup_Grabber2_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGrabber2(); \
	friend struct Z_Construct_UClass_UGrabber2_Statics; \
public: \
	DECLARE_CLASS(UGrabber2, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EscapeIt"), NO_API) \
	DECLARE_SERIALIZER(UGrabber2)


#define EscapeIt_Source_Backup_Grabber2_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabber2(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabber2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber2(UGrabber2&&); \
	NO_API UGrabber2(const UGrabber2&); \
public:


#define EscapeIt_Source_Backup_Grabber2_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber2(UGrabber2&&); \
	NO_API UGrabber2(const UGrabber2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrabber2)


#define EscapeIt_Source_Backup_Grabber2_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Reach() { return STRUCT_OFFSET(UGrabber2, Reach); }


#define EscapeIt_Source_Backup_Grabber2_h_14_PROLOG
#define EscapeIt_Source_Backup_Grabber2_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeIt_Source_Backup_Grabber2_h_17_PRIVATE_PROPERTY_OFFSET \
	EscapeIt_Source_Backup_Grabber2_h_17_SPARSE_DATA \
	EscapeIt_Source_Backup_Grabber2_h_17_RPC_WRAPPERS \
	EscapeIt_Source_Backup_Grabber2_h_17_INCLASS \
	EscapeIt_Source_Backup_Grabber2_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeIt_Source_Backup_Grabber2_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeIt_Source_Backup_Grabber2_h_17_PRIVATE_PROPERTY_OFFSET \
	EscapeIt_Source_Backup_Grabber2_h_17_SPARSE_DATA \
	EscapeIt_Source_Backup_Grabber2_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeIt_Source_Backup_Grabber2_h_17_INCLASS_NO_PURE_DECLS \
	EscapeIt_Source_Backup_Grabber2_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESCAPEIT_API UClass* StaticClass<class UGrabber2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeIt_Source_Backup_Grabber2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
