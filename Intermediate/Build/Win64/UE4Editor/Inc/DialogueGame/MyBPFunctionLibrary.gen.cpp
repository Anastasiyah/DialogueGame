// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyBPFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBPFunctionLibrary() {}
// Cross Module References
	DIALOGUEGAME_API UClass* Z_Construct_UClass_UMyBPFunctionLibrary_NoRegister();
	DIALOGUEGAME_API UClass* Z_Construct_UClass_UMyBPFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DialogueGame();
	DIALOGUEGAME_API UFunction* Z_Construct_UFunction_UMyBPFunctionLibrary_ExitDialogue();
// End Cross Module References
	void UMyBPFunctionLibrary::StaticRegisterNativesUMyBPFunctionLibrary()
	{
		UClass* Class = UMyBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExitDialogue", (Native)&UMyBPFunctionLibrary::execExitDialogue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMyBPFunctionLibrary_ExitDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "My Functions" },
				{ "ModuleRelativePath", "MyBPFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBPFunctionLibrary, "ExitDialogue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyBPFunctionLibrary_NoRegister()
	{
		return UMyBPFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyBPFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_DialogueGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMyBPFunctionLibrary_ExitDialogue, "ExitDialogue" }, // 2459864251
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MyBPFunctionLibrary.h" },
				{ "ModuleRelativePath", "MyBPFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMyBPFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMyBPFunctionLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyBPFunctionLibrary, 2214411913);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyBPFunctionLibrary(Z_Construct_UClass_UMyBPFunctionLibrary, &UMyBPFunctionLibrary::StaticClass, TEXT("/Script/DialogueGame"), TEXT("UMyBPFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBPFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
