// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EWC_Salvage_Ambush_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EWC_Salvage_Ambush.EWC_Salvage_Ambush_C.StartWave
// (Event, Public, BlueprintEvent)

void UEWC_Salvage_Ambush_C::StartWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Salvage_Ambush.EWC_Salvage_Ambush_C.StartWave");

	UEWC_Salvage_Ambush_C_StartWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EWC_Salvage_Ambush.EWC_Salvage_Ambush_C.ExecuteUbergraph_EWC_Salvage_Ambush
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEWC_Salvage_Ambush_C::ExecuteUbergraph_EWC_Salvage_Ambush(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Salvage_Ambush.EWC_Salvage_Ambush_C.ExecuteUbergraph_EWC_Salvage_Ambush");

	UEWC_Salvage_Ambush_C_ExecuteUbergraph_EWC_Salvage_Ambush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
