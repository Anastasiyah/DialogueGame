// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "NPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC() {}
// Cross Module References
	DIALOGUEGAME_API UClass* Z_Construct_UClass_ANPC_NoRegister();
	DIALOGUEGAME_API UClass* Z_Construct_UClass_ANPC();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DialogueGame();
	DIALOGUEGAME_API UFunction* Z_Construct_UFunction_ANPC_DisplayDialogueWidget();
	DIALOGUEGAME_API UFunction* Z_Construct_UFunction_ANPC_OnNPCBoxEndOverlap();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DIALOGUEGAME_API UFunction* Z_Construct_UFunction_ANPC_OnNPCBoxOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ANPC::StaticRegisterNativesANPC()
	{
		UClass* Class = ANPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayDialogueWidget", (Native)&ANPC::execDisplayDialogueWidget },
			{ "OnNPCBoxEndOverlap", (Native)&ANPC::execOnNPCBoxEndOverlap },
			{ "OnNPCBoxOverlap", (Native)&ANPC::execOnNPCBoxOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ANPC_DisplayDialogueWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "NPC.h" },
				{ "ToolTip", "Called to display dialogue widget" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC, "DisplayDialogueWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ANPC_OnNPCBoxEndOverlap()
	{
		struct NPC_eventOnNPCBoxEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NPC_eventOnNPCBoxEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(NPC_eventOnNPCBoxEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NPC_eventOnNPCBoxEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(NPC_eventOnNPCBoxEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComp_MetaData, ARRAY_COUNT(NewProp_OverlappedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "NPC.h" },
				{ "ToolTip", "Called when NPCBoxComponent stops being overlapped" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC, "OnNPCBoxEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(NPC_eventOnNPCBoxEndOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ANPC_OnNPCBoxOverlap()
	{
		struct NPC_eventOnNPCBoxOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(NPC_eventOnNPCBoxOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_SweepResult_MetaData, ARRAY_COUNT(NewProp_SweepResult_MetaData)) };
			auto NewProp_bFromSweep_SetBit = [](void* Obj){ ((NPC_eventOnNPCBoxOverlap_Parms*)Obj)->bFromSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NPC_eventOnNPCBoxOverlap_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFromSweep_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NPC_eventOnNPCBoxOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(NPC_eventOnNPCBoxOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NPC_eventOnNPCBoxOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(NPC_eventOnNPCBoxOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComp_MetaData, ARRAY_COUNT(NewProp_OverlappedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SweepResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFromSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "NPC.h" },
				{ "ToolTip", "Called when NPCBoxComponent is overlapped" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC, "OnNPCBoxOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00440401, sizeof(NPC_eventOnNPCBoxOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANPC_NoRegister()
	{
		return ANPC::StaticClass();
	}
	UClass* Z_Construct_UClass_ANPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_DialogueGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ANPC_DisplayDialogueWidget, "DisplayDialogueWidget" }, // 3033601533
				{ &Z_Construct_UFunction_ANPC_OnNPCBoxEndOverlap, "OnNPCBoxEndOverlap" }, // 1101998440
				{ &Z_Construct_UFunction_ANPC_OnNPCBoxOverlap, "OnNPCBoxOverlap" }, // 4089756350
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "NPC.h" },
				{ "ModuleRelativePath", "NPC.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialogue_UI_MetaData[] = {
				{ "Category", "Widgets" },
				{ "ModuleRelativePath", "NPC.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Dialogue_UI = { UE4CodeGen_Private::EPropertyClass::Class, "Dialogue_UI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000005, 1, nullptr, STRUCT_OFFSET(ANPC, Dialogue_UI), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_Dialogue_UI_MetaData, ARRAY_COUNT(NewProp_Dialogue_UI_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCText_MetaData[] = {
				{ "Category", "NPC" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "NPC.h" },
				{ "ToolTip", "Text displayed above the NPC" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NPCText = { UE4CodeGen_Private::EPropertyClass::Object, "NPCText", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a000d, 1, nullptr, STRUCT_OFFSET(ANPC, NPCText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(NewProp_NPCText_MetaData, ARRAY_COUNT(NewProp_NPCText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCAnimation_MetaData[] = {
				{ "Category", "NPC" },
				{ "ModuleRelativePath", "NPC.h" },
				{ "ToolTip", "Animation applied to NPC's Skeletal Mesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NPCAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "NPCAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020005, 1, nullptr, STRUCT_OFFSET(ANPC, NPCAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(NewProp_NPCAnimation_MetaData, ARRAY_COUNT(NewProp_NPCAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCSkeletalMesh_MetaData[] = {
				{ "Category", "NPC" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "NPC.h" },
				{ "ToolTip", "NPC's Skeletal Mesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NPCSkeletalMesh = { UE4CodeGen_Private::EPropertyClass::Object, "NPCSkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a000d, 1, nullptr, STRUCT_OFFSET(ANPC, NPCSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_NPCSkeletalMesh_MetaData, ARRAY_COUNT(NewProp_NPCSkeletalMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCBoxExtent_MetaData[] = {
				{ "Category", "NPC" },
				{ "ModuleRelativePath", "NPC.h" },
				{ "ToolTip", "Dimensions of NPCBoxComponent" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NPCBoxExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "NPCBoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020005, 1, nullptr, STRUCT_OFFSET(ANPC, NPCBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_NPCBoxExtent_MetaData, ARRAY_COUNT(NewProp_NPCBoxExtent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCBoxComponent_MetaData[] = {
				{ "Category", "NPC" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "NPC.h" },
				{ "ToolTip", "If a player is inside this box component, they will be able to start a dialogue with the NPC" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NPCBoxComponent = { UE4CodeGen_Private::EPropertyClass::Object, "NPCBoxComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a000d, 1, nullptr, STRUCT_OFFSET(ANPC, NPCBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_NPCBoxComponent_MetaData, ARRAY_COUNT(NewProp_NPCBoxComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dialogue_UI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NPCText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NPCAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NPCSkeletalMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NPCBoxExtent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NPCBoxComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANPC>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANPC::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPC, 701252590);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPC(Z_Construct_UClass_ANPC, &ANPC::StaticClass, TEXT("/Script/DialogueGame"), TEXT("ANPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
