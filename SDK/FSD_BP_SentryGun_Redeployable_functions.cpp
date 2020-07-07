// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SentryGun_Redeployable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UpdateIndicatorLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FiredShot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Redeployable_C::UpdateIndicatorLight(bool* FiredShot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UpdateIndicatorLight");

	ABP_SentryGun_Redeployable_C_UpdateIndicatorLight_Params params;
	params.FiredShot = FiredShot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ConditionallyEnableShadows
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ConditionallyEnableShadows()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ConditionallyEnableShadows");

	ABP_SentryGun_Redeployable_C_ConditionallyEnableShadows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.GetDeployProgress
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_SentryGun_Redeployable_C::GetDeployProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.GetDeployProgress");

	ABP_SentryGun_Redeployable_C_GetDeployProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ToggleBuildMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InBuilding                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Redeployable_C::ToggleBuildMode(bool* InBuilding)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ToggleBuildMode");

	ABP_SentryGun_Redeployable_C_ToggleBuildMode_Params params;
	params.InBuilding = InBuilding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UserConstructionScript");

	ABP_SentryGun_Redeployable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_SentryGun_Redeployable_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__FinishedFunc");

	ABP_SentryGun_Redeployable_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_SentryGun_Redeployable_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__UpdateFunc");

	ABP_SentryGun_Redeployable_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeploy
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnDeploy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeploy");

	ABP_SentryGun_Redeployable_C_ReceiveOnDeploy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantle
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnDismantle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantle");

	ABP_SentryGun_Redeployable_C_ReceiveOnDismantle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantled
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnDismantled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantled");

	ABP_SentryGun_Redeployable_C_ReceiveOnDismantled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeployed
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnDeployed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeployed");

	ABP_SentryGun_Redeployable_C_ReceiveOnDeployed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Redeployable_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_SentryGun_Redeployable_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Redeployable_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature");

	ABP_SentryGun_Redeployable_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveBeginPlay");

	ABP_SentryGun_Redeployable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnSentryGunOwnerChanged
// (Event, Protected, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnSentryGunOwnerChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnSentryGunOwnerChanged");

	ABP_SentryGun_Redeployable_C_ReceiveOnSentryGunOwnerChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ActivateSpecialAttack
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ActivateSpecialAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ActivateSpecialAttack");

	ABP_SentryGun_Redeployable_C_ActivateSpecialAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Multicast Special Attack GFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::Multicast_Special_Attack_GFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Multicast Special Attack GFX");

	ABP_SentryGun_Redeployable_C_Multicast_Special_Attack_GFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Reset Special Attack
// (BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::Reset_Special_Attack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Reset Special Attack");

	ABP_SentryGun_Redeployable_C_Reset_Special_Attack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UpdateShadows
// (BlueprintCallable, BlueprintEvent)

void ABP_SentryGun_Redeployable_C::UpdateShadows()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UpdateShadows");

	ABP_SentryGun_Redeployable_C_UpdateShadows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_SentryGun_Redeployable_C::BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature");

	ABP_SentryGun_Redeployable_C_BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveAmmoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           currentAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Redeployable_C::ReceiveAmmoChanged(int* Delta, int* currentAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveAmmoChanged");

	ABP_SentryGun_Redeployable_C_ReceiveAmmoChanged_Params params;
	params.Delta = Delta;
	params.currentAmount = currentAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ExecuteUbergraph_BP_SentryGun_Redeployable
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryGun_Redeployable_C::ExecuteUbergraph_BP_SentryGun_Redeployable(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ExecuteUbergraph_BP_SentryGun_Redeployable");

	ABP_SentryGun_Redeployable_C_ExecuteUbergraph_BP_SentryGun_Redeployable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
