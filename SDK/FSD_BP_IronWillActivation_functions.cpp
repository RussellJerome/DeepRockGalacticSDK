// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_IronWillActivation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IronWillActivation.BP_IronWillActivation_C.Receive_ActivatePerk
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_IronWillActivation_C::Receive_ActivatePerk(class APlayerCharacter** Character, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IronWillActivation.BP_IronWillActivation_C.Receive_ActivatePerk");

	UBP_IronWillActivation_C_Receive_ActivatePerk_Params params;
	params.Character = Character;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IronWillActivation.BP_IronWillActivation_C.ExecuteUbergraph_BP_IronWillActivation
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_IronWillActivation_C::ExecuteUbergraph_BP_IronWillActivation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IronWillActivation.BP_IronWillActivation_C.ExecuteUbergraph_BP_IronWillActivation");

	UBP_IronWillActivation_C_ExecuteUbergraph_BP_IronWillActivation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
