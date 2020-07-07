// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_APB_Uplink_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function APB_Uplink.APB_Uplink_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAPB_Uplink_C::SetProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function APB_Uplink.APB_Uplink_C.SetProgress");

	UAPB_Uplink_C_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function APB_Uplink.APB_Uplink_C.ExecuteUbergraph_APB_Uplink
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAPB_Uplink_C::ExecuteUbergraph_APB_Uplink(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function APB_Uplink.APB_Uplink_C.ExecuteUbergraph_APB_Uplink");

	UAPB_Uplink_C_ExecuteUbergraph_APB_Uplink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
