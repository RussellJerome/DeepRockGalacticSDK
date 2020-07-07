// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_GrapplingGun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_GrapplingGun_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetGearStatEntry");

	AWPN_GrapplingGun_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.CalculateRelaseVelocty
// (Public, BlueprintCallable, BlueprintEvent)

void AWPN_GrapplingGun_C::CalculateRelaseVelocty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.CalculateRelaseVelocty");

	AWPN_GrapplingGun_C_CalculateRelaseVelocty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnRep_Pulling
// (BlueprintCallable, BlueprintEvent)

void AWPN_GrapplingGun_C::OnRep_Pulling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnRep_Pulling");

	AWPN_GrapplingGun_C_OnRep_Pulling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform AWPN_GrapplingGun_C::GetCableTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableTransform");

	AWPN_GrapplingGun_C_GetCableTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.SetCableEndPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_GrapplingGun_C::SetCableEndPoint(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.SetCableEndPoint");

	AWPN_GrapplingGun_C_SetCableEndPoint_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableParent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         Muzzle                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWPN_GrapplingGun_C::GetCableParent(class USceneComponent** Muzzle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableParent");

	AWPN_GrapplingGun_C_GetCableParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Muzzle != nullptr)
		*Muzzle = params.Muzzle;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ToggleCable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bNewVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_GrapplingGun_C::ToggleCable(bool* bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ToggleCable");

	AWPN_GrapplingGun_C_ToggleCable_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetAimView
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Forward                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWPN_GrapplingGun_C::GetAimView(struct FVector* Location, struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetAimView");

	AWPN_GrapplingGun_C_GetAimView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Forward != nullptr)
		*Forward = params.Forward;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_GrapplingGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.UserConstructionScript");

	AWPN_GrapplingGun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__FinishedFunc
// (BlueprintEvent)

void AWPN_GrapplingGun_C::ProjectileMovement__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__FinishedFunc");

	AWPN_GrapplingGun_C_ProjectileMovement__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__UpdateFunc
// (BlueprintEvent)

void AWPN_GrapplingGun_C::ProjectileMovement__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__UpdateFunc");

	AWPN_GrapplingGun_C_ProjectileMovement__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_GrapplingGun_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveTick");

	AWPN_GrapplingGun_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.Multicast Shoot
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_GrapplingGun_C::Multicast_Shoot(struct FVector* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.Multicast Shoot");

	AWPN_GrapplingGun_C_Multicast_Shoot_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveStartUsing
// (Event, Protected, BlueprintEvent)

void AWPN_GrapplingGun_C::RecieveStartUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveStartUsing");

	AWPN_GrapplingGun_C_RecieveStartUsing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void AWPN_GrapplingGun_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveUnequipped");

	AWPN_GrapplingGun_C_RecieveUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveStopUsing
// (Event, Protected, BlueprintEvent)

void AWPN_GrapplingGun_C::RecieveStopUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveStopUsing");

	AWPN_GrapplingGun_C_RecieveStopUsing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.Stop Pulling
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AWPN_GrapplingGun_C::Stop_Pulling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.Stop Pulling");

	AWPN_GrapplingGun_C_Stop_Pulling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ServerShoot
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_GrapplingGun_C::ServerShoot(struct FVector* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ServerShoot");

	AWPN_GrapplingGun_C_ServerShoot_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.AddedToInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       ItemOwner                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_GrapplingGun_C::AddedToInventory(class APlayerCharacter** ItemOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.AddedToInventory");

	AWPN_GrapplingGun_C_AddedToInventory_Params params;
	params.ItemOwner = ItemOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_GrapplingGun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveBeginPlay");

	AWPN_GrapplingGun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.Init Character
// (BlueprintCallable, BlueprintEvent)

void AWPN_GrapplingGun_C::Init_Character()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.Init Character");

	AWPN_GrapplingGun_C_Init_Character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHealthComponentBase**   HealthComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWPN_GrapplingGun_C::OnDeath(class UHealthComponentBase** HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnDeath");

	AWPN_GrapplingGun_C_OnDeath_Params params;
	params.HealthComponent = HealthComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveCycledItem
// (Event, Protected, BlueprintEvent)

void AWPN_GrapplingGun_C::RecieveCycledItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveCycledItem");

	AWPN_GrapplingGun_C_RecieveCycledItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.Gunsling
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWPN_GrapplingGun_C::Gunsling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.Gunsling");

	AWPN_GrapplingGun_C_Gunsling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.Try Equip Previous Item
// (BlueprintCallable, BlueprintEvent)

void AWPN_GrapplingGun_C::Try_Equip_Previous_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.Try Equip Previous Item");

	AWPN_GrapplingGun_C_Try_Equip_Previous_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.StopPullingLocal
// (BlueprintCallable, BlueprintEvent)

void AWPN_GrapplingGun_C::StopPullingLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.StopPullingLocal");

	AWPN_GrapplingGun_C_StopPullingLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AWPN_GrapplingGun_C::BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature");

	AWPN_GrapplingGun_C_BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ExecuteUbergraph_WPN_GrapplingGun
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_GrapplingGun_C::ExecuteUbergraph_WPN_GrapplingGun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ExecuteUbergraph_WPN_GrapplingGun");

	AWPN_GrapplingGun_C_ExecuteUbergraph_WPN_GrapplingGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
