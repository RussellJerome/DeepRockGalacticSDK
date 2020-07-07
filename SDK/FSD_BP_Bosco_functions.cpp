// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Bosco_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Bosco.BP_Bosco_C.Handle Projectile diffs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGearStatEntry*         Gear_stat                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EItemPreviewStatus*            Cryo_upgrade_preview_status    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDamageUpgrade*                damage_upgrade_type            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        FSD_player_state               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGearStatEntry          gear_stat_out                  (Parm, OutParm)

void ABP_Bosco_C::Handle_Projectile_diffs(struct FGearStatEntry* Gear_stat, EItemPreviewStatus* Cryo_upgrade_preview_status, EDamageUpgrade* damage_upgrade_type, class AFSDPlayerState** FSD_player_state, struct FGearStatEntry* gear_stat_out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.Handle Projectile diffs");

	ABP_Bosco_C_Handle_Projectile_diffs_Params params;
	params.Gear_stat = Gear_stat;
	params.Cryo_upgrade_preview_status = Cryo_upgrade_preview_status;
	params.damage_upgrade_type = damage_upgrade_type;
	params.FSD_player_state = FSD_player_state;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (gear_stat_out != nullptr)
		*gear_stat_out = params.gear_stat_out;
}


// Function BP_Bosco.BP_Bosco_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Bosco_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.GetGearStatEntry");

	ABP_Bosco_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function BP_Bosco.BP_Bosco_C.ScareEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Bosco_C::ScareEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.ScareEffect");

	ABP_Bosco_C_ScareEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bosco.BP_Bosco_C.OnTriggerAI
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  TriggerName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Bosco_C::OnTriggerAI(struct FName* TriggerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.OnTriggerAI");

	ABP_Bosco_C_OnTriggerAI_Params params;
	params.TriggerName = TriggerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Bosco.BP_Bosco_C.SelfDestruct
// (Event, Public, BlueprintEvent)

void ABP_Bosco_C::SelfDestruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.SelfDestruct");

	ABP_Bosco_C_SelfDestruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bosco.BP_Bosco_C.StateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EDroneAIState*                 aCurrentState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bosco_C::StateChanged(EDroneAIState* aCurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.StateChanged");

	ABP_Bosco_C_StateChanged_Params params;
	params.aCurrentState = aCurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bosco.BP_Bosco_C.OnMessageAI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  TriggerName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bosco_C::OnMessageAI(struct FName* TriggerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.OnMessageAI");

	ABP_Bosco_C_OnMessageAI_Params params;
	params.TriggerName = TriggerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bosco.BP_Bosco_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Bosco_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.ReceiveBeginPlay");

	ABP_Bosco_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bosco.BP_Bosco_C.ExecuteUbergraph_BP_Bosco
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bosco_C::ExecuteUbergraph_BP_Bosco(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bosco.BP_Bosco_C.ExecuteUbergraph_BP_Bosco");

	ABP_Bosco_C_ExecuteUbergraph_BP_Bosco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
