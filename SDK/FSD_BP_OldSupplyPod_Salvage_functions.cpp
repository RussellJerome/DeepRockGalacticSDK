// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_OldSupplyPod_Salvage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnRep_AllGood
// (BlueprintCallable, BlueprintEvent)

void ABP_OldSupplyPod_Salvage_C::OnRep_AllGood()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnRep_AllGood");

	ABP_OldSupplyPod_Salvage_C_OnRep_AllGood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnRep_RepairFailed
// (BlueprintCallable, BlueprintEvent)

void ABP_OldSupplyPod_Salvage_C::OnRep_RepairFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnRep_RepairFailed");

	ABP_OldSupplyPod_Salvage_C_OnRep_RepairFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.HandleUsableChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    UseCollider                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent** DoorMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::HandleUsableChanged(class UPrimitiveComponent** UseCollider, class USkeletalMeshComponent** DoorMesh, bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.HandleUsableChanged");

	ABP_OldSupplyPod_Salvage_C_HandleUsableChanged_Params params;
	params.UseCollider = UseCollider;
	params.DoorMesh = DoorMesh;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.HealUser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::HealUser(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.HealUser");

	ABP_OldSupplyPod_Salvage_C_HealUser_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.DisableUsable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    Collider                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent** DoorMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::DisableUsable(class UPrimitiveComponent** Collider, class USkeletalMeshComponent** DoorMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.DisableUsable");

	ABP_OldSupplyPod_Salvage_C_DisableUsable_Params params;
	params.Collider = Collider;
	params.DoorMesh = DoorMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.ResupplyUser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::ResupplyUser(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.ResupplyUser");

	ABP_OldSupplyPod_Salvage_C_ResupplyUser_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OldSupplyPod_Salvage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.UserConstructionScript");

	ABP_OldSupplyPod_Salvage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.SupplyUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USingleUsableComponent** Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::SupplyUsed(class APlayerCharacter** user, class USingleUsableComponent** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.SupplyUsed");

	ABP_OldSupplyPod_Salvage_C_SupplyUsed_Params params;
	params.user = user;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.UsableChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    UseCollider                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent** DoorMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::UsableChanged(bool* canUse, class UPrimitiveComponent** UseCollider, class USkeletalMeshComponent** DoorMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.UsableChanged");

	ABP_OldSupplyPod_Salvage_C_UsableChanged_Params params;
	params.canUse = canUse;
	params.UseCollider = UseCollider;
	params.DoorMesh = DoorMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OldSupplyPod_Salvage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.ReceiveBeginPlay");

	ABP_OldSupplyPod_Salvage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           userCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature(int* userCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature_Params params;
	params.userCount = userCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           userCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature(int* userCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature_Params params;
	params.userCount = userCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           userCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature(int* userCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature_Params params;
	params.userCount = userCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           userCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature(int* userCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature_Params params;
	params.userCount = userCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.HandleUserCountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           userCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USingleUsableComponent** Usable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent** Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::HandleUserCountChanged(int* userCount, class USingleUsableComponent** Usable, class USkeletalMeshComponent** Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.HandleUserCountChanged");

	ABP_OldSupplyPod_Salvage_C_HandleUserCountChanged_Params params;
	params.userCount = userCount;
	params.Usable = Usable;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsFalling                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature(bool* IsFalling)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature_Params params;
	params.IsFalling = IsFalling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnDroppodImpact_2
// (BlueprintCallable, BlueprintEvent)

void ABP_OldSupplyPod_Salvage_C::OnDroppodImpact_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnDroppodImpact_2");

	ABP_OldSupplyPod_Salvage_C_OnDroppodImpact_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnTunnelBLocked_2
// (BlueprintCallable, BlueprintEvent)

void ABP_OldSupplyPod_Salvage_C::OnTunnelBLocked_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnTunnelBLocked_2");

	ABP_OldSupplyPod_Salvage_C_OnTunnelBLocked_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable_FixPod_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::BndEvt__SingleUsable_FixPod_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.BndEvt__SingleUsable_FixPod_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature");

	ABP_OldSupplyPod_Salvage_C_BndEvt__SingleUsable_FixPod_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnSupplyPodFixed
// (BlueprintCallable, BlueprintEvent)

void ABP_OldSupplyPod_Salvage_C::OnSupplyPodFixed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.OnSupplyPodFixed");

	ABP_OldSupplyPod_Salvage_C_OnSupplyPodFixed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.ExecuteUbergraph_BP_OldSupplyPod_Salvage
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OldSupplyPod_Salvage_C::ExecuteUbergraph_BP_OldSupplyPod_Salvage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OldSupplyPod_Salvage.BP_OldSupplyPod_Salvage_C.ExecuteUbergraph_BP_OldSupplyPod_Salvage");

	ABP_OldSupplyPod_Salvage_C_ExecuteUbergraph_BP_OldSupplyPod_Salvage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
