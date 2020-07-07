#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LVL_SpaceRig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LVL_SpaceRig.LVL_SpaceRig_C.Set HolidayHalloween Active
struct ALVL_SpaceRig_C_Set_HolidayHalloween_Active_Params
{
	bool*                                              Is_Active;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.Set Beer Event Active
struct ALVL_SpaceRig_C_Set_Beer_Event_Active_Params
{
	bool*                                              Is_Active;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.ReceiveBeginPlay
struct ALVL_SpaceRig_C_ReceiveBeginPlay_Params
{
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.OnLeaveSpacerig_Event_1
struct ALVL_SpaceRig_C_OnLeaveSpacerig_Event_1_Params
{
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
struct ALVL_SpaceRig_C_BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor**                                     OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature
struct ALVL_SpaceRig_C_BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor**                                     OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature
struct ALVL_SpaceRig_C_BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor**                                     OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature
struct ALVL_SpaceRig_C_BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor**                                     OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature
struct ALVL_SpaceRig_C_BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature_Params
{
	class AFSDPlayerController**                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature
struct ALVL_SpaceRig_C_BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature_Params
{
	class AFSDPlayerController**                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature
struct ALVL_SpaceRig_C_BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature_Params
{
	class AFSDPlayerController**                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature
struct ALVL_SpaceRig_C_BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature_Params
{
	class AFSDPlayerController**                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.Play medbay banter
struct ALVL_SpaceRig_C_Play_medbay_banter_Params
{
	class AFSDPlayerController**                       Player_controller;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature
struct ALVL_SpaceRig_C_BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor**                                     OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature
struct ALVL_SpaceRig_C_BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor**                                     OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.OnFreeBeerRewardChanged
struct ALVL_SpaceRig_C_OnFreeBeerRewardChanged_Params
{
	bool*                                              IsBeersFree;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.OnCountdownChanged_Event_1
struct ALVL_SpaceRig_C_OnCountdownChanged_Event_1_Params
{
	bool*                                              active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LVL_SpaceRig.LVL_SpaceRig_C.ExecuteUbergraph_LVL_SpaceRig
struct ALVL_SpaceRig_C_ExecuteUbergraph_LVL_SpaceRig_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
