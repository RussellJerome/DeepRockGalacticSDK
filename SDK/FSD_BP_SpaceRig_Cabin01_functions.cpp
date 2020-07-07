// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpaceRig_Cabin01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpaceRig_Cabin01.BP_SpaceRig_Cabin01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpaceRig_Cabin01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Cabin01.BP_SpaceRig_Cabin01_C.ReceiveBeginPlay");

	ABP_SpaceRig_Cabin01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Cabin01.BP_SpaceRig_Cabin01_C.Steam
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Cabin01_C::Steam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Cabin01.BP_SpaceRig_Cabin01_C.Steam");

	ABP_SpaceRig_Cabin01_C_Steam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Cabin01.BP_SpaceRig_Cabin01_C.ExecuteUbergraph_BP_SpaceRig_Cabin01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Cabin01_C::ExecuteUbergraph_BP_SpaceRig_Cabin01(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Cabin01.BP_SpaceRig_Cabin01_C.ExecuteUbergraph_BP_SpaceRig_Cabin01");

	ABP_SpaceRig_Cabin01_C_ExecuteUbergraph_BP_SpaceRig_Cabin01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
