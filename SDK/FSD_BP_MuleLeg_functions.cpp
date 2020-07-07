// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MuleLeg_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MuleLeg.BP_MuleLeg_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MuleLeg_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.ReceiveBeginPlay");

	ABP_MuleLeg_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MuleLeg.BP_MuleLeg_C.OnDropped Leg
// (BlueprintCallable, BlueprintEvent)

void ABP_MuleLeg_C::OnDropped_Leg()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.OnDropped Leg");

	ABP_MuleLeg_C_OnDropped_Leg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MuleLeg.BP_MuleLeg_C.OnPickedUpLeg
// (BlueprintCallable, BlueprintEvent)

void ABP_MuleLeg_C::OnPickedUpLeg()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.OnPickedUpLeg");

	ABP_MuleLeg_C_OnPickedUpLeg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MuleLeg.BP_MuleLeg_C.DisableDistressSphere
// (BlueprintCallable, BlueprintEvent)

void ABP_MuleLeg_C::DisableDistressSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.DisableDistressSphere");

	ABP_MuleLeg_C_DisableDistressSphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MuleLeg.BP_MuleLeg_C.ExecuteUbergraph_BP_MuleLeg
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MuleLeg_C::ExecuteUbergraph_BP_MuleLeg(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.ExecuteUbergraph_BP_MuleLeg");

	ABP_MuleLeg_C_ExecuteUbergraph_BP_MuleLeg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
