// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_BarGlass_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_ThrownGlass
// (BlueprintCallable, BlueprintEvent)

void AITM_BarGlass_Item_C::OnRep_ThrownGlass()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_ThrownGlass");

	AITM_BarGlass_Item_C_OnRep_ThrownGlass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_Visible
// (BlueprintCallable, BlueprintEvent)

void AITM_BarGlass_Item_C::OnRep_Visible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_Visible");

	AITM_BarGlass_Item_C_OnRep_Visible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_IsFull
// (BlueprintCallable, BlueprintEvent)

void AITM_BarGlass_Item_C::OnRep_IsFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_IsFull");

	AITM_BarGlass_Item_C_OnRep_IsFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.CheckCanSalute
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AITM_BarGlass_Item_C::CheckCanSalute()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.CheckCanSalute");

	AITM_BarGlass_Item_C_CheckCanSalute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.IsDrinking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsDrinking                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AITM_BarGlass_Item_C::IsDrinking(bool* IsDrinking)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.IsDrinking");

	AITM_BarGlass_Item_C_IsDrinking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDrinking != nullptr)
		*IsDrinking = params.IsDrinking;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayThrow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AITM_BarGlass_Item_C::PlayThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayThrow");

	AITM_BarGlass_Item_C_PlayThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayDrink
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AITM_BarGlass_Item_C::PlayDrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayDrink");

	AITM_BarGlass_Item_C_PlayDrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AITM_BarGlass_Item_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.UserConstructionScript");

	AITM_BarGlass_Item_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.RecieveStartUsing
// (Event, Protected, BlueprintEvent)

void AITM_BarGlass_Item_C::RecieveStartUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.RecieveStartUsing");

	AITM_BarGlass_Item_C_RecieveStartUsing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.Server_Use
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AITM_BarGlass_Item_C::Server_Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.Server_Use");

	AITM_BarGlass_Item_C_Server_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Drink
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AITM_BarGlass_Item_C::All_Drink()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Drink");

	AITM_BarGlass_Item_C_All_Drink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Throw
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AITM_BarGlass_Item_C::All_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Throw");

	AITM_BarGlass_Item_C_All_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.DropItem
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void AITM_BarGlass_Item_C::DropItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.DropItem");

	AITM_BarGlass_Item_C_DropItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SetEmpty
// (BlueprintCallable, BlueprintEvent)

void AITM_BarGlass_Item_C::SetEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SetEmpty");

	AITM_BarGlass_Item_C_SetEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent**        Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AITM_BarGlass_Item_C::BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent** Component, bool* bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature");

	AITM_BarGlass_Item_C_BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AITM_BarGlass_Item_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ReceiveBeginPlay");

	AITM_BarGlass_Item_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SkinThrownGlass
// (BlueprintCallable, BlueprintEvent)

void AITM_BarGlass_Item_C::SkinThrownGlass()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SkinThrownGlass");

	AITM_BarGlass_Item_C_SkinThrownGlass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ExecuteUbergraph_ITM_BarGlass_Item
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AITM_BarGlass_Item_C::ExecuteUbergraph_ITM_BarGlass_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ExecuteUbergraph_ITM_BarGlass_Item");

	AITM_BarGlass_Item_C_ExecuteUbergraph_ITM_BarGlass_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
