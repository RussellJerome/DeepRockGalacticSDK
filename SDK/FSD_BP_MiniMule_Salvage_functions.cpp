// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MiniMule_Salvage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.TryDestroyComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent**        Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MiniMule_Salvage_C::TryDestroyComponent(class UActorComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.TryDestroyComponent");

	ABP_MiniMule_Salvage_C_TryDestroyComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GetState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EMiniMule_State>   NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMule_Salvage_C::GetState(TEnumAsByte<EMiniMule_State>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GetState");

	ABP_MiniMule_Salvage_C_GetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMiniMule_State>*  EnumValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMule_Salvage_C::SetState(TEnumAsByte<EMiniMule_State>* EnumValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.SetState");

	ABP_MiniMule_Salvage_C_SetState_Params params;
	params.EnumValue = EnumValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniMule_Salvage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.UserConstructionScript");

	ABP_MiniMule_Salvage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Sphere Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_MiniMule_Salvage_C::Sphere_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Sphere Timeline__FinishedFunc");

	ABP_MiniMule_Salvage_C_Sphere_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Sphere Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_MiniMule_Salvage_C::Sphere_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Sphere Timeline__UpdateFunc");

	ABP_MiniMule_Salvage_C_Sphere_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Intensity__FinishedFunc
// (BlueprintEvent)

void ABP_MiniMule_Salvage_C::Intensity__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Intensity__FinishedFunc");

	ABP_MiniMule_Salvage_C_Intensity__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Intensity__UpdateFunc
// (BlueprintEvent)

void ABP_MiniMule_Salvage_C::Intensity__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Intensity__UpdateFunc");

	ABP_MiniMule_Salvage_C_Intensity__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GotoDropPod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                DroppodLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMule_Salvage_C::GotoDropPod(struct FVector* DroppodLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GotoDropPod");

	ABP_MiniMule_Salvage_C_GotoDropPod_Params params;
	params.DroppodLocation = DroppodLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Cheat_TeleportPlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniMule_Salvage_C::Cheat_TeleportPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Cheat_TeleportPlayer");

	ABP_MiniMule_Salvage_C_Cheat_TeleportPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniMule_Salvage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.ReceiveBeginPlay");

	ABP_MiniMule_Salvage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniMule_Salvage_C::BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniMule_Salvage_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMule_Salvage_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_MiniMule_Salvage_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Stop Beacon
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniMule_Salvage_C::Stop_Beacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Stop Beacon");

	ABP_MiniMule_Salvage_C_Stop_Beacon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Cheat_Repair
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniMule_Salvage_C::Cheat_Repair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Cheat_Repair");

	ABP_MiniMule_Salvage_C_Cheat_Repair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URepairableComponent**   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MiniMule_Salvage_C::BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature(class URepairableComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature");

	ABP_MiniMule_Salvage_C_BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URepairableComponent**   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MiniMule_Salvage_C::BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature(class URepairableComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature");

	ABP_MiniMule_Salvage_C_BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URepairableComponent**   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MiniMule_Salvage_C::BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature(class URepairableComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature");

	ABP_MiniMule_Salvage_C_BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMule_Salvage_C::BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_MiniMule_Salvage_C_BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnMessageAI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  TriggerName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMule_Salvage_C::OnMessageAI(struct FName* TriggerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnMessageAI");

	ABP_MiniMule_Salvage_C_OnMessageAI_Params params;
	params.TriggerName = TriggerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnFallToTerrainStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFalling                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMule_Salvage_C::OnFallToTerrainStateChanged(bool* IsFalling)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnFallToTerrainStateChanged");

	ABP_MiniMule_Salvage_C_OnFallToTerrainStateChanged_Params params;
	params.IsFalling = IsFalling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.ExecuteUbergraph_BP_MiniMule_Salvage
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMule_Salvage_C::ExecuteUbergraph_BP_MiniMule_Salvage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.ExecuteUbergraph_BP_MiniMule_Salvage");

	ABP_MiniMule_Salvage_C_ExecuteUbergraph_BP_MiniMule_Salvage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
