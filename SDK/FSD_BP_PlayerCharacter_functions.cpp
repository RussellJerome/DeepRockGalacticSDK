// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerCharacter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GotoNextSelfiePoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ForceExitSelfieMode            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GotoNextSelfiePoint(bool* ForceExitSelfieMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GotoNextSelfiePoint");

	ABP_PlayerCharacter_C_GotoNextSelfiePoint_Params params;
	params.ForceExitSelfieMode = ForceExitSelfieMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetActiveSelfiePoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SelfiePoint_C**      InSelfiePoint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PlayerCharacter_C::SetActiveSelfiePoint(class UBP_SelfiePoint_C** InSelfiePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetActiveSelfiePoint");

	ABP_PlayerCharacter_C_SetActiveSelfiePoint_Params params;
	params.InSelfiePoint = InSelfiePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DamageCausesReaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDamageClass**           DamageClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerCharacter_C::DamageCausesReaction(class UDamageClass** DamageClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DamageCausesReaction");

	ABP_PlayerCharacter_C_DamageCausesReaction_Params params;
	params.DamageClass = DamageClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraAttachPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* ABP_PlayerCharacter_C::GetDownCameraAttachPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraAttachPoint");

	ABP_PlayerCharacter_C_GetDownCameraAttachPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraRotationPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* ABP_PlayerCharacter_C::GetDownCameraRotationPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraRotationPoint");

	ABP_PlayerCharacter_C_GetDownCameraRotationPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChromaEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFSDChromaEffect*              effect                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ChromaEffect(EFSDChromaEffect* effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChromaEffect");

	ABP_PlayerCharacter_C_ChromaEffect_Params params;
	params.effect = effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterAudioThrottled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase**             Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDialogDataAsset**       Shout                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::CharacterAudioThrottled(class USoundBase** Sound, class UDialogDataAsset** Shout)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterAudioThrottled");

	ABP_PlayerCharacter_C_CharacterAudioThrottled_Params params;
	params.Sound = Sound;
	params.Shout = Shout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHeadLight
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::UpdateHeadLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHeadLight");

	ABP_PlayerCharacter_C_UpdateHeadLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::ShieldRegenTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__FinishedFunc");

	ABP_PlayerCharacter_C_ShieldRegenTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::ShieldRegenTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__UpdateFunc");

	ABP_PlayerCharacter_C_ShieldRegenTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::Emergency_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__FinishedFunc");

	ABP_PlayerCharacter_C_Emergency_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::Emergency_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__UpdateFunc");

	ABP_PlayerCharacter_C_Emergency_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_P_K2Node_InputKeyEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_P_K2Node_InputKeyEvent_17(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_P_K2Node_InputKeyEvent_17");

	ABP_PlayerCharacter_C_InpActEvt_P_K2Node_InputKeyEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_16(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_16");

	ABP_PlayerCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_15(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_15");

	ABP_PlayerCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_14(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_14");

	ABP_PlayerCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_13(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_13");

	ABP_PlayerCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_PageDown_K2Node_InputKeyEvent_12(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_12");

	ABP_PlayerCharacter_C_InpActEvt_PageDown_K2Node_InputKeyEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_PageDown_K2Node_InputKeyEvent_11(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_11");

	ABP_PlayerCharacter_C_InpActEvt_PageDown_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_PageUp_K2Node_InputKeyEvent_10(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_10");

	ABP_PlayerCharacter_C_InpActEvt_PageUp_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_PageUp_K2Node_InputKeyEvent_9(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_9");

	ABP_PlayerCharacter_C_InpActEvt_PageUp_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Home_K2Node_InputKeyEvent_8(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_8");

	ABP_PlayerCharacter_C_InpActEvt_Home_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Home_K2Node_InputKeyEvent_7(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_7");

	ABP_PlayerCharacter_C_InpActEvt_Home_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_End_K2Node_InputKeyEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_6");

	ABP_PlayerCharacter_C_InpActEvt_End_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_End_K2Node_InputKeyEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_5");

	ABP_PlayerCharacter_C_InpActEvt_End_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Insert_K2Node_InputKeyEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_4");

	ABP_PlayerCharacter_C_InpActEvt_Insert_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Insert_K2Node_InputKeyEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_3");

	ABP_PlayerCharacter_C_InpActEvt_Insert_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Delete_K2Node_InputKeyEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_2");

	ABP_PlayerCharacter_C_InpActEvt_Delete_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Delete_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_1");

	ABP_PlayerCharacter_C_InpActEvt_Delete_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnControllerReady
// (Event, Protected, BlueprintEvent)

void ABP_PlayerCharacter_C::BP_OnControllerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnControllerReady");

	ABP_PlayerCharacter_C_BP_OnControllerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay");

	ABP_PlayerCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature(float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature");

	ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopRegenAudio
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::StopRegenAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopRegenAudio");

	ABP_PlayerCharacter_C_StopRegenAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnUpdateMeshes
// (Event, Protected, BlueprintEvent)

void ABP_PlayerCharacter_C::BP_OnUpdateMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnUpdateMeshes");

	ABP_PlayerCharacter_C_BP_OnUpdateMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterState Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterState*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::CharacterState_Changed(ECharacterState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterState Changed");

	ABP_PlayerCharacter_C_CharacterState_Changed_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature");

	ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature");

	ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Init Selfie Cam
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Init_Selfie_Cam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Init Selfie Cam");

	ABP_PlayerCharacter_C_Init_Selfie_Cam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDustVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetDustVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDustVisible");

	ABP_PlayerCharacter_C_SetDustVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveOnHeadlightOn
// (Event, Protected, BlueprintEvent)

void ABP_PlayerCharacter_C::ReceiveOnHeadlightOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveOnHeadlightOn");

	ABP_PlayerCharacter_C_ReceiveOnHeadlightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetSaveGameIDInEditor
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ResetSaveGameIDInEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetSaveGameIDInEditor");

	ABP_PlayerCharacter_C_ResetSaveGameIDInEditor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Temporary Buff Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTemporaryBuff**         buff                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerCharacter**       AffectedPlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::On_Temporary_Buff_Changed(class UTemporaryBuff** buff, class APlayerCharacter** AffectedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Temporary Buff Changed");

	ABP_PlayerCharacter_C_On_Temporary_Buff_Changed_Params params;
	params.buff = buff;
	params.AffectedPlayer = AffectedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Request change in gravity scale
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         New_Gravity_Scale              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Request_change_in_gravity_scale(float* New_Gravity_Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Request change in gravity scale");

	ABP_PlayerCharacter_C_Request_change_in_gravity_scale_Params params;
	params.New_Gravity_Scale = New_Gravity_Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerClientSpawnConfettii
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::MixerClientSpawnConfettii(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerClientSpawnConfettii");

	ABP_PlayerCharacter_C_MixerClientSpawnConfettii_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerServerSpawnConfettii
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::MixerServerSpawnConfettii(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerServerSpawnConfettii");

	ABP_PlayerCharacter_C_MixerServerSpawnConfettii_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerSpawnConfetti
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::MixerSpawnConfetti(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerSpawnConfetti");

	ABP_PlayerCharacter_C_MixerSpawnConfetti_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareForEndScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::PrepareForEndScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareForEndScreen");

	ABP_PlayerCharacter_C_PrepareForEndScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageClass**           DamageClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          anyHealthLost                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float* Damage, class UDamageClass** DamageClass, class AActor** DamageCauser, bool* anyHealthLost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature");

	ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature_Params params;
	params.Damage = Damage;
	params.DamageClass = DamageClass;
	params.DamageCauser = DamageCauser;
	params.anyHealthLost = anyHealthLost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageClass**           DamageClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          anyHealthLost                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float* Damage, class UDamageClass** DamageClass, class AActor** DamageCauser, bool* anyHealthLost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature");

	ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature_Params params;
	params.Damage = Damage;
	params.DamageClass = DamageClass;
	params.DamageCauser = DamageCauser;
	params.anyHealthLost = anyHealthLost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Activate Temporary buff on server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTemporaryBuff**         buff                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerCharacter**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Activate_Temporary_buff_on_server(class UTemporaryBuff** buff, class APlayerCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Activate Temporary buff on server");

	ABP_PlayerCharacter_C_Activate_Temporary_buff_on_server_Params params;
	params.buff = buff;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Receive_ShowFieldMedicInstantReviveEffects
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_C::Receive_ShowFieldMedicInstantReviveEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Receive_ShowFieldMedicInstantReviveEffects");

	ABP_PlayerCharacter_C_Receive_ShowFieldMedicInstantReviveEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1");

	ABP_PlayerCharacter_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2");

	ABP_PlayerCharacter_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InDelta                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SelfieZoom(float* InDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieZoom");

	ABP_PlayerCharacter_C_SelfieZoom_Params params;
	params.InDelta = InDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieZoom
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::TickSelfieZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieZoom");

	ABP_PlayerCharacter_C_TickSelfieZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InDirection                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SelfieMoveUp(float* InDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveUp");

	ABP_PlayerCharacter_C_SelfieMoveUp_Params params;
	params.InDirection = InDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveUp
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::TickSelfieMoveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveUp");

	ABP_PlayerCharacter_C_TickSelfieMoveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InDirection                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SelfieMoveRight(float* InDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveRight");

	ABP_PlayerCharacter_C_SelfieMoveRight_Params params;
	params.InDirection = InDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveRight
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::TickSelfieMoveRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveRight");

	ABP_PlayerCharacter_C_TickSelfieMoveRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ExecuteUbergraph_BP_PlayerCharacter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter");

	ABP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
