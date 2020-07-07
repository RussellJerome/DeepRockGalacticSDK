// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SupplyPod_Ammo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandlePhotosentitivity
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SupplyPod_Ammo_C::HandlePhotosentitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandlePhotosentitivity");

	ABP_SupplyPod_Ammo_C_HandlePhotosentitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUsableChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    UseCollider                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent** DoorMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::HandleUsableChanged(class UPrimitiveComponent** UseCollider, class USkeletalMeshComponent** DoorMesh, bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUsableChanged");

	ABP_SupplyPod_Ammo_C_HandleUsableChanged_Params params;
	params.UseCollider = UseCollider;
	params.DoorMesh = DoorMesh;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HealUser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::HealUser(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HealUser");

	ABP_SupplyPod_Ammo_C_HealUser_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.DisableUsable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    Collider                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent** DoorMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::DisableUsable(class UPrimitiveComponent** Collider, class USkeletalMeshComponent** DoorMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.DisableUsable");

	ABP_SupplyPod_Ammo_C_DisableUsable_Params params;
	params.Collider = Collider;
	params.DoorMesh = DoorMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ResupplyUser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::ResupplyUser(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ResupplyUser");

	ABP_SupplyPod_Ammo_C_ResupplyUser_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SupplyPod_Ammo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UserConstructionScript");

	ABP_SupplyPod_Ammo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDroppodImpact
// (Event, Protected, BlueprintEvent)

void ABP_SupplyPod_Ammo_C::OnDroppodImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDroppodImpact");

	ABP_SupplyPod_Ammo_C_OnDroppodImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDropStarted
// (Event, Protected, BlueprintEvent)

void ABP_SupplyPod_Ammo_C::OnDropStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDropStarted");

	ABP_SupplyPod_Ammo_C_OnDropStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveTick");

	ABP_SupplyPod_Ammo_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");

	ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature");

	ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature");

	ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature");

	ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature");

	ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature");

	ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature");

	ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature");

	ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnTunnelBLocked
// (Event, Protected, BlueprintEvent)

void ABP_SupplyPod_Ammo_C::OnTunnelBLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnTunnelBLocked");

	ABP_SupplyPod_Ammo_C_OnTunnelBLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.SupplyUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USingleUsableComponent** Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::SupplyUsed(class APlayerCharacter** user, class USingleUsableComponent** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.SupplyUsed");

	ABP_SupplyPod_Ammo_C_SupplyUsed_Params params;
	params.user = user;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UsableChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    UseCollider                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent** DoorMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::UsableChanged(bool* canUse, class UPrimitiveComponent** UseCollider, class USkeletalMeshComponent** DoorMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UsableChanged");

	ABP_SupplyPod_Ammo_C_UsableChanged_Params params;
	params.canUse = canUse;
	params.UseCollider = UseCollider;
	params.DoorMesh = DoorMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature");

	ABP_SupplyPod_Ammo_C_BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SupplyPod_Ammo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveBeginPlay");

	ABP_SupplyPod_Ammo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           userCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature(int* userCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature");

	ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature_Params params;
	params.userCount = userCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           userCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature(int* userCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature");

	ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature_Params params;
	params.userCount = userCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           userCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature(int* userCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature");

	ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature_Params params;
	params.userCount = userCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           userCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature(int* userCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature");

	ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature_Params params;
	params.userCount = userCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUserCountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           userCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USingleUsableComponent** Usable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent** Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::HandleUserCountChanged(int* userCount, class USingleUsableComponent** Usable, class USkeletalMeshComponent** Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUserCountChanged");

	ABP_SupplyPod_Ammo_C_HandleUserCountChanged_Params params;
	params.userCount = userCount;
	params.Usable = Usable;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsFalling                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature(bool* IsFalling)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature");

	ABP_SupplyPod_Ammo_C_BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature_Params params;
	params.IsFalling = IsFalling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ExecuteUbergraph_BP_SupplyPod_Ammo
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Ammo_C::ExecuteUbergraph_BP_SupplyPod_Ammo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ExecuteUbergraph_BP_SupplyPod_Ammo");

	ABP_SupplyPod_Ammo_C_ExecuteUbergraph_BP_SupplyPod_Ammo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
