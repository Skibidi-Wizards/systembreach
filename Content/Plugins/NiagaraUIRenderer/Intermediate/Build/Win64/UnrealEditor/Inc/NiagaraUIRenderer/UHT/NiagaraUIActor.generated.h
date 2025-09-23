// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraUIActor.h"

#ifdef NIAGARAUIRENDERER_NiagaraUIActor_generated_h
#error "NiagaraUIActor.generated.h already included, missing '#pragma once' in NiagaraUIActor.h"
#endif
#define NIAGARAUIRENDERER_NiagaraUIActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANiagaraUIActor **********************************************************
NIAGARAUIRENDERER_API UClass* Z_Construct_UClass_ANiagaraUIActor_NoRegister();

#define FID_HostProject_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANiagaraUIActor(); \
	friend struct Z_Construct_UClass_ANiagaraUIActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAUIRENDERER_API UClass* Z_Construct_UClass_ANiagaraUIActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ANiagaraUIActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraUIRenderer"), Z_Construct_UClass_ANiagaraUIActor_NoRegister) \
	DECLARE_SERIALIZER(ANiagaraUIActor)


#define FID_HostProject_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANiagaraUIActor(ANiagaraUIActor&&) = delete; \
	ANiagaraUIActor(const ANiagaraUIActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANiagaraUIActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraUIActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANiagaraUIActor) \
	NO_API virtual ~ANiagaraUIActor();


#define FID_HostProject_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h_12_PROLOG
#define FID_HostProject_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANiagaraUIActor;

// ********** End Class ANiagaraUIActor ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
