// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Objective_Resource_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Objective_Resource.Objective_Resource_C.InitObjective
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UObjective_Resource_C::InitObjective(class UObjective** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective_Resource.Objective_Resource_C.InitObjective");

	UObjective_Resource_C_InitObjective_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Objective_Resource.Objective_Resource_C.OnObjectiveUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UObjective_Resource_C::OnObjectiveUpdated(class UObjective** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective_Resource.Objective_Resource_C.OnObjectiveUpdated");

	UObjective_Resource_C_OnObjectiveUpdated_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Objective_Resource.Objective_Resource_C.ExecuteUbergraph_Objective_Resource
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UObjective_Resource_C::ExecuteUbergraph_Objective_Resource(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective_Resource.Objective_Resource_C.ExecuteUbergraph_Objective_Resource");

	UObjective_Resource_C_ExecuteUbergraph_Objective_Resource_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
