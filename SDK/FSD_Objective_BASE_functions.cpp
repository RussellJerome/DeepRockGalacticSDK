// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Objective_BASE_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Objective_BASE.Objective_BASE_C.InitObjective
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UObjective_BASE_C::InitObjective(class UObjective** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective_BASE.Objective_BASE_C.InitObjective");

	UObjective_BASE_C_InitObjective_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
