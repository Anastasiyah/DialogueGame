// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGUEGAME_DialogueGameCharacter_generated_h
#error "DialogueGameCharacter.generated.h already included, missing '#pragma once' in DialogueGameCharacter.h"
#endif
#define DIALOGUEGAME_DialogueGameCharacter_generated_h

#define DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_RPC_WRAPPERS
#define DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADialogueGameCharacter(); \
	friend DIALOGUEGAME_API class UClass* Z_Construct_UClass_ADialogueGameCharacter(); \
public: \
	DECLARE_CLASS(ADialogueGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DialogueGame"), NO_API) \
	DECLARE_SERIALIZER(ADialogueGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADialogueGameCharacter(); \
	friend DIALOGUEGAME_API class UClass* Z_Construct_UClass_ADialogueGameCharacter(); \
public: \
	DECLARE_CLASS(ADialogueGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DialogueGame"), NO_API) \
	DECLARE_SERIALIZER(ADialogueGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADialogueGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADialogueGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADialogueGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADialogueGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADialogueGameCharacter(ADialogueGameCharacter&&); \
	NO_API ADialogueGameCharacter(const ADialogueGameCharacter&); \
public:


#define DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADialogueGameCharacter(ADialogueGameCharacter&&); \
	NO_API ADialogueGameCharacter(const ADialogueGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADialogueGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADialogueGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADialogueGameCharacter)


#define DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ADialogueGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ADialogueGameCharacter, FollowCamera); }


#define DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_9_PROLOG
#define DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_RPC_WRAPPERS \
	DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_INCLASS \
	DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	DialogueGame_Source_DialogueGame_DialogueGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueGame_Source_DialogueGame_DialogueGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
