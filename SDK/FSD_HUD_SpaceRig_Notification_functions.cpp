// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_SpaceRig_Notification_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SpaceRig_Notification_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.PreConstruct");

	UHUD_SpaceRig_Notification_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_SpaceRig_Notification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.Construct");

	UHUD_SpaceRig_Notification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.OnIntroFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_SpaceRig_Notification_C::OnIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.OnIntroFinished");

	UHUD_SpaceRig_Notification_C_OnIntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.OnOutroFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_SpaceRig_Notification_C::OnOutroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.OnOutroFinished");

	UHUD_SpaceRig_Notification_C_OnOutroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.ExecuteUbergraph_HUD_SpaceRig_Notification
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SpaceRig_Notification_C::ExecuteUbergraph_HUD_SpaceRig_Notification(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_Notification.HUD_SpaceRig_Notification_C.ExecuteUbergraph_HUD_SpaceRig_Notification");

	UHUD_SpaceRig_Notification_C_ExecuteUbergraph_HUD_SpaceRig_Notification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
