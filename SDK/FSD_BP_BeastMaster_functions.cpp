// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BeastMaster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BeastMaster.BP_BeastMaster_C.UpdateHoldProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BeastMaster_C::UpdateHoldProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.UpdateHoldProgress");

	UBP_BeastMaster_C_UpdateHoldProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BeastMaster.BP_BeastMaster_C.GetPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFSDPlayerController*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFSDPlayerController* UBP_BeastMaster_C::GetPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.GetPlayerController");

	UBP_BeastMaster_C_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BeastMaster.BP_BeastMaster_C.SetupStatusEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpiderEnemy**           enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BeastMaster_C::SetupStatusEffects(class ASpiderEnemy** enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.SetupStatusEffects");

	UBP_BeastMaster_C_SetupStatusEffects_Params params;
	params.enemy = enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BeastMaster.BP_BeastMaster_C.GetPlayerCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerCharacter*        AsPlayer_Character             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BeastMaster_C::GetPlayerCharacter(class APlayerCharacter** AsPlayer_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.GetPlayerCharacter");

	UBP_BeastMaster_C_GetPlayerCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsPlayer_Character != nullptr)
		*AsPlayer_Character = params.AsPlayer_Character;
}


// Function BP_BeastMaster.BP_BeastMaster_C.GetPerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFloatPerkAsset*         Perks_Beast_Master             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BeastMaster_C::GetPerk(class UFloatPerkAsset** Perks_Beast_Master)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.GetPerk");

	UBP_BeastMaster_C_GetPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Perks_Beast_Master != nullptr)
		*Perks_Beast_Master = params.Perks_Beast_Master;
}


// Function BP_BeastMaster.BP_BeastMaster_C.CanBefriend
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASpiderEnemy**           enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BeastMaster_C::CanBefriend(class ASpiderEnemy** enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.CanBefriend");

	UBP_BeastMaster_C_CanBefriend_Params params;
	params.enemy = enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BeastMaster.BP_BeastMaster_C.OnLoaded_8AE17C7C4ABC357330FD319C5F5E7796
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BeastMaster_C::OnLoaded_8AE17C7C4ABC357330FD319C5F5E7796(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.OnLoaded_8AE17C7C4ABC357330FD319C5F5E7796");

	UBP_BeastMaster_C_OnLoaded_8AE17C7C4ABC357330FD319C5F5E7796_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BeastMaster.BP_BeastMaster_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_BeastMaster_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.ReceiveBeginPlay");

	UBP_BeastMaster_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BeastMaster.BP_BeastMaster_C.OnTargetChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    NewPrimitive                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BeastMaster_C::OnTargetChanged(class AActor** NewTarget, class UPrimitiveComponent** NewPrimitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.OnTargetChanged");

	UBP_BeastMaster_C_OnTargetChanged_Params params;
	params.NewTarget = NewTarget;
	params.NewPrimitive = NewPrimitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BeastMaster.BP_BeastMaster_C.BeginBeastMasterActivation
// (BlueprintCallable, BlueprintEvent)

void UBP_BeastMaster_C::BeginBeastMasterActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.BeginBeastMasterActivation");

	UBP_BeastMaster_C_BeginBeastMasterActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BeastMaster.BP_BeastMaster_C.Server_Befriend
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpiderEnemy**           Spider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BeastMaster_C::Server_Befriend(class ASpiderEnemy** Spider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.Server_Befriend");

	UBP_BeastMaster_C_Server_Befriend_Params params;
	params.Spider = Spider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BeastMaster.BP_BeastMaster_C.Setup Shouts
// (BlueprintCallable, BlueprintEvent)

void UBP_BeastMaster_C::Setup_Shouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.Setup Shouts");

	UBP_BeastMaster_C_Setup_Shouts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BeastMaster.BP_BeastMaster_C.OnFriendedEnemyDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHealthComponentBase**   HealthComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BeastMaster_C::OnFriendedEnemyDeath(class UHealthComponentBase** HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.OnFriendedEnemyDeath");

	UBP_BeastMaster_C_OnFriendedEnemyDeath_Params params;
	params.HealthComponent = HealthComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BeastMaster.BP_BeastMaster_C.EndBeastMasterActivation
// (BlueprintCallable, BlueprintEvent)

void UBP_BeastMaster_C::EndBeastMasterActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.EndBeastMasterActivation");

	UBP_BeastMaster_C_EndBeastMasterActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BeastMaster.BP_BeastMaster_C.ExecuteUbergraph_BP_BeastMaster
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BeastMaster_C::ExecuteUbergraph_BP_BeastMaster(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BeastMaster.BP_BeastMaster_C.ExecuteUbergraph_BP_BeastMaster");

	UBP_BeastMaster_C_ExecuteUbergraph_BP_BeastMaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
