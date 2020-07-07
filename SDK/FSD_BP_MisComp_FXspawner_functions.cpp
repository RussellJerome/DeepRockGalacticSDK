// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MisComp_FXspawner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MisComp_FXspawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.UserConstructionScript");

	ABP_MisComp_FXspawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.SetSurvived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Survived                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MisComp_FXspawner_C::SetSurvived(bool* Survived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.SetSurvived");

	ABP_MisComp_FXspawner_C_SetSurvived_Params params;
	params.Survived = Survived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.ExecuteUbergraph_BP_MisComp_FXspawner
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MisComp_FXspawner_C::ExecuteUbergraph_BP_MisComp_FXspawner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.ExecuteUbergraph_BP_MisComp_FXspawner");

	ABP_MisComp_FXspawner_C_ExecuteUbergraph_BP_MisComp_FXspawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
