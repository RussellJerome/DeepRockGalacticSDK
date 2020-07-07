// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CaveLeechCarver_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CaveLeechCarver.BP_CaveLeechCarver_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CaveLeechCarver_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaveLeechCarver.BP_CaveLeechCarver_C.ReceiveBeginPlay");

	ABP_CaveLeechCarver_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaveLeechCarver.BP_CaveLeechCarver_C.ExecuteUbergraph_BP_CaveLeechCarver
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaveLeechCarver_C::ExecuteUbergraph_BP_CaveLeechCarver(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaveLeechCarver.BP_CaveLeechCarver_C.ExecuteUbergraph_BP_CaveLeechCarver");

	ABP_CaveLeechCarver_C_ExecuteUbergraph_BP_CaveLeechCarver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
