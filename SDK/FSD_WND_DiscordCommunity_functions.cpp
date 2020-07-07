// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_DiscordCommunity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_DiscordCommunity.WND_DiscordCommunity_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWND_DiscordCommunity_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_DiscordCommunity.WND_DiscordCommunity_C.OnKeyUp");

	UWND_DiscordCommunity_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_DiscordCommunity.WND_DiscordCommunity_C.Close Window
// (BlueprintCallable, BlueprintEvent)

void UWND_DiscordCommunity_C::Close_Window()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_DiscordCommunity.WND_DiscordCommunity_C.Close Window");

	UWND_DiscordCommunity_C_Close_Window_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_DiscordCommunity.WND_DiscordCommunity_C.OnShown
// (Event, Public, BlueprintEvent)

void UWND_DiscordCommunity_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_DiscordCommunity.WND_DiscordCommunity_C.OnShown");

	UWND_DiscordCommunity_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_DiscordCommunity.WND_DiscordCommunity_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_DiscordCommunity_C::BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_DiscordCommunity.WND_DiscordCommunity_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWND_DiscordCommunity_C_BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_DiscordCommunity.WND_DiscordCommunity_C.BndEvt__Basic_ButtonScalable_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_DiscordCommunity_C::BndEvt__Basic_ButtonScalable_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_DiscordCommunity.WND_DiscordCommunity_C.BndEvt__Basic_ButtonScalable_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWND_DiscordCommunity_C_BndEvt__Basic_ButtonScalable_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_DiscordCommunity.WND_DiscordCommunity_C.BndEvt__Basic_ButtonScalable_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_DiscordCommunity_C::BndEvt__Basic_ButtonScalable_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_DiscordCommunity.WND_DiscordCommunity_C.BndEvt__Basic_ButtonScalable_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWND_DiscordCommunity_C_BndEvt__Basic_ButtonScalable_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_DiscordCommunity.WND_DiscordCommunity_C.ExecuteUbergraph_WND_DiscordCommunity
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_DiscordCommunity_C::ExecuteUbergraph_WND_DiscordCommunity(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_DiscordCommunity.WND_DiscordCommunity_C.ExecuteUbergraph_WND_DiscordCommunity");

	UWND_DiscordCommunity_C_ExecuteUbergraph_WND_DiscordCommunity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
