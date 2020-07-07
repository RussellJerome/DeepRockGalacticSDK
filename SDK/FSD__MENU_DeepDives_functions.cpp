// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__MENU_DeepDives_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _MENU_DeepDives._MENU_DeepDives_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply U_MENU_DeepDives_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_DeepDives._MENU_DeepDives_C.OnMouseButtonDown");

	U_MENU_DeepDives_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function _MENU_DeepDives._MENU_DeepDives_C.ConvertDurationToText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan*              A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText U_MENU_DeepDives_C::ConvertDurationToText(struct FTimespan* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_DeepDives._MENU_DeepDives_C.ConvertDurationToText");

	U_MENU_DeepDives_C_ConvertDurationToText_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function _MENU_DeepDives._MENU_DeepDives_C.SetPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                InPage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void U_MENU_DeepDives_C::SetPage(class UWidget** InPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_DeepDives._MENU_DeepDives_C.SetPage");

	U_MENU_DeepDives_C_SetPage_Params params;
	params.InPage = InPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_DeepDives._MENU_DeepDives_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply U_MENU_DeepDives_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_DeepDives._MENU_DeepDives_C.OnKeyUp");

	U_MENU_DeepDives_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function _MENU_DeepDives._MENU_DeepDives_C.OnShown
// (Event, Public, BlueprintEvent)

void U_MENU_DeepDives_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_DeepDives._MENU_DeepDives_C.OnShown");

	U_MENU_DeepDives_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_DeepDives._MENU_DeepDives_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_DeepDives_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_DeepDives._MENU_DeepDives_C.PreConstruct");

	U_MENU_DeepDives_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__TabPage_Start_K2Node_ComponentBoundEvent_0_OnJoinMission__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          EliteDeepDive                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_DeepDives_C::BndEvt__TabPage_Start_K2Node_ComponentBoundEvent_0_OnJoinMission__DelegateSignature(bool* EliteDeepDive)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__TabPage_Start_K2Node_ComponentBoundEvent_0_OnJoinMission__DelegateSignature");

	U_MENU_DeepDives_C_BndEvt__TabPage_Start_K2Node_ComponentBoundEvent_0_OnJoinMission__DelegateSignature_Params params;
	params.EliteDeepDive = EliteDeepDive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_1_OnClosedClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_DeepDives_C::BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_1_OnClosedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_1_OnClosedClicked__DelegateSignature");

	U_MENU_DeepDives_C_BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_1_OnClosedClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_2_OnBackClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_DeepDives_C::BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_2_OnBackClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_2_OnBackClicked__DelegateSignature");

	U_MENU_DeepDives_C_BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_2_OnBackClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_DeepDives._MENU_DeepDives_C.Update Time
// (BlueprintCallable, BlueprintEvent)

void U_MENU_DeepDives_C::Update_Time()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_DeepDives._MENU_DeepDives_C.Update Time");

	U_MENU_DeepDives_C_Update_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_DeepDives._MENU_DeepDives_C.OnClosed
// (Event, Public, BlueprintEvent)

void U_MENU_DeepDives_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_DeepDives._MENU_DeepDives_C.OnClosed");

	U_MENU_DeepDives_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_DeepDives._MENU_DeepDives_C.First Time Shout
// (BlueprintCallable, BlueprintEvent)

void U_MENU_DeepDives_C::First_Time_Shout()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_DeepDives._MENU_DeepDives_C.First Time Shout");

	U_MENU_DeepDives_C_First_Time_Shout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_DeepDives._MENU_DeepDives_C.ExecuteUbergraph__MENU_DeepDives
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_DeepDives_C::ExecuteUbergraph__MENU_DeepDives(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_DeepDives._MENU_DeepDives_C.ExecuteUbergraph__MENU_DeepDives");

	U_MENU_DeepDives_C_ExecuteUbergraph__MENU_DeepDives_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
