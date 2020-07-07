// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_RewardFrame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RewardFrame.BP_RewardFrame_C.AddEventProgress
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_RewardFrame_C::AddEventProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.AddEventProgress");

	ABP_RewardFrame_C_AddEventProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_RewardFrame.BP_RewardFrame_C.AdvanceOneObjective
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_RewardFrame_C::AdvanceOneObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.AdvanceOneObjective");

	ABP_RewardFrame_C_AdvanceOneObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_RewardFrame.BP_RewardFrame_C.SetupEvent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameEvent**             GameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_RewardFrame_C::SetupEvent(class AGameEvent** GameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.SetupEvent");

	ABP_RewardFrame_C_SetupEvent_Params params;
	params.GameEvent = GameEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_RewardFrame.BP_RewardFrame_C.GetLocalPlayerDispenser
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AEventRewardDispenser*   OutDispenser                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardFrame_C::GetLocalPlayerDispenser(class AEventRewardDispenser** OutDispenser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.GetLocalPlayerDispenser");

	ABP_RewardFrame_C_GetLocalPlayerDispenser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDispenser != nullptr)
		*OutDispenser = params.OutDispenser;
}


// Function BP_RewardFrame.BP_RewardFrame_C.AllDispensersFinished
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsFinished                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardFrame_C::AllDispensersFinished(bool* IsFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.AllDispensersFinished");

	ABP_RewardFrame_C_AllDispensersFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinished != nullptr)
		*IsFinished = params.IsFinished;
}


// Function BP_RewardFrame.BP_RewardFrame_C.SetupDispenser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEventRewardDispenser**  Dispenser                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardFrame_C::SetupDispenser(class AEventRewardDispenser** Dispenser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.SetupDispenser");

	ABP_RewardFrame_C_SetupDispenser_Params params;
	params.Dispenser = Dispenser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.GetRandomPlayer
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerCharacter*        Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardFrame_C::GetRandomPlayer(class APlayerCharacter** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.GetRandomPlayer");

	ABP_RewardFrame_C_GetRandomPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_RewardFrame.BP_RewardFrame_C.UpdateLights
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RewardFrame_C::UpdateLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.UpdateLights");

	ABP_RewardFrame_C_UpdateLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.AlignDispensers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_RewardFrame_C::AlignDispensers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.AlignDispensers");

	ABP_RewardFrame_C_AlignDispensers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.StartEventUI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RewardFrame_C::StartEventUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.StartEventUI");

	ABP_RewardFrame_C_StartEventUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RewardFrame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.UserConstructionScript");

	ABP_RewardFrame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.AttentionLightTimeLine__FinishedFunc
// (BlueprintEvent)

void ABP_RewardFrame_C::AttentionLightTimeLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.AttentionLightTimeLine__FinishedFunc");

	ABP_RewardFrame_C_AttentionLightTimeLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.AttentionLightTimeLine__UpdateFunc
// (BlueprintEvent)

void ABP_RewardFrame_C::AttentionLightTimeLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.AttentionLightTimeLine__UpdateFunc");

	ABP_RewardFrame_C_AttentionLightTimeLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.OnEventOpened
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RewardFrame_C::OnEventOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.OnEventOpened");

	ABP_RewardFrame_C_OnEventOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.OnEventProgress
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardFrame_C::OnEventProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.OnEventProgress");

	ABP_RewardFrame_C_OnEventProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RewardFrame_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.ReceiveBeginPlay");

	ABP_RewardFrame_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.BndEvt__EventUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardFrame_C::BndEvt__EventUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.BndEvt__EventUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_RewardFrame_C_BndEvt__EventUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.OnEventFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          eventSuccess                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardFrame_C::OnEventFinished(bool* eventSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.OnEventFinished");

	ABP_RewardFrame_C_OnEventFinished_Params params;
	params.eventSuccess = eventSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.OnEventTriggered
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RewardFrame_C::OnEventTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.OnEventTriggered");

	ABP_RewardFrame_C_OnEventTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.BndEvt__EventUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardFrame_C::BndEvt__EventUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.BndEvt__EventUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature");

	ABP_RewardFrame_C_BndEvt__EventUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.Toggle Attention Light
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          inVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardFrame_C::Toggle_Attention_Light(bool* inVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.Toggle Attention Light");

	ABP_RewardFrame_C_Toggle_Attention_Light_Params params;
	params.inVisible = inVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.Recall Key
// (BlueprintCallable, BlueprintEvent)

void ABP_RewardFrame_C::Recall_Key()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.Recall Key");

	ABP_RewardFrame_C_Recall_Key_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_RewardFrame_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_RewardFrame_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.EnableGravity
// (BlueprintCallable, BlueprintEvent)

void ABP_RewardFrame_C::EnableGravity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.EnableGravity");

	ABP_RewardFrame_C_EnableGravity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardFrame.BP_RewardFrame_C.ExecuteUbergraph_BP_RewardFrame
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardFrame_C::ExecuteUbergraph_BP_RewardFrame(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardFrame.BP_RewardFrame_C.ExecuteUbergraph_BP_RewardFrame");

	ABP_RewardFrame_C_ExecuteUbergraph_BP_RewardFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
