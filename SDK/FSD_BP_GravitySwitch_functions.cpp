// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_GravitySwitch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GravitySwitch.BP_GravitySwitch_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_GravitySwitch_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.Timeline_0__FinishedFunc");

	ABP_GravitySwitch_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GravitySwitch.BP_GravitySwitch_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_GravitySwitch_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.Timeline_0__UpdateFunc");

	ABP_GravitySwitch_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GravitySwitch.BP_GravitySwitch_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GravitySwitch_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_GravitySwitch_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GravitySwitch.BP_GravitySwitch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GravitySwitch_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.ReceiveBeginPlay");

	ABP_GravitySwitch_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GravitySwitch.BP_GravitySwitch_C.ChangeSkyLight
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_GravitySwitch_C::ChangeSkyLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.ChangeSkyLight");

	ABP_GravitySwitch_C_ChangeSkyLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GravitySwitch.BP_GravitySwitch_C.ResetSkyLight
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_GravitySwitch_C::ResetSkyLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.ResetSkyLight");

	ABP_GravitySwitch_C_ResetSkyLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GravitySwitch.BP_GravitySwitch_C.ExecuteUbergraph_BP_GravitySwitch
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GravitySwitch_C::ExecuteUbergraph_BP_GravitySwitch(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.ExecuteUbergraph_BP_GravitySwitch");

	ABP_GravitySwitch_C_ExecuteUbergraph_BP_GravitySwitch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
