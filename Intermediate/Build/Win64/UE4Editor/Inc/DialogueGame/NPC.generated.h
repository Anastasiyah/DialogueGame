// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DIALOGUEGAME_NPC_generated_h
#error "NPC.generated.h already included, missing '#pragma once' in NPC.h"
#endif
#define DIALOGUEGAME_NPC_generated_h

#define DialogueGame_Source_DialogueGame_NPC_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnNPCBoxEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnNPCBoxEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNPCBoxOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnNPCBoxOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisplayDialogueWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DisplayDialogueWidget(); \
		P_NATIVE_END; \
	}


#define DialogueGame_Source_DialogueGame_NPC_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNPCBoxEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnNPCBoxEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNPCBoxOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnNPCBoxOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisplayDialogueWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DisplayDialogueWidget(); \
		P_NATIVE_END; \
	}


#define DialogueGame_Source_DialogueGame_NPC_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend DIALOGUEGAME_API class UClass* Z_Construct_UClass_ANPC(); \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DialogueGame"), NO_API) \
	DECLARE_SERIALIZER(ANPC) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DialogueGame_Source_DialogueGame_NPC_h_21_INCLASS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend DIALOGUEGAME_API class UClass* Z_Construct_UClass_ANPC(); \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DialogueGame"), NO_API) \
	DECLARE_SERIALIZER(ANPC) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DialogueGame_Source_DialogueGame_NPC_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public:


#define DialogueGame_Source_DialogueGame_NPC_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPC)


#define DialogueGame_Source_DialogueGame_NPC_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NPCBoxComponent() { return STRUCT_OFFSET(ANPC, NPCBoxComponent); } \
	FORCEINLINE static uint32 __PPO__NPCBoxExtent() { return STRUCT_OFFSET(ANPC, NPCBoxExtent); } \
	FORCEINLINE static uint32 __PPO__NPCSkeletalMesh() { return STRUCT_OFFSET(ANPC, NPCSkeletalMesh); } \
	FORCEINLINE static uint32 __PPO__NPCAnimation() { return STRUCT_OFFSET(ANPC, NPCAnimation); } \
	FORCEINLINE static uint32 __PPO__NPCText() { return STRUCT_OFFSET(ANPC, NPCText); } \
	FORCEINLINE static uint32 __PPO__Dialogue_UI() { return STRUCT_OFFSET(ANPC, Dialogue_UI); }


#define DialogueGame_Source_DialogueGame_NPC_h_18_PROLOG
#define DialogueGame_Source_DialogueGame_NPC_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueGame_Source_DialogueGame_NPC_h_21_PRIVATE_PROPERTY_OFFSET \
	DialogueGame_Source_DialogueGame_NPC_h_21_RPC_WRAPPERS \
	DialogueGame_Source_DialogueGame_NPC_h_21_INCLASS \
	DialogueGame_Source_DialogueGame_NPC_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DialogueGame_Source_DialogueGame_NPC_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DialogueGame_Source_DialogueGame_NPC_h_21_PRIVATE_PROPERTY_OFFSET \
	DialogueGame_Source_DialogueGame_NPC_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DialogueGame_Source_DialogueGame_NPC_h_21_INCLASS_NO_PURE_DECLS \
	DialogueGame_Source_DialogueGame_NPC_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DialogueGame_Source_DialogueGame_NPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
