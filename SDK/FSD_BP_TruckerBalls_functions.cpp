// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_TruckerBalls_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TruckerBalls.BP_TruckerBalls_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TruckerBalls_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TruckerBalls.BP_TruckerBalls_C.ReceiveBeginPlay");

	ABP_TruckerBalls_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TruckerBalls.BP_TruckerBalls_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TruckerBalls_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TruckerBalls.BP_TruckerBalls_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_TruckerBalls_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TruckerBalls.BP_TruckerBalls_C.CustomEvent_1
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_TruckerBalls_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TruckerBalls.BP_TruckerBalls_C.CustomEvent_1");

	ABP_TruckerBalls_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TruckerBalls.BP_TruckerBalls_C.ExecuteUbergraph_BP_TruckerBalls
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TruckerBalls_C::ExecuteUbergraph_BP_TruckerBalls(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TruckerBalls.BP_TruckerBalls_C.ExecuteUbergraph_BP_TruckerBalls");

	ABP_TruckerBalls_C_ExecuteUbergraph_BP_TruckerBalls_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
