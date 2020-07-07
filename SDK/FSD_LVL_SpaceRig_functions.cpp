// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LVL_SpaceRig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LVL_SpaceRig.LVL_SpaceRig_C.Set HolidayHalloween Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Active                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::Set_HolidayHalloween_Active(bool* Is_Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.Set HolidayHalloween Active");

	ALVL_SpaceRig_C_Set_HolidayHalloween_Active_Params params;
	params.Is_Active = Is_Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.Set Beer Event Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Active                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::Set_Beer_Event_Active(bool* Is_Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.Set Beer Event Active");

	ALVL_SpaceRig_C_Set_Beer_Event_Active_Params params;
	params.Is_Active = Is_Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALVL_SpaceRig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.ReceiveBeginPlay");

	ALVL_SpaceRig_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.OnLeaveSpacerig_Event_1
// (BlueprintCallable, BlueprintEvent)

void ALVL_SpaceRig_C::OnLeaveSpacerig_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.OnLeaveSpacerig_Event_1");

	ALVL_SpaceRig_C_OnLeaveSpacerig_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature");

	ALVL_SpaceRig_C_BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature");

	ALVL_SpaceRig_C_BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature");

	ALVL_SpaceRig_C_BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature");

	ALVL_SpaceRig_C_BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFSDPlayerController**   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature");

	ALVL_SpaceRig_C_BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFSDPlayerController**   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature");

	ALVL_SpaceRig_C_BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFSDPlayerController**   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature");

	ALVL_SpaceRig_C_BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFSDPlayerController**   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature");

	ALVL_SpaceRig_C_BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.Play medbay banter
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerController**   Player_controller              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::Play_medbay_banter(class AFSDPlayerController** Player_controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.Play medbay banter");

	ALVL_SpaceRig_C_Play_medbay_banter_Params params;
	params.Player_controller = Player_controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature");

	ALVL_SpaceRig_C_BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature");

	ALVL_SpaceRig_C_BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.OnFreeBeerRewardChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsBeersFree                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::OnFreeBeerRewardChanged(bool* IsBeersFree)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.OnFreeBeerRewardChanged");

	ALVL_SpaceRig_C_OnFreeBeerRewardChanged_Params params;
	params.IsBeersFree = IsBeersFree;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.OnCountdownChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::OnCountdownChanged_Event_1(bool* active)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.OnCountdownChanged_Event_1");

	ALVL_SpaceRig_C_OnCountdownChanged_Event_1_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LVL_SpaceRig.LVL_SpaceRig_C.ExecuteUbergraph_LVL_SpaceRig
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALVL_SpaceRig_C::ExecuteUbergraph_LVL_SpaceRig(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_SpaceRig.LVL_SpaceRig_C.ExecuteUbergraph_LVL_SpaceRig");

	ALVL_SpaceRig_C_ExecuteUbergraph_LVL_SpaceRig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
