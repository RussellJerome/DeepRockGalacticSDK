// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_GM_Salvage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GM_Salvage.GM_Salvage_C.UpdateFailsafeMollyCounters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                v2                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGM_Salvage_C::UpdateFailsafeMollyCounters(struct FVector* v2)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.UpdateFailsafeMollyCounters");

	AGM_Salvage_C_UpdateFailsafeMollyCounters_Params params;
	params.v2 = v2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.SpawnRepairPoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGM_Salvage_C::SpawnRepairPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.SpawnRepairPoints");

	AGM_Salvage_C_SpawnRepairPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.EnableNextRepairPoint
// (Public, BlueprintCallable, BlueprintEvent)

void AGM_Salvage_C::EnableNextRepairPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.EnableNextRepairPoint");

	AGM_Salvage_C_EnableNextRepairPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.AllMulesSalvaged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         Mules                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGM_Salvage_C::AllMulesSalvaged(TArray<class AActor*>* Mules)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.AllMulesSalvaged");

	AGM_Salvage_C_AllMulesSalvaged_Params params;
	params.Mules = Mules;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.OnLevelGenerationComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           pass                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGM_Salvage_C::OnLevelGenerationComplete(int* pass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.OnLevelGenerationComplete");

	AGM_Salvage_C_OnLevelGenerationComplete_Params params;
	params.pass = pass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.Call DropPod
// (BlueprintCallable, BlueprintEvent)

void AGM_Salvage_C::Call_DropPod()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.Call DropPod");

	AGM_Salvage_C_Call_DropPod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.DonkeyButtonPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGM_Salvage_C::DonkeyButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.DonkeyButtonPressed");

	AGM_Salvage_C_DonkeyButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.ReachedDropShip
// (BlueprintCallable, BlueprintEvent)

void AGM_Salvage_C::ReachedDropShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.ReachedDropShip");

	AGM_Salvage_C_ReachedDropShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.RepairPoint_Repaired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 RepairPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGM_Salvage_C::RepairPoint_Repaired(class AActor** RepairPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.RepairPoint_Repaired");

	AGM_Salvage_C_RepairPoint_Repaired_Params params;
	params.RepairPoint = RepairPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.DefendFail
// (BlueprintCallable, BlueprintEvent)

void AGM_Salvage_C::DefendFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.DefendFail");

	AGM_Salvage_C_DefendFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.DefendDone
// (BlueprintCallable, BlueprintEvent)

void AGM_Salvage_C::DefendDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.DefendDone");

	AGM_Salvage_C_DefendDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.SetObjective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOBJ_1st_Salvage_C**     Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGM_Salvage_C::SetObjective(class UOBJ_1st_Salvage_C** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.SetObjective");

	AGM_Salvage_C_SetObjective_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.OnCountdownFinished
// (BlueprintCallable, BlueprintEvent)

void AGM_Salvage_C::OnCountdownFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.OnCountdownFinished");

	AGM_Salvage_C_OnCountdownFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.Countdowncomplete
// (BlueprintCallable, BlueprintEvent)

void AGM_Salvage_C::Countdowncomplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.Countdowncomplete");

	AGM_Salvage_C_Countdowncomplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.ActivateDonkeyButton
// (BlueprintCallable, BlueprintEvent)

void AGM_Salvage_C::ActivateDonkeyButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.ActivateDonkeyButton");

	AGM_Salvage_C_ActivateDonkeyButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Salvage.GM_Salvage_C.ExecuteUbergraph_GM_Salvage
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGM_Salvage_C::ExecuteUbergraph_GM_Salvage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.ExecuteUbergraph_GM_Salvage");

	AGM_Salvage_C_ExecuteUbergraph_GM_Salvage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
