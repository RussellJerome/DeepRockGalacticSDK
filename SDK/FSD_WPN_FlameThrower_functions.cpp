// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_FlameThrower_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_GetTPAnimationEventMesh
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UStaticMeshComponent* AWPN_FlameThrower_C::Receive_GetTPAnimationEventMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_GetTPAnimationEventMesh");

	AWPN_FlameThrower_C_Receive_GetTPAnimationEventMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_GetFPAnimationEventMesh
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFirstPersonStaticMeshComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFirstPersonStaticMeshComponent* AWPN_FlameThrower_C::Receive_GetFPAnimationEventMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_GetFPAnimationEventMesh");

	AWPN_FlameThrower_C_Receive_GetFPAnimationEventMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_FlameThrower_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.GetGearStatEntry");

	AWPN_FlameThrower_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_FlameThrower_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.UserConstructionScript");

	AWPN_FlameThrower_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_FlameThrower_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.ReceiveBeginPlay");

	AWPN_FlameThrower_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AWPN_FlameThrower_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveEquipped");

	AWPN_FlameThrower_C_RecieveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void AWPN_FlameThrower_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveUnequipped");

	AWPN_FlameThrower_C_RecieveUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadBegin
// (Event, Public, BlueprintEvent)

void AWPN_FlameThrower_C::Receive_ReloadBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadBegin");

	AWPN_FlameThrower_C_Receive_ReloadBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadEnd
// (Event, Public, BlueprintEvent)

void AWPN_FlameThrower_C::Receive_ReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadEnd");

	AWPN_FlameThrower_C_Receive_ReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.Recieve_UpdateMeshses
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          IsFirstPerson                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_FlameThrower_C::Recieve_UpdateMeshses(bool* IsFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.Recieve_UpdateMeshses");

	AWPN_FlameThrower_C_Recieve_UpdateMeshses_Params params;
	params.IsFirstPerson = IsFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.AddedToInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       ItemOwner                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_FlameThrower_C::AddedToInventory(class APlayerCharacter** ItemOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.AddedToInventory");

	AWPN_FlameThrower_C_AddedToInventory_Params params;
	params.ItemOwner = ItemOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
// (BlueprintEvent)

void AWPN_FlameThrower_C::BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature");

	AWPN_FlameThrower_C_BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.OnSkinChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkinEffect**            Skin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_FlameThrower_C::OnSkinChanged(class USkinEffect** Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.OnSkinChanged");

	AWPN_FlameThrower_C_OnSkinChanged_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.ExecuteUbergraph_WPN_FlameThrower
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_FlameThrower_C::ExecuteUbergraph_WPN_FlameThrower(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.ExecuteUbergraph_WPN_FlameThrower");

	AWPN_FlameThrower_C_ExecuteUbergraph_WPN_FlameThrower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
