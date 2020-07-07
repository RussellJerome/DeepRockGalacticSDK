// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_RotatingSpotlight01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RotatingSpotlight01.BP_RotatingSpotlight01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RotatingSpotlight01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RotatingSpotlight01.BP_RotatingSpotlight01_C.ReceiveBeginPlay");

	ABP_RotatingSpotlight01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RotatingSpotlight01.BP_RotatingSpotlight01_C.ExecuteUbergraph_BP_RotatingSpotlight01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RotatingSpotlight01_C::ExecuteUbergraph_BP_RotatingSpotlight01(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RotatingSpotlight01.BP_RotatingSpotlight01_C.ExecuteUbergraph_BP_RotatingSpotlight01");

	ABP_RotatingSpotlight01_C_ExecuteUbergraph_BP_RotatingSpotlight01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
