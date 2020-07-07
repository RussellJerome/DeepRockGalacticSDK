// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PopUp_CommunityGoal_SelectNewFaction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Fee                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommunityGoalFaction**  Faction1                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommunityGoalFaction**  Faction2                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopUp_CommunityGoal_SelectNewFaction_C::Initialize(int* Fee, class UCommunityGoalFaction** Faction1, class UCommunityGoalFaction** Faction2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Initialize");

	UPopUp_CommunityGoal_SelectNewFaction_C_Initialize_Params params;
	params.Fee = Fee;
	params.Faction1 = Faction1;
	params.Faction2 = Faction2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPopUp_CommunityGoal_SelectNewFaction_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Construct");

	UPopUp_CommunityGoal_SelectNewFaction_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Faction1Selected
// (BlueprintCallable, BlueprintEvent)

void UPopUp_CommunityGoal_SelectNewFaction_C::Faction1Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Faction1Selected");

	UPopUp_CommunityGoal_SelectNewFaction_C_Faction1Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Faction2Selected
// (BlueprintCallable, BlueprintEvent)

void UPopUp_CommunityGoal_SelectNewFaction_C::Faction2Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Faction2Selected");

	UPopUp_CommunityGoal_SelectNewFaction_C_Faction2Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.BndEvt__Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UPopUp_CommunityGoal_SelectNewFaction_C::BndEvt__Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.BndEvt__Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UPopUp_CommunityGoal_SelectNewFaction_C_BndEvt__Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.ExecuteUbergraph_PopUp_CommunityGoal_SelectNewFaction
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopUp_CommunityGoal_SelectNewFaction_C::ExecuteUbergraph_PopUp_CommunityGoal_SelectNewFaction(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.ExecuteUbergraph_PopUp_CommunityGoal_SelectNewFaction");

	UPopUp_CommunityGoal_SelectNewFaction_C_ExecuteUbergraph_PopUp_CommunityGoal_SelectNewFaction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.CheckState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Changed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopUp_CommunityGoal_SelectNewFaction_C::CheckState__DelegateSignature(bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.CheckState__DelegateSignature");

	UPopUp_CommunityGoal_SelectNewFaction_C_CheckState__DelegateSignature_Params params;
	params.Changed = Changed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
