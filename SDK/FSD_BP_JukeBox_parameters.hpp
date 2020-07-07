#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_JukeBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_JukeBox.BP_JukeBox_C.PayCredits
struct ABP_JukeBox_C_PayCredits_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Purchased;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JukeBox.BP_JukeBox_C.OnRep_MusicIndex
struct ABP_JukeBox_C_OnRep_MusicIndex_Params
{
};

// Function BP_JukeBox.BP_JukeBox_C.Timeline_0__FinishedFunc
struct ABP_JukeBox_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_JukeBox.BP_JukeBox_C.Timeline_0__UpdateFunc
struct ABP_JukeBox_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_JukeBox.BP_JukeBox_C.OnLoaded_C15A19DC4718016F57823CA232EE5860
struct ABP_JukeBox_C_OnLoaded_C15A19DC4718016F57823CA232EE5860_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JukeBox.BP_JukeBox_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct ABP_JukeBox_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JukeBox.BP_JukeBox_C.ReceiveBeginPlay
struct ABP_JukeBox_C_ReceiveBeginPlay_Params
{
};

// Function BP_JukeBox.BP_JukeBox_C.ToggleSpeakerRocking
struct ABP_JukeBox_C_ToggleSpeakerRocking_Params
{
};

// Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_JukeBox_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_JukeBox_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JukeBox.BP_JukeBox_C.LoadAndPlay
struct ABP_JukeBox_C_LoadAndPlay_Params
{
	TSoftObjectPtr<class USoundBase>*                  Music;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_JukeBox.BP_JukeBox_C.Stop Juke Box
struct ABP_JukeBox_C_Stop_Juke_Box_Params
{
};

// Function BP_JukeBox.BP_JukeBox_C.CheckPartyTimeAchievement
struct ABP_JukeBox_C_CheckPartyTimeAchievement_Params
{
};

// Function BP_JukeBox.BP_JukeBox_C.StopJukebox
struct ABP_JukeBox_C_StopJukebox_Params
{
};

// Function BP_JukeBox.BP_JukeBox_C.ExecuteUbergraph_BP_JukeBox
struct ABP_JukeBox_C_ExecuteUbergraph_BP_JukeBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
