// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_HeightenedSense_Discharge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HeightenedSense_Discharge.BP_HeightenedSense_Discharge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HeightenedSense_Discharge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeightenedSense_Discharge.BP_HeightenedSense_Discharge_C.ReceiveBeginPlay");

	ABP_HeightenedSense_Discharge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HeightenedSense_Discharge.BP_HeightenedSense_Discharge_C.ExecuteUbergraph_BP_HeightenedSense_Discharge
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HeightenedSense_Discharge_C::ExecuteUbergraph_BP_HeightenedSense_Discharge(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HeightenedSense_Discharge.BP_HeightenedSense_Discharge_C.ExecuteUbergraph_BP_HeightenedSense_Discharge");

	ABP_HeightenedSense_Discharge_C_ExecuteUbergraph_BP_HeightenedSense_Discharge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
