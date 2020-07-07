// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MemorialScreenSpeedButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.OnRep_IsFast
// (BlueprintCallable, BlueprintEvent)

void ABP_MemorialScreenSpeedButton_C::OnRep_IsFast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.OnRep_IsFast");

	ABP_MemorialScreenSpeedButton_C_OnRep_IsFast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MemorialScreenSpeedButton_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.ReceiveBeginPlay");

	ABP_MemorialScreenSpeedButton_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.OnMatchStarted_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_MemorialScreenSpeedButton_C::OnMatchStarted_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.OnMatchStarted_Event_1");

	ABP_MemorialScreenSpeedButton_C_OnMatchStarted_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MemorialScreenSpeedButton_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature");

	ABP_MemorialScreenSpeedButton_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.ExecuteUbergraph_BP_MemorialScreenSpeedButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MemorialScreenSpeedButton_C::ExecuteUbergraph_BP_MemorialScreenSpeedButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.ExecuteUbergraph_BP_MemorialScreenSpeedButton");

	ABP_MemorialScreenSpeedButton_C_ExecuteUbergraph_BP_MemorialScreenSpeedButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
