// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Hologram_Hoxxes_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Hologram_Hoxxes.BP_Hologram_Hoxxes_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Hologram_Hoxxes_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hologram_Hoxxes.BP_Hologram_Hoxxes_C.ReceiveBeginPlay");

	ABP_Hologram_Hoxxes_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hologram_Hoxxes.BP_Hologram_Hoxxes_C.ExecuteUbergraph_BP_Hologram_Hoxxes
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hologram_Hoxxes_C::ExecuteUbergraph_BP_Hologram_Hoxxes(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hologram_Hoxxes.BP_Hologram_Hoxxes_C.ExecuteUbergraph_BP_Hologram_Hoxxes");

	ABP_Hologram_Hoxxes_C_ExecuteUbergraph_BP_Hologram_Hoxxes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
