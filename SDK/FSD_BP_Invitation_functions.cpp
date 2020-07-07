// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Invitation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Invitation.BP_Invitation_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_Invitation_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnKeyUp");

	UBP_Invitation_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Invitation.BP_Invitation_C.ReplyInvite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Reply                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Invitation_C::ReplyInvite(int* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.ReplyInvite");

	UBP_Invitation_C_ReplyInvite_Params params;
	params.Reply = Reply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiscordUser*           User_Data                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float*                         TimeElapsed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Invitation_C::Initialize(struct FDiscordUser* User_Data, float* TimeElapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.Initialize");

	UBP_Invitation_C_Initialize_Params params;
	params.User_Data = User_Data;
	params.TimeElapsed = TimeElapsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.OnFail_1E7B4EA94EB1E25E604B80A4114A24A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic**      Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Invitation_C::OnFail_1E7B4EA94EB1E25E604B80A4114A24A4(class UTexture2DDynamic** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnFail_1E7B4EA94EB1E25E604B80A4114A24A4");

	UBP_Invitation_C_OnFail_1E7B4EA94EB1E25E604B80A4114A24A4_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic**      Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Invitation_C::OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4(class UTexture2DDynamic** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4");

	UBP_Invitation_C_OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Invitation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.Construct");

	UBP_Invitation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Invitation_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.Tick");

	UBP_Invitation_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.OnReadyImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_Invitation_C::OnReadyImage(class FString* URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnReadyImage");

	UBP_Invitation_C_OnReadyImage_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_Invitation_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UBP_Invitation_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_Invitation_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UBP_Invitation_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_Invitation_C::BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UBP_Invitation_C_BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.HideUIDelayed
// (BlueprintCallable, BlueprintEvent)

void UBP_Invitation_C::HideUIDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.HideUIDelayed");

	UBP_Invitation_C_HideUIDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.OnAcceptInvite
// (BlueprintCallable, BlueprintEvent)

void UBP_Invitation_C::OnAcceptInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnAcceptInvite");

	UBP_Invitation_C_OnAcceptInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.OnRejectInvite
// (BlueprintCallable, BlueprintEvent)

void UBP_Invitation_C::OnRejectInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnRejectInvite");

	UBP_Invitation_C_OnRejectInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.OnIgnoreInvite
// (BlueprintCallable, BlueprintEvent)

void UBP_Invitation_C::OnIgnoreInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnIgnoreInvite");

	UBP_Invitation_C_OnIgnoreInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.ExecuteUbergraph_BP_Invitation
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Invitation_C::ExecuteUbergraph_BP_Invitation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.ExecuteUbergraph_BP_Invitation");

	UBP_Invitation_C_ExecuteUbergraph_BP_Invitation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Invitation.BP_Invitation_C.ImageReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_Invitation_C::ImageReady__DelegateSignature(class FString* URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.ImageReady__DelegateSignature");

	UBP_Invitation_C_ImageReady__DelegateSignature_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
