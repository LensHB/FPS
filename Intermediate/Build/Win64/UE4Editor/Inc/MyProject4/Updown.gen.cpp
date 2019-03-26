// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject4/Updown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdown() {}
// Cross Module References
	MYPROJECT4_API UClass* Z_Construct_UClass_UUpdown_NoRegister();
	MYPROJECT4_API UClass* Z_Construct_UClass_UUpdown();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MyProject4();
// End Cross Module References
	void UUpdown::StaticRegisterNativesUUpdown()
	{
	}
	UClass* Z_Construct_UClass_UUpdown_NoRegister()
	{
		return UUpdown::StaticClass();
	}
	struct Z_Construct_UClass_UUpdown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpdown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdown_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Updown.h" },
		{ "ModuleRelativePath", "Updown.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpdown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUpdown_Statics::ClassParams = {
		&UUpdown::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UUpdown_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUpdown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpdown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUpdown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUpdown, 2840214055);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUpdown(Z_Construct_UClass_UUpdown, &UUpdown::StaticClass, TEXT("/Script/MyProject4"), TEXT("UUpdown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
