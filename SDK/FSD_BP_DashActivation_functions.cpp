// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DashActivation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DashActivation.BP_DashActivation_C.Receive_ActivatePerk
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DashActivation_C::Receive_ActivatePerk(class APlayerCharacter** Character, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DashActivation.BP_DashActivation_C.Receive_ActivatePerk");

	UBP_DashActivation_C_Receive_ActivatePerk_Params params;
	params.Character = Character;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DashActivation.BP_DashActivation_C.ExecuteUbergraph_BP_DashActivation
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DashActivation_C::ExecuteUbergraph_BP_DashActivation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DashActivation.BP_DashActivation_C.ExecuteUbergraph_BP_DashActivation");

	UBP_DashActivation_C_ExecuteUbergraph_BP_DashActivation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
