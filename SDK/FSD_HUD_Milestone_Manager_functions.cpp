// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Milestone_Manager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Milestone_Manager_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.PreConstruct");

	UHUD_Milestone_Manager_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.OnMilestoneReached
// (BlueprintCallable, BlueprintEvent)

void UHUD_Milestone_Manager_C::OnMilestoneReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.OnMilestoneReached");

	UHUD_Milestone_Manager_C_OnMilestoneReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.ExecuteUbergraph_HUD_Milestone_Manager
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Milestone_Manager_C::ExecuteUbergraph_HUD_Milestone_Manager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.ExecuteUbergraph_HUD_Milestone_Manager");

	UHUD_Milestone_Manager_C_ExecuteUbergraph_HUD_Milestone_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
