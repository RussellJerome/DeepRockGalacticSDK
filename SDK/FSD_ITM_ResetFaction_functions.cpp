// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ResetFaction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ResetFaction.ITM_ResetFaction_C.CurrentFactionID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UITM_ResetFaction_C::CurrentFactionID()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ResetFaction.ITM_ResetFaction_C.CurrentFactionID");

	UITM_ResetFaction_C_CurrentFactionID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_ResetFaction.ITM_ResetFaction_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ResetFaction_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ResetFaction.ITM_ResetFaction_C.PreConstruct");

	UITM_ResetFaction_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ResetFaction.ITM_ResetFaction_C.Set Faction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ResetFaction_C::Set_Faction(class UCommunityGoalFaction** Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ResetFaction.ITM_ResetFaction_C.Set Faction");

	UITM_ResetFaction_C_Set_Faction_Params params;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ResetFaction.ITM_ResetFaction_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ResetFaction_C::BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ResetFaction.ITM_ResetFaction_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UITM_ResetFaction_C_BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ResetFaction.ITM_ResetFaction_C.OnFactionSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Changed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ResetFaction_C::OnFactionSwitch(bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ResetFaction.ITM_ResetFaction_C.OnFactionSwitch");

	UITM_ResetFaction_C_OnFactionSwitch_Params params;
	params.Changed = Changed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ResetFaction.ITM_ResetFaction_C.ExecuteUbergraph_ITM_ResetFaction
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ResetFaction_C::ExecuteUbergraph_ITM_ResetFaction(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ResetFaction.ITM_ResetFaction_C.ExecuteUbergraph_ITM_ResetFaction");

	UITM_ResetFaction_C_ExecuteUbergraph_ITM_ResetFaction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ResetFaction.ITM_ResetFaction_C.CheckState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ResetFaction_C::CheckState__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ResetFaction.ITM_ResetFaction_C.CheckState__DelegateSignature");

	UITM_ResetFaction_C_CheckState__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
