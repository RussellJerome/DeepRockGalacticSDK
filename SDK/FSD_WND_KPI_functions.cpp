// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_KPI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_KPI.WND_KPI_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWND_KPI_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.OnKeyDown");

	UWND_KPI_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_KPI.WND_KPI_C.SelectNextTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_KPI_C::SelectNextTab(int* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.SelectNextTab");

	UWND_KPI_C_SelectNextTab_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_KPI.WND_KPI_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWND_KPI_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.OnKeyUp");

	UWND_KPI_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_KPI.WND_KPI_C.SelectTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasic_ButtonTab_C**     Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUI_KPI_Tab_C**          Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWND_KPI_C::SelectTab(class UBasic_ButtonTab_C** Button, class UUI_KPI_Tab_C** Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.SelectTab");

	UWND_KPI_C_SelectTab_Params params;
	params.Button = Button;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_KPI.WND_KPI_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_KPI_C::BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	UWND_KPI_C_BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_KPI.WND_KPI_C.BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_KPI_C::BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWND_KPI_C_BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_KPI.WND_KPI_C.BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_KPI_C::BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWND_KPI_C_BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_KPI.WND_KPI_C.SelectStatistics
// (BlueprintCallable, BlueprintEvent)

void UWND_KPI_C::SelectStatistics()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.SelectStatistics");

	UWND_KPI_C_SelectStatistics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_KPI.WND_KPI_C.BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          HasClaimable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_KPI_C::BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature(bool* HasClaimable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature");

	UWND_KPI_C_BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature_Params params;
	params.HasClaimable = HasClaimable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_KPI.WND_KPI_C.Close Window
// (BlueprintCallable, BlueprintEvent)

void UWND_KPI_C::Close_Window()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.Close Window");

	UWND_KPI_C_Close_Window_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_KPI.WND_KPI_C.OnShown
// (Event, Public, BlueprintEvent)

void UWND_KPI_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.OnShown");

	UWND_KPI_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_KPI.WND_KPI_C.ExecuteUbergraph_WND_KPI
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_KPI_C::ExecuteUbergraph_WND_KPI(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.ExecuteUbergraph_WND_KPI");

	UWND_KPI_C_ExecuteUbergraph_WND_KPI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
