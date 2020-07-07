// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__MENU_Trading_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _MENU_Trading._MENU_Trading_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply U_MENU_Trading_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading._MENU_Trading_C.OnKeyUp");

	U_MENU_Trading_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function _MENU_Trading._MENU_Trading_C.OnShown
// (Event, Public, BlueprintEvent)

void U_MENU_Trading_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading._MENU_Trading_C.OnShown");

	U_MENU_Trading_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading._MENU_Trading_C.Back
// (BlueprintCallable, BlueprintEvent)

void U_MENU_Trading_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading._MENU_Trading_C.Back");

	U_MENU_Trading_C_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading._MENU_Trading_C.OnClosed
// (Event, Public, BlueprintEvent)

void U_MENU_Trading_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading._MENU_Trading_C.OnClosed");

	U_MENU_Trading_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading._MENU_Trading_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_Trading_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading._MENU_Trading_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	U_MENU_Trading_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading._MENU_Trading_C.ExecuteUbergraph__MENU_Trading
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Trading_C::ExecuteUbergraph__MENU_Trading(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading._MENU_Trading_C.ExecuteUbergraph__MENU_Trading");

	U_MENU_Trading_C_ExecuteUbergraph__MENU_Trading_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
