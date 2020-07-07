// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoalInformation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.DoFactionToolTip
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalInformation_C::DoFactionToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.DoFactionToolTip");

	UITM_CommunityGoalInformation_C_DoFactionToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetResourceBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalInformation_C::SetResourceBox(int* Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetResourceBox");

	UITM_CommunityGoalInformation_C_SetResourceBox_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.UpdateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalInformation_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.UpdateIcon");

	UITM_CommunityGoalInformation_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetFaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalInformation_C::SetFaction(class UCommunityGoalFaction** Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetFaction");

	UITM_CommunityGoalInformation_C_SetFaction_Params params;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.ResetAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalInformation_C::ResetAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.ResetAnim");

	UITM_CommunityGoalInformation_C_ResetAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalInformation_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.PreConstruct");

	UITM_CommunityGoalInformation_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetGoal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoal**         Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalInformation_C::SetGoal(class UCommunityGoal** Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetGoal");

	UITM_CommunityGoalInformation_C_SetGoal_Params params;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.CheckFaction
// (BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoalInformation_C::CheckFaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.CheckFaction");

	UITM_CommunityGoalInformation_C_CheckFaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetFactionAndGoal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommunityGoal**         Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalInformation_C::SetFactionAndGoal(class UCommunityGoalFaction** Faction, class UCommunityGoal** Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetFactionAndGoal");

	UITM_CommunityGoalInformation_C_SetFactionAndGoal_Params params;
	params.Faction = Faction;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_CommunityGoalInformation_C::BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UITM_CommunityGoalInformation_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_CommunityGoalInformation_C::BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UITM_CommunityGoalInformation_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.ExecuteUbergraph_ITM_CommunityGoalInformation
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoalInformation_C::ExecuteUbergraph_ITM_CommunityGoalInformation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.ExecuteUbergraph_ITM_CommunityGoalInformation");

	UITM_CommunityGoalInformation_C_ExecuteUbergraph_ITM_CommunityGoalInformation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
