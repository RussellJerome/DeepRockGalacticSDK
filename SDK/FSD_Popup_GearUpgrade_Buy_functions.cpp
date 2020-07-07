// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Popup_GearUpgrade_Buy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPopup_GearUpgrade_Buy_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnKeyUp");

	UPopup_GearUpgrade_Buy_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemUpgrade**           Upgrade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopup_GearUpgrade_Buy_C::Show(class UClass** Item, class UItemUpgrade** Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Show");

	UPopup_GearUpgrade_Buy_C_Show_Params params;
	params.Item = Item;
	params.Upgrade = Upgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UPopup_GearUpgrade_Buy_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UPopup_GearUpgrade_Buy_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UPopup_GearUpgrade_Buy_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UPopup_GearUpgrade_Buy_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopup_GearUpgrade_Buy_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.PreConstruct");

	UPopup_GearUpgrade_Buy_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Back
// (BlueprintCallable, BlueprintEvent)

void UPopup_GearUpgrade_Buy_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Back");

	UPopup_GearUpgrade_Buy_C_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Buy
// (BlueprintCallable, BlueprintEvent)

void UPopup_GearUpgrade_Buy_C::Buy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Buy");

	UPopup_GearUpgrade_Buy_C_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnClosed
// (Event, Public, BlueprintEvent)

void UPopup_GearUpgrade_Buy_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnClosed");

	UPopup_GearUpgrade_Buy_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.ExecuteUbergraph_Popup_GearUpgrade_Buy
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopup_GearUpgrade_Buy_C::ExecuteUbergraph_Popup_GearUpgrade_Buy(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.ExecuteUbergraph_Popup_GearUpgrade_Buy");

	UPopup_GearUpgrade_Buy_C_ExecuteUbergraph_Popup_GearUpgrade_Buy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
