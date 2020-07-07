// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpiderEgg_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.GetEliminationObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEliminationObjective*   AsElimination_Objective        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SpiderEgg_Base_C::GetEliminationObjective(class UEliminationObjective** AsElimination_Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.GetEliminationObjective");

	ABP_SpiderEgg_Base_C_GetEliminationObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsElimination_Objective != nullptr)
		*AsElimination_Objective = params.AsElimination_Objective;
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpiderEgg_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ReceiveBeginPlay");

	ABP_SpiderEgg_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature
// (BlueprintEvent)

void ABP_SpiderEgg_Base_C::BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature");

	ABP_SpiderEgg_Base_C_BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnEggBroken
// (BlueprintCallable, BlueprintEvent)

void ABP_SpiderEgg_Base_C::OnEggBroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnEggBroken");

	ABP_SpiderEgg_Base_C_OnEggBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnTerrainPointRemoved
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SpiderEgg_Base_C::OnTerrainPointRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnTerrainPointRemoved");

	ABP_SpiderEgg_Base_C_OnTerrainPointRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnPlayerProximityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          enteredTrigger                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpiderEgg_Base_C::OnPlayerProximityChanged(class APlayerCharacter** Player, bool* enteredTrigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnPlayerProximityChanged");

	ABP_SpiderEgg_Base_C_OnPlayerProximityChanged_Params params;
	params.Player = Player;
	params.enteredTrigger = enteredTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.CrackEgg
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_SpiderEgg_Base_C::CrackEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.CrackEgg");

	ABP_SpiderEgg_Base_C_CrackEgg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHealthComponentBase**   HealthComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SpiderEgg_Base_C::BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase** HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature");

	ABP_SpiderEgg_Base_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature_Params params;
	params.HealthComponent = HealthComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ChainReaction
// (BlueprintCallable, BlueprintEvent)

void ABP_SpiderEgg_Base_C::ChainReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ChainReaction");

	ABP_SpiderEgg_Base_C_ChainReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ExecuteUbergraph_BP_SpiderEgg_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpiderEgg_Base_C::ExecuteUbergraph_BP_SpiderEgg_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ExecuteUbergraph_BP_SpiderEgg_Base");

	ABP_SpiderEgg_Base_C_ExecuteUbergraph_BP_SpiderEgg_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
