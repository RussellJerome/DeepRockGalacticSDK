#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_Biome_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetSoundCoordinate
struct UITM_MisSel_Biome_C_GetSoundCoordinate_Params
{
	struct FVector                                     SoundWorldPos;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetCampaignVisiblity
struct UITM_MisSel_Biome_C_SetCampaignVisiblity_Params
{
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.IsUnlocked
struct UITM_MisSel_Biome_C_IsUnlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.CreateMissionIcons
struct UITM_MisSel_Biome_C_CreateMissionIcons_Params
{
	TArray<class UGeneratedMission*>                   Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.HasMissions
struct UITM_MisSel_Biome_C_HasMissions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetController
struct UITM_MisSel_Biome_C_GetController_Params
{
	class ABP_PlayerController_SpaceRig_C*             AsBP_Player_Controller_Space_Rig;                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SortMissions
struct UITM_MisSel_Biome_C_SortMissions_Params
{
	TArray<class UGeneratedMission*>                   missions;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<class UMissionTemplate*, int>                 MissionCount1;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetMissionsForBiome
struct UITM_MisSel_Biome_C_GetMissionsForBiome_Params
{
	TArray<class UGeneratedMission*>                   Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UGeneratedMission*>                   missions;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Unselect
struct UITM_MisSel_Biome_C_Unselect_Params
{
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Select
struct UITM_MisSel_Biome_C_Select_Params
{
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.PreConstruct
struct UITM_MisSel_Biome_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UITM_MisSel_Biome_C_BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature
struct UITM_MisSel_Biome_C_BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetData
struct UITM_MisSel_Biome_C_SetData_Params
{
	TArray<class UGeneratedMission*>*                  missions;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              IsNewBiome;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               BiomeIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UITM_MisSel_Biome_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Tick
struct UITM_MisSel_Biome_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ShowUnlockZone
struct UITM_MisSel_Biome_C_ShowUnlockZone_Params
{
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ExecuteUbergraph_ITM_MisSel_Biome
struct UITM_MisSel_Biome_C_ExecuteUbergraph_ITM_MisSel_Biome_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BiomeSelected__DelegateSignature
struct UITM_MisSel_Biome_C_BiomeSelected__DelegateSignature_Params
{
	class UITM_MisSel_Biome_C**                        Biome;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
