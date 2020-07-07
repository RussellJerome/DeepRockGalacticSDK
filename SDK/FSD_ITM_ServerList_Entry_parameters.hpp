#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ServerList_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionNameWidth
struct UITM_ServerList_Entry_C_SetMissionNameWidth_Params
{
	float*                                             Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetVisibleElements
struct UITM_ServerList_Entry_C_SetVisibleElements_Params
{
	bool*                                              InShowComplexity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InShowDifficulty;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InShowLength;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InShowTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InShowWarningsAndMutators;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.GetMissionToolTip
struct UITM_ServerList_Entry_C_GetMissionToolTip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetColumnWidths
struct UITM_ServerList_Entry_C_SetColumnWidths_Params
{
	TArray<float>                                      InWidths;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ToggleMissionDetails
struct UITM_ServerList_Entry_C_ToggleMissionDetails_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetNoMission
struct UITM_ServerList_Entry_C_SetNoMission_Params
{
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetBiomeIcon
struct UITM_ServerList_Entry_C_SetBiomeIcon_Params
{
	class UBiome**                                     Biome;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionMutator
struct UITM_ServerList_Entry_C_SetMissionMutator_Params
{
	class UMissionMutator**                            Mutator;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionWarning
struct UITM_ServerList_Entry_C_SetMissionWarning_Params
{
	class UMissionWarning**                            Warning;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.UpdateMissionTime
struct UITM_ServerList_Entry_C_UpdateMissionTime_Params
{
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetSession
struct UITM_ServerList_Entry_C_SetSession_Params
{
	struct FBlueprintSessionResult*                    Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.Construct
struct UITM_ServerList_Entry_C_Construct_Params
{
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UITM_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.CustomEvent_1
struct UITM_ServerList_Entry_C_CustomEvent_1_Params
{
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.PreConstruct
struct UITM_ServerList_Entry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UITM_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UITM_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ExecuteUbergraph_ITM_ServerList_Entry
struct UITM_ServerList_Entry_C_ExecuteUbergraph_ITM_ServerList_Entry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.JoinServer__DelegateSignature
struct UITM_ServerList_Entry_C_JoinServer__DelegateSignature_Params
{
	struct FBlueprintSessionResult*                    Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
