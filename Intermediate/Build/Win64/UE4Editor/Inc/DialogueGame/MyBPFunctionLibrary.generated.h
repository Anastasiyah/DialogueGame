// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGUEGAME_MyBPFunctionLibrary_generated_h
#error "MyBPFunctionLibrary.generated.h already included, missing '#pragma once' in MyBPFunctionLibrary.h"
#endif
#define DIALOGUEGAME_MyBPFunctionLibrary_generated_h

#define DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExitDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyBPFunctionLibrary::ExitDialogue(); \
		P_NATIVE_END; \
	}


#define DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExitDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyBPFunctionLibrary::ExitDialogue(); \
		P_NATIVE_END; \
	}


#define DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyBPFunctionLibrary(); \
	friend DIALOGUEGAME_API class UClass* Z_Construct_UClass_UMyBPFunctionLibrary(); \
public: \
	DECLARE_CLASS(UMyBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DialogueGame"), NO_API) \
	DECLARE_SERIALIZER(UMyBPFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyBPFunctionLibrary(); \
	friend DIALOGUEGAME_API class UClass* Z_Construct_UClass_UMyBPFunctionLibrary(); \
public: \
	DECLARE_CLASS(UMyBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DialogueGame"), NO_API) \
	DECLARE_SERIALIZER(UMyBPFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBPFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBPFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyBPFunctionLibrary(UMyBPFunctionLibrary&&); \
	NO_API UMyBPFunctionLibrary(const UMyBPFunctionLibrary&); \
public:


#define DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyBPFunctionLibrary(UMyBPFunctionLibrary&&); \
	NO_API UMyBPFunctionLibrary(const UMyBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBPFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBPFunctionLibrary)


#define DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_12_PROLOG
#define DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_RPC_WRAPPERS \
	DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_INCLASS \
	DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueGame_Source_DialogueGame_MyBPFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
