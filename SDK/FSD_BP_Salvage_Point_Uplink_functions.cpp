// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Salvage_Point_Uplink_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.HandlePhotosensitivity
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Salvage_Point_Uplink_C::HandlePhotosensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.HandlePhotosensitivity");

	ABP_Salvage_Point_Uplink_C_HandlePhotosensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Salvage_Point_Uplink_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.ReceiveBeginPlay");

	ABP_Salvage_Point_Uplink_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseStart
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_Point_Uplink_C::OnDefenseStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseStart");

	ABP_Salvage_Point_Uplink_C_OnDefenseStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseComplete
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_Point_Uplink_C::OnDefenseComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseComplete");

	ABP_Salvage_Point_Uplink_C_OnDefenseComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_Point_Uplink_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature");

	ABP_Salvage_Point_Uplink_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseFail
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_Point_Uplink_C::OnDefenseFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseFail");

	ABP_Salvage_Point_Uplink_C_OnDefenseFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.ExecuteUbergraph_BP_Salvage_Point_Uplink
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_Point_Uplink_C::ExecuteUbergraph_BP_Salvage_Point_Uplink(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.ExecuteUbergraph_BP_Salvage_Point_Uplink");

	ABP_Salvage_Point_Uplink_C_ExecuteUbergraph_BP_Salvage_Point_Uplink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
