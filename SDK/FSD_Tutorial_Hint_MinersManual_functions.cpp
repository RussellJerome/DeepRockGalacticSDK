// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_MinersManual_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_MinersManual.Tutorial_Hint_MinersManual_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_MinersManual_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_MinersManual.Tutorial_Hint_MinersManual_C.ReceiveOnInitialized");

	UTutorial_Hint_MinersManual_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_MinersManual.Tutorial_Hint_MinersManual_C.ExecuteUbergraph_Tutorial_Hint_MinersManual
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_MinersManual_C::ExecuteUbergraph_Tutorial_Hint_MinersManual(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_MinersManual.Tutorial_Hint_MinersManual_C.ExecuteUbergraph_Tutorial_Hint_MinersManual");

	UTutorial_Hint_MinersManual_C_ExecuteUbergraph_Tutorial_Hint_MinersManual_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
