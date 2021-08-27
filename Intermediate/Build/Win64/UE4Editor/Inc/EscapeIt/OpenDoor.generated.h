// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESCAPEIT_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define ESCAPEIT_OpenDoor_generated_h

#define EscapeIt_Source_EscapeIt_OpenDoor_h_10_DELEGATE \
static inline void FOnOpenRequest_DelegateWrapper(const FMulticastScriptDelegate& OnOpenRequest) \
{ \
	OnOpenRequest.ProcessMulticastDelegate<UObject>(NULL); \
}


#define EscapeIt_Source_EscapeIt_OpenDoor_h_15_SPARSE_DATA
#define EscapeIt_Source_EscapeIt_OpenDoor_h_15_RPC_WRAPPERS
#define EscapeIt_Source_EscapeIt_OpenDoor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define EscapeIt_Source_EscapeIt_OpenDoor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EscapeIt"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define EscapeIt_Source_EscapeIt_OpenDoor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EscapeIt"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define EscapeIt_Source_EscapeIt_OpenDoor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define EscapeIt_Source_EscapeIt_OpenDoor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define EscapeIt_Source_EscapeIt_OpenDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OpenAngle() { return STRUCT_OFFSET(UOpenDoor, OpenAngle); } \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(UOpenDoor, PressurePlate); } \
	FORCEINLINE static uint32 __PPO__DoorCloseDelay() { return STRUCT_OFFSET(UOpenDoor, DoorCloseDelay); } \
	FORCEINLINE static uint32 __PPO__MassToTrigger() { return STRUCT_OFFSET(UOpenDoor, MassToTrigger); }


#define EscapeIt_Source_EscapeIt_OpenDoor_h_12_PROLOG
#define EscapeIt_Source_EscapeIt_OpenDoor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeIt_Source_EscapeIt_OpenDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	EscapeIt_Source_EscapeIt_OpenDoor_h_15_SPARSE_DATA \
	EscapeIt_Source_EscapeIt_OpenDoor_h_15_RPC_WRAPPERS \
	EscapeIt_Source_EscapeIt_OpenDoor_h_15_INCLASS \
	EscapeIt_Source_EscapeIt_OpenDoor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeIt_Source_EscapeIt_OpenDoor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeIt_Source_EscapeIt_OpenDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	EscapeIt_Source_EscapeIt_OpenDoor_h_15_SPARSE_DATA \
	EscapeIt_Source_EscapeIt_OpenDoor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeIt_Source_EscapeIt_OpenDoor_h_15_INCLASS_NO_PURE_DECLS \
	EscapeIt_Source_EscapeIt_OpenDoor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESCAPEIT_API UClass* StaticClass<class UOpenDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeIt_Source_EscapeIt_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
