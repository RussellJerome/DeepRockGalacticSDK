// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_ShieldRegeneratorItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UpdateMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void AWPN_ShieldRegeneratorItem_C::UpdateMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UpdateMaterial");

	AWPN_ShieldRegeneratorItem_C_UpdateMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_ShieldRegeneratorItem_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.GetGearStatEntry");

	AWPN_ShieldRegeneratorItem_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_ShieldRegeneratorItem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UserConstructionScript");

	AWPN_ShieldRegeneratorItem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.RecieveStartUsing
// (Event, Protected, BlueprintEvent)

void AWPN_ShieldRegeneratorItem_C::RecieveStartUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.RecieveStartUsing");

	AWPN_ShieldRegeneratorItem_C_RecieveStartUsing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveItemThrown
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AThrowableActor**        thrownActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ShieldRegeneratorItem_C::ReceiveItemThrown(class AThrowableActor** thrownActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveItemThrown");

	AWPN_ShieldRegeneratorItem_C_ReceiveItemThrown_Params params;
	params.thrownActor = thrownActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorRecharged
// (Event, Protected, BlueprintEvent)

void AWPN_ShieldRegeneratorItem_C::ReceiveGeneratorRecharged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorRecharged");

	AWPN_ShieldRegeneratorItem_C_ReceiveGeneratorRecharged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorRechargeProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ShieldRegeneratorItem_C::ReceiveGeneratorRechargeProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorRechargeProgress");

	AWPN_ShieldRegeneratorItem_C_ReceiveGeneratorRechargeProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ShieldRegeneratorItem_C::BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature");

	AWPN_ShieldRegeneratorItem_C_BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ShieldRegeneratorItem_C::BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature(int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature");

	AWPN_ShieldRegeneratorItem_C_BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorReturned
// (Event, Protected, BlueprintEvent)

void AWPN_ShieldRegeneratorItem_C::ReceiveGeneratorReturned()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorReturned");

	AWPN_ShieldRegeneratorItem_C_ReceiveGeneratorReturned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ExecuteUbergraph_WPN_ShieldRegeneratorItem
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ShieldRegeneratorItem_C::ExecuteUbergraph_WPN_ShieldRegeneratorItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ExecuteUbergraph_WPN_ShieldRegeneratorItem");

	AWPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
