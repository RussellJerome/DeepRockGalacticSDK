// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EWC_Salvage_Defend_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EWC_Salvage_Defend.EWC_Salvage_Defend_C.StartWave
// (Event, Public, BlueprintEvent)

void UEWC_Salvage_Defend_C::StartWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Salvage_Defend.EWC_Salvage_Defend_C.StartWave");

	UEWC_Salvage_Defend_C_StartWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EWC_Salvage_Defend.EWC_Salvage_Defend_C.ExecuteUbergraph_EWC_Salvage_Defend
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEWC_Salvage_Defend_C::ExecuteUbergraph_EWC_Salvage_Defend(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Salvage_Defend.EWC_Salvage_Defend_C.ExecuteUbergraph_EWC_Salvage_Defend");

	UEWC_Salvage_Defend_C_ExecuteUbergraph_EWC_Salvage_Defend_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
