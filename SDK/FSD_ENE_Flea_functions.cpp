// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ENE_Flea_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ENE_Flea.ENE_Flea_C.SetWantstoFly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Fly                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AENE_Flea_C::SetWantstoFly(bool* Fly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Flea.ENE_Flea_C.SetWantstoFly");

	AENE_Flea_C_SetWantstoFly_Params params;
	params.Fly = Fly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ENE_Flea.ENE_Flea_C.BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature
// (BlueprintEvent)

void AENE_Flea_C::BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Flea.ENE_Flea_C.BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature");

	AENE_Flea_C_BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ENE_Flea.ENE_Flea_C.OnMessageAI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  TriggerName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AENE_Flea_C::OnMessageAI(struct FName* TriggerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Flea.ENE_Flea_C.OnMessageAI");

	AENE_Flea_C_OnMessageAI_Params params;
	params.TriggerName = TriggerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ENE_Flea.ENE_Flea_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHealthComponentBase**   HealthComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AENE_Flea_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase** HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Flea.ENE_Flea_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature");

	AENE_Flea_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature_Params params;
	params.HealthComponent = HealthComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ENE_Flea.ENE_Flea_C.BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature
// (BlueprintEvent)

void AENE_Flea_C::BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Flea.ENE_Flea_C.BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature");

	AENE_Flea_C_BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ENE_Flea.ENE_Flea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AENE_Flea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Flea.ENE_Flea_C.ReceiveBeginPlay");

	AENE_Flea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ENE_Flea.ENE_Flea_C.LookforPlayers
// (BlueprintCallable, BlueprintEvent)

void AENE_Flea_C::LookforPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Flea.ENE_Flea_C.LookforPlayers");

	AENE_Flea_C_LookforPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ENE_Flea.ENE_Flea_C.RandomFlight
// (BlueprintCallable, BlueprintEvent)

void AENE_Flea_C::RandomFlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Flea.ENE_Flea_C.RandomFlight");

	AENE_Flea_C_RandomFlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ENE_Flea.ENE_Flea_C.ExecuteUbergraph_ENE_Flea
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AENE_Flea_C::ExecuteUbergraph_ENE_Flea(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Flea.ENE_Flea_C.ExecuteUbergraph_ENE_Flea");

	AENE_Flea_C_ExecuteUbergraph_ENE_Flea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
