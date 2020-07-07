#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__SCREEN_MissionSelectionMK3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ClearServerListMissionRestrictions
struct U_SCREEN_MissionSelectionMK3_C_ClearServerListMissionRestrictions_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnMouseButtonUp
struct U_SCREEN_MissionSelectionMK3_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.UpdateMapPan
struct U_SCREEN_MissionSelectionMK3_C_UpdateMapPan_Params
{
	bool*                                              SnapToMouse;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.CheckForNewZones
struct U_SCREEN_MissionSelectionMK3_C_CheckForNewZones_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetAvailableBiomes
struct U_SCREEN_MissionSelectionMK3_C_GetAvailableBiomes_Params
{
	TArray<class UITM_MisSel_Biome_C*>                 AvailableBiomes1;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMode
struct U_SCREEN_MissionSelectionMK3_C_GetMode_Params
{
	TEnumAsByte<EMissionSelection_Mode>                Mode;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShouldEnableQuickJoin
struct U_SCREEN_MissionSelectionMK3_C_ShouldEnableQuickJoin_Params
{
	bool                                               Show;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.CreateWindows
struct U_SCREEN_MissionSelectionMK3_C_CreateWindows_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.HandleButtonVisibility
struct U_SCREEN_MissionSelectionMK3_C_HandleButtonVisibility_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission_CheckBiome
struct U_SCREEN_MissionSelectionMK3_C_GetMission_CheckBiome_Params
{
	class UGeneratedMission*                           mission;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnKeyUp
struct U_SCREEN_MissionSelectionMK3_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission
struct U_SCREEN_MissionSelectionMK3_C_GetMission_Params
{
	class UGeneratedMission*                           mission;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.IsMissionLocked
struct U_SCREEN_MissionSelectionMK3_C_IsMissionLocked_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetActiveSelectionMode
struct U_SCREEN_MissionSelectionMK3_C_GetActiveSelectionMode_Params
{
	TEnumAsByte<EMissionSelection_Mode>                NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetController
struct U_SCREEN_MissionSelectionMK3_C_GetController_Params
{
	class ABP_PlayerController_SpaceRig_C*             AsBP_Player_Controller_Space_Rig;                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetSRGameMode
struct U_SCREEN_MissionSelectionMK3_C_GetSRGameMode_Params
{
	class ABP_SpaceRig_Gamemode_C*                     AsBP_Space_Rig_Gamemode;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMissionBiome
struct U_SCREEN_MissionSelectionMK3_C_GetMissionBiome_Params
{
	class UBiome**                                     Biome;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UITM_MisSel_Biome_C*                         Array_Element;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnFailure_ED6FBDF64F71976389535788275C482E
struct U_SCREEN_MissionSelectionMK3_C_OnFailure_ED6FBDF64F71976389535788275C482E_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnSuccess_ED6FBDF64F71976389535788275C482E
struct U_SCREEN_MissionSelectionMK3_C_OnSuccess_ED6FBDF64F71976389535788275C482E_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.PreConstruct
struct U_SCREEN_MissionSelectionMK3_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Construct
struct U_SCREEN_MissionSelectionMK3_C_Construct_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__CheckBox_Solo_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature
struct U_SCREEN_MissionSelectionMK3_C_BndEvt__CheckBox_Solo_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeHovered
struct U_SCREEN_MissionSelectionMK3_C_BiomeHovered_Params
{
	class UITM_MisSel_Biome_C**                        Biome;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeSelected
struct U_SCREEN_MissionSelectionMK3_C_BiomeSelected_Params
{
	class UITM_MisSel_Biome_C**                        Biome;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMission
struct U_SCREEN_MissionSelectionMK3_C_ShowMission_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowPlanet
struct U_SCREEN_MissionSelectionMK3_C_ShowPlanet_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionHover
struct U_SCREEN_MissionSelectionMK3_C_MissionHover_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsHovering;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartMission
struct U_SCREEN_MissionSelectionMK3_C_StartMission_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartMission_Event_1
struct U_SCREEN_MissionSelectionMK3_C_OnStartMission_Event_1_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMode
struct U_SCREEN_MissionSelectionMK3_C_ShowMode_Params
{
	TEnumAsByte<EMissionSelection_Mode>*               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Back
struct U_SCREEN_MissionSelectionMK3_C_Back_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowServerBrowser
struct U_SCREEN_MissionSelectionMK3_C_ShowServerBrowser_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct U_SCREEN_MissionSelectionMK3_C_BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct U_SCREEN_MissionSelectionMK3_C_BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.InputSourceChanged
struct U_SCREEN_MissionSelectionMK3_C_InputSourceChanged_Params
{
	EInputSource*                                      InputSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct U_SCREEN_MissionSelectionMK3_C_BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Join
struct U_SCREEN_MissionSelectionMK3_C_Join_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnJoinMission
struct U_SCREEN_MissionSelectionMK3_C_OnJoinMission_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.JoinMission
struct U_SCREEN_MissionSelectionMK3_C_JoinMission_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnShown
struct U_SCREEN_MissionSelectionMK3_C_OnShown_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Tick
struct U_SCREEN_MissionSelectionMK3_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionSelected
struct U_SCREEN_MissionSelectionMK3_C_MissionSelected_Params
{
	class UITM_MisSel_MissionMapIcon_C**               mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Twitch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct U_SCREEN_MissionSelectionMK3_C_BndEvt__BTN_Twitch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartSoloMission
struct U_SCREEN_MissionSelectionMK3_C_StartSoloMission_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnClosed
struct U_SCREEN_MissionSelectionMK3_C_OnClosed_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.DifficultyChanged
struct U_SCREEN_MissionSelectionMK3_C_DifficultyChanged_Params
{
	class UDifficultySetting**                         NewDifficulty;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartupCameraPan
struct U_SCREEN_MissionSelectionMK3_C_StartupCameraPan_Params
{
};

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ExecuteUbergraph__SCREEN_MissionSelectionMK3
struct U_SCREEN_MissionSelectionMK3_C_ExecuteUbergraph__SCREEN_MissionSelectionMK3_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
