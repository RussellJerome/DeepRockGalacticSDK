// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Objective_Gems_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Objective_Gems.Objective_Gems_C.InitObjective
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UObjective_Gems_C::InitObjective(class UObjective** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective_Gems.Objective_Gems_C.InitObjective");

	UObjective_Gems_C_InitObjective_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Objective_Gems.Objective_Gems_C.OnObjectiveUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UObjective_Gems_C::OnObjectiveUpdated(class UObjective** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective_Gems.Objective_Gems_C.OnObjectiveUpdated");

	UObjective_Gems_C_OnObjectiveUpdated_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Objective_Gems.Objective_Gems_C.ExecuteUbergraph_Objective_Gems
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UObjective_Gems_C::ExecuteUbergraph_Objective_Gems(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective_Gems.Objective_Gems_C.ExecuteUbergraph_Objective_Gems");

	UObjective_Gems_C_ExecuteUbergraph_Objective_Gems_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
