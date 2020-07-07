// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CabinController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CabinController.BP_CabinController_C.OnRep_OwnerState
// (BlueprintCallable, BlueprintEvent)

void ABP_CabinController_C::OnRep_OwnerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinController.BP_CabinController_C.OnRep_OwnerState");

	ABP_CabinController_C_OnRep_OwnerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CabinController.BP_CabinController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CabinController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinController.BP_CabinController_C.ReceiveBeginPlay");

	ABP_CabinController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CabinController.BP_CabinController_C.RemoveOwner
// (BlueprintCallable, BlueprintEvent)

void ABP_CabinController_C::RemoveOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinController.BP_CabinController_C.RemoveOwner");

	ABP_CabinController_C_RemoveOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CabinController.BP_CabinController_C.Set Cabin Owner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerController**   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CabinController_C::Set_Cabin_Owner(class AFSDPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinController.BP_CabinController_C.Set Cabin Owner");

	ABP_CabinController_C_Set_Cabin_Owner_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CabinController.BP_CabinController_C.Controller leave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CabinController_C::Controller_leave(class AActor** DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinController.BP_CabinController_C.Controller leave");

	ABP_CabinController_C_Controller_leave_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CabinController.BP_CabinController_C.ExecuteUbergraph_BP_CabinController
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CabinController_C::ExecuteUbergraph_BP_CabinController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinController.BP_CabinController_C.ExecuteUbergraph_BP_CabinController");

	ABP_CabinController_C_ExecuteUbergraph_BP_CabinController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
