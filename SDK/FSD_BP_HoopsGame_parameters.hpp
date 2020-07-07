#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_HoopsGame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_HoopsGame.BP_HoopsGame_C.OnRep_Scores
struct ABP_HoopsGame_C_OnRep_Scores_Params
{
};

// Function BP_HoopsGame.BP_HoopsGame_C.GetBarrelScoreData
struct ABP_HoopsGame_C_GetBarrelScoreData_Params
{
	class ABP_Phys_Barrel01_C**                        Barrel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Audio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABP_Phys_Barrel01_C*                         OutBarrel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Points;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoopsGame.BP_HoopsGame_C.OnRep_ComboMultiplier
struct ABP_HoopsGame_C_OnRep_ComboMultiplier_Params
{
};

// Function BP_HoopsGame.BP_HoopsGame_C.OnRep_CurrentScore
struct ABP_HoopsGame_C_OnRep_CurrentScore_Params
{
};

// Function BP_HoopsGame.BP_HoopsGame_C.ReceiveBeginPlay
struct ABP_HoopsGame_C_ReceiveBeginPlay_Params
{
};

// Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_HoopsGame_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_HoopsGame.BP_HoopsGame_C.Restart
struct ABP_HoopsGame_C_Restart_Params
{
};

// Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature
struct ABP_HoopsGame_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoopsGame.BP_HoopsGame_C.StoreScore
struct ABP_HoopsGame_C_StoreScore_Params
{
	int*                                               NewScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__FailCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_HoopsGame_C_BndEvt__FailCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_HoopsGame.BP_HoopsGame_C.ChangeDirection
struct ABP_HoopsGame_C_ChangeDirection_Params
{
	bool*                                              RightMovement;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoopsGame.BP_HoopsGame_C.Cheat_ToggleHoopGameMovement
struct ABP_HoopsGame_C_Cheat_ToggleHoopGameMovement_Params
{
};

// Function BP_HoopsGame.BP_HoopsGame_C.Set Latest Barrel kicker
struct ABP_HoopsGame_C_Set_Latest_Barrel_kicker_Params
{
	class APlayerCharacter**                           Kicked_by;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoopsGame.BP_HoopsGame_C.On Barrel In Hoop
struct ABP_HoopsGame_C_On_Barrel_In_Hoop_Params
{
	class ABP_Phys_Barrel01_C**                        Barrel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoopsGame.BP_HoopsGame_C.On Barglass In Hoop
struct ABP_HoopsGame_C_On_Barglass_In_Hoop_Params
{
	class ABar_Glass_Physics_C**                       Glass;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoopsGame.BP_HoopsGame_C.On Player In Hoop
struct ABP_HoopsGame_C_On_Player_In_Hoop_Params
{
	class ABP_PlayerCharacter_C**                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoopsGame.BP_HoopsGame_C.ExecuteUbergraph_BP_HoopsGame
struct ABP_HoopsGame_C_ExecuteUbergraph_BP_HoopsGame_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
