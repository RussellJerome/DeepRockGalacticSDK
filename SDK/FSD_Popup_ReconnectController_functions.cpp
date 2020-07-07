// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Popup_ReconnectController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Popup_ReconnectController.Popup_ReconnectController_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPopup_ReconnectController_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_ReconnectController.Popup_ReconnectController_C.OnKeyUp");

	UPopup_ReconnectController_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Popup_ReconnectController.Popup_ReconnectController_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)

void UPopup_ReconnectController_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_ReconnectController.Popup_ReconnectController_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UPopup_ReconnectController_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popup_ReconnectController.Popup_ReconnectController_C.Close
// (BlueprintCallable, BlueprintEvent)

void UPopup_ReconnectController_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_ReconnectController.Popup_ReconnectController_C.Close");

	UPopup_ReconnectController_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Popup_ReconnectController.Popup_ReconnectController_C.ExecuteUbergraph_Popup_ReconnectController
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopup_ReconnectController_C::ExecuteUbergraph_Popup_ReconnectController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_ReconnectController.Popup_ReconnectController_C.ExecuteUbergraph_Popup_ReconnectController");

	UPopup_ReconnectController_C_ExecuteUbergraph_Popup_ReconnectController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
