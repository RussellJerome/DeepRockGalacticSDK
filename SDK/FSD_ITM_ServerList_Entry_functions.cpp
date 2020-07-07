// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ServerList_Entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionNameWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ServerList_Entry_C::SetMissionNameWidth(float* Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionNameWidth");

	UITM_ServerList_Entry_C_SetMissionNameWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetVisibleElements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InShowComplexity               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InShowDifficulty               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InShowLength                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InShowTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InShowWarningsAndMutators      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ServerList_Entry_C::SetVisibleElements(bool* InShowComplexity, bool* InShowDifficulty, bool* InShowLength, bool* InShowTime, bool* InShowWarningsAndMutators)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetVisibleElements");

	UITM_ServerList_Entry_C_SetVisibleElements_Params params;
	params.InShowComplexity = InShowComplexity;
	params.InShowDifficulty = InShowDifficulty;
	params.InShowLength = InShowLength;
	params.InShowTime = InShowTime;
	params.InShowWarningsAndMutators = InShowWarningsAndMutators;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.GetMissionToolTip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_ServerList_Entry_C::GetMissionToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.GetMissionToolTip");

	UITM_ServerList_Entry_C_GetMissionToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetColumnWidths
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  InWidths                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UITM_ServerList_Entry_C::SetColumnWidths(TArray<float>* InWidths)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetColumnWidths");

	UITM_ServerList_Entry_C_SetColumnWidths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWidths != nullptr)
		*InWidths = params.InWidths;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ToggleMissionDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ServerList_Entry_C::ToggleMissionDetails(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ToggleMissionDetails");

	UITM_ServerList_Entry_C_ToggleMissionDetails_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetNoMission
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_ServerList_Entry_C::SetNoMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetNoMission");

	UITM_ServerList_Entry_C_SetNoMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetBiomeIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBiome**                 Biome                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ServerList_Entry_C::SetBiomeIcon(class UBiome** Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetBiomeIcon");

	UITM_ServerList_Entry_C_SetBiomeIcon_Params params;
	params.Biome = Biome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionMutator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionMutator**        Mutator                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ServerList_Entry_C::SetMissionMutator(class UMissionMutator** Mutator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionMutator");

	UITM_ServerList_Entry_C_SetMissionMutator_Params params;
	params.Mutator = Mutator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionWarning**        Warning                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ServerList_Entry_C::SetMissionWarning(class UMissionWarning** Warning)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionWarning");

	UITM_ServerList_Entry_C_SetMissionWarning_Params params;
	params.Warning = Warning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.UpdateMissionTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_ServerList_Entry_C::UpdateMissionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.UpdateMissionTime");

	UITM_ServerList_Entry_C_UpdateMissionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetSession
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult* Session                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_ServerList_Entry_C::SetSession(struct FBlueprintSessionResult* Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetSession");

	UITM_ServerList_Entry_C_SetSession_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_ServerList_Entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.Construct");

	UITM_ServerList_Entry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UITM_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UITM_ServerList_Entry_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.CustomEvent_1");

	UITM_ServerList_Entry_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ServerList_Entry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.PreConstruct");

	UITM_ServerList_Entry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UITM_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UITM_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ExecuteUbergraph_ITM_ServerList_Entry
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ServerList_Entry_C::ExecuteUbergraph_ITM_ServerList_Entry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ExecuteUbergraph_ITM_ServerList_Entry");

	UITM_ServerList_Entry_C_ExecuteUbergraph_ITM_ServerList_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.JoinServer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult* Session                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_ServerList_Entry_C::JoinServer__DelegateSignature(struct FBlueprintSessionResult* Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.JoinServer__DelegateSignature");

	UITM_ServerList_Entry_C_JoinServer__DelegateSignature_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
