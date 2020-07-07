// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perks_View_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perks_View.UI_Perks_View_C.HandleMouseEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          InUp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutHandled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_View_C::HandleMouseEvent(struct FPointerEvent* InMouseEvent, bool* InUp, bool* OutHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.HandleMouseEvent");

	UUI_Perks_View_C_HandleMouseEvent_Params params;
	params.InMouseEvent = InMouseEvent;
	params.InUp = InUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHandled != nullptr)
		*OutHandled = params.OutHandled;
}


// Function UI_Perks_View.UI_Perks_View_C.HandleKeyEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          InUp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutHandled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_View_C::HandleKeyEvent(struct FKeyEvent* InKeyEvent, bool* InUp, bool* OutHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.HandleKeyEvent");

	UUI_Perks_View_C_HandleKeyEvent_Params params;
	params.InKeyEvent = InKeyEvent;
	params.InUp = InUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHandled != nullptr)
		*OutHandled = params.OutHandled;
}


// Function UI_Perks_View.UI_Perks_View_C.SelectPerkWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C**       PerkWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Perks_View_C::SelectPerkWidget(class UUI_Perks_Item_C** PerkWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.SelectPerkWidget");

	UUI_Perks_View_C_SelectPerkWidget_Params params;
	params.PerkWidget = PerkWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_View.UI_Perks_View_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_View_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.PreConstruct");

	UUI_Perks_View_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_View.UI_Perks_View_C.OnPerkClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C**       PerkWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Perks_View_C::OnPerkClicked_Event(class UUI_Perks_Item_C** PerkWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.OnPerkClicked_Event");

	UUI_Perks_View_C_OnPerkClicked_Event_Params params;
	params.PerkWidget = PerkWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_View.UI_Perks_View_C.BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature
// (BlueprintEvent)

void UUI_Perks_View_C::BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature");

	UUI_Perks_View_C_BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_View.UI_Perks_View_C.BndEvt__ButtonOkHint_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Perks_View_C::BndEvt__ButtonOkHint_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.BndEvt__ButtonOkHint_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UUI_Perks_View_C_BndEvt__ButtonOkHint_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_View.UI_Perks_View_C.Toggle Loadout Hint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_View_C::Toggle_Loadout_Hint(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.Toggle Loadout Hint");

	UUI_Perks_View_C_Toggle_Loadout_Hint_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_View.UI_Perks_View_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Perks_View_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.Construct");

	UUI_Perks_View_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_View.UI_Perks_View_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Perks_View_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.OnFocusLost");

	UUI_Perks_View_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_View.UI_Perks_View_C.ExecuteUbergraph_UI_Perks_View
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_View_C::ExecuteUbergraph_UI_Perks_View(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.ExecuteUbergraph_UI_Perks_View");

	UUI_Perks_View_C_ExecuteUbergraph_UI_Perks_View_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
