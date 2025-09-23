// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraUIActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNiagaraUIActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
NIAGARAUIRENDERER_API UClass* Z_Construct_UClass_ANiagaraUIActor();
NIAGARAUIRENDERER_API UClass* Z_Construct_UClass_ANiagaraUIActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NiagaraUIRenderer();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ANiagaraUIActor **********************************************************
void ANiagaraUIActor::StaticRegisterNativesANiagaraUIActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ANiagaraUIActor;
UClass* ANiagaraUIActor::GetPrivateStaticClass()
{
	using TClass = ANiagaraUIActor;
	if (!Z_Registration_Info_UClass_ANiagaraUIActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NiagaraUIActor"),
			Z_Registration_Info_UClass_ANiagaraUIActor.InnerSingleton,
			StaticRegisterNativesANiagaraUIActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ANiagaraUIActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ANiagaraUIActor_NoRegister()
{
	return ANiagaraUIActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ANiagaraUIActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraUIActor.h" },
		{ "ModuleRelativePath", "Public/NiagaraUIActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANiagaraUIActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANiagaraUIActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NiagaraUIRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraUIActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANiagaraUIActor_Statics::ClassParams = {
	&ANiagaraUIActor::StaticClass,
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
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraUIActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANiagaraUIActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANiagaraUIActor()
{
	if (!Z_Registration_Info_UClass_ANiagaraUIActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANiagaraUIActor.OuterSingleton, Z_Construct_UClass_ANiagaraUIActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANiagaraUIActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANiagaraUIActor);
ANiagaraUIActor::~ANiagaraUIActor() {}
// ********** End Class ANiagaraUIActor ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h__Script_NiagaraUIRenderer_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANiagaraUIActor, ANiagaraUIActor::StaticClass, TEXT("ANiagaraUIActor"), &Z_Registration_Info_UClass_ANiagaraUIActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANiagaraUIActor), 1677163852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h__Script_NiagaraUIRenderer_1230963361(TEXT("/Script/NiagaraUIRenderer"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h__Script_NiagaraUIRenderer_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h__Script_NiagaraUIRenderer_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
