// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Dice_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Dice.ABP_Dice_C.ExecuteUbergraph_ABP_Dice
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Dice_C::ExecuteUbergraph_ABP_Dice(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Dice.ABP_Dice_C.ExecuteUbergraph_ABP_Dice");

	UABP_Dice_C_ExecuteUbergraph_ABP_Dice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
