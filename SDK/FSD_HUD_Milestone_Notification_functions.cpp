// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Milestone_Notification_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Milestone_Notification_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.PreConstruct");

	UHUD_Milestone_Notification_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Init Widget
// (BlueprintCallable, BlueprintEvent)

void UHUD_Milestone_Notification_C::Init_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Init Widget");

	UHUD_Milestone_Notification_C_Init_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Milestone_Notification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Construct");

	UHUD_Milestone_Notification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMilestoneAsset**        Milestone                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ReachedTier                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Milestone_Notification_C::OnMilestoneReached_Event(class UMilestoneAsset** Milestone, int* ReachedTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached_Event");

	UHUD_Milestone_Notification_C_OnMilestoneReached_Event_Params params;
	params.Milestone = Milestone;
	params.ReachedTier = ReachedTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnIntroFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_Milestone_Notification_C::OnIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnIntroFinished");

	UHUD_Milestone_Notification_C_OnIntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnOutroFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_Milestone_Notification_C::OnOutroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnOutroFinished");

	UHUD_Milestone_Notification_C_OnOutroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.ExecuteUbergraph_HUD_Milestone_Notification
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Milestone_Notification_C::ExecuteUbergraph_HUD_Milestone_Notification(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.ExecuteUbergraph_HUD_Milestone_Notification");

	UHUD_Milestone_Notification_C_ExecuteUbergraph_HUD_Milestone_Notification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHUD_Milestone_Notification_C::OnMilestoneReached__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached__DelegateSignature");

	UHUD_Milestone_Notification_C_OnMilestoneReached__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
