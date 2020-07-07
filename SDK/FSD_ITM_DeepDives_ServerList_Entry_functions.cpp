// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDives_ServerList_Entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetMissionNameWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerList_Entry_C::SetMissionNameWidth(float* Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetMissionNameWidth");

	UITM_DeepDives_ServerList_Entry_C_SetMissionNameWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.GetMissionToolTip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_DeepDives_ServerList_Entry_C::GetMissionToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.GetMissionToolTip");

	UITM_DeepDives_ServerList_Entry_C_GetMissionToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetColumnWidths
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  InWidths                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UITM_DeepDives_ServerList_Entry_C::SetColumnWidths(TArray<float>* InWidths)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetColumnWidths");

	UITM_DeepDives_ServerList_Entry_C_SetColumnWidths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWidths != nullptr)
		*InWidths = params.InWidths;
}


// Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.ToggleMissionDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutVisible                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerList_Entry_C::ToggleMissionDetails(bool* Visible, bool* OutVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.ToggleMissionDetails");

	UITM_DeepDives_ServerList_Entry_C_ToggleMissionDetails_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVisible != nullptr)
		*OutVisible = params.OutVisible;
}


// Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetNoMission
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_ServerList_Entry_C::SetNoMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetNoMission");

	UITM_DeepDives_ServerList_Entry_C_SetNoMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetSession
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult* Session                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDives_ServerList_Entry_C::SetSession(struct FBlueprintSessionResult* Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.SetSession");

	UITM_DeepDives_ServerList_Entry_C_SetSession_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UITM_DeepDives_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerList_Entry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.PreConstruct");

	UITM_DeepDives_ServerList_Entry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UITM_DeepDives_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UITM_DeepDives_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.ExecuteUbergraph_ITM_DeepDives_ServerList_Entry
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerList_Entry_C::ExecuteUbergraph_ITM_DeepDives_ServerList_Entry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.ExecuteUbergraph_ITM_DeepDives_ServerList_Entry");

	UITM_DeepDives_ServerList_Entry_C_ExecuteUbergraph_ITM_DeepDives_ServerList_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.JoinServer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult* Session                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDives_ServerList_Entry_C::JoinServer__DelegateSignature(struct FBlueprintSessionResult* Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList_Entry.ITM_DeepDives_ServerList_Entry_C.JoinServer__DelegateSignature");

	UITM_DeepDives_ServerList_Entry_C_JoinServer__DelegateSignature_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
