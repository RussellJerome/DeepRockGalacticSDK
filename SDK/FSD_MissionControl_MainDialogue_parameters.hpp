#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MissionControl_MainDialogue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetPreview
struct UMissionControl_MainDialogue_C_SetPreview_Params
{
	class UDialogDataAsset**                           PreviewShout;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Reset
struct UMissionControl_MainDialogue_C_Reset_Params
{
};

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetProgress
struct UMissionControl_MainDialogue_C_SetProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Finished;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.TickRunningText
struct UMissionControl_MainDialogue_C_TickRunningText_Params
{
};

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.StopRunningText
struct UMissionControl_MainDialogue_C_StopRunningText_Params
{
};

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakEntryManually
struct UMissionControl_MainDialogue_C_SpeakEntryManually_Params
{
	struct FDialogStruct*                              entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakManually
struct UMissionControl_MainDialogue_C_SpeakManually_Params
{
	class UDialogDataAsset**                           MissionShout;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Start Running Text
struct UMissionControl_MainDialogue_C_Start_Running_Text_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShout
struct UMissionControl_MainDialogue_C_OnMissionShout_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Construct
struct UMissionControl_MainDialogue_C_Construct_Params
{
};

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.PreConstruct
struct UMissionControl_MainDialogue_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShoutEnd
struct UMissionControl_MainDialogue_C_OnMissionShoutEnd_Params
{
};

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.ExecuteUbergraph_MissionControl_MainDialogue
struct UMissionControl_MainDialogue_C_ExecuteUbergraph_MissionControl_MainDialogue_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
