#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_FullBiome_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.UpdateMapPan
struct UITM_MisSel_FullBiome_C_UpdateMapPan_Params
{
	struct FVector2D*                                  InPosition;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetRandomFreeMissionSlot
struct UITM_MisSel_FullBiome_C_GetRandomFreeMissionSlot_Params
{
	class UITM_MisSel_MissionMapIcon_C*                Output;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ClearMissions
struct UITM_MisSel_FullBiome_C_ClearMissions_Params
{
};

// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetAllAllMissionSlots
struct UITM_MisSel_FullBiome_C_GetAllAllMissionSlots_Params
{
	TArray<class UITM_MisSel_MissionMapIcon_C*>        Items1;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.Construct
struct UITM_MisSel_FullBiome_C_Construct_Params
{
};

// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.SetData
struct UITM_MisSel_FullBiome_C_SetData_Params
{
	TArray<class UGeneratedMission*>*                  missions;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UBiome**                                     Biome;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.BndEvt__Button_BG_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UITM_MisSel_FullBiome_C_BndEvt__Button_BG_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ExecuteUbergraph_ITM_MisSel_FullBiome
struct UITM_MisSel_FullBiome_C_ExecuteUbergraph_ITM_MisSel_FullBiome_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
