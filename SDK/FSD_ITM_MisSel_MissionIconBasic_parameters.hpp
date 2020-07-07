#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_MissionIconBasic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetTemplate
struct UITM_MisSel_MissionIconBasic_C_SetTemplate_Params
{
	class UMissionTemplate**                           Template;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetSelected
struct UITM_MisSel_MissionIconBasic_C_SetSelected_Params
{
	bool*                                              InSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetMission
struct UITM_MisSel_MissionIconBasic_C_SetMission_Params
{
	class UGeneratedMission**                          InMission;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.PreConstruct
struct UITM_MisSel_MissionIconBasic_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetData
struct UITM_MisSel_MissionIconBasic_C_SetData_Params
{
	struct FObjectiveMissionIcon*                      MissionIcon;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic
struct UITM_MisSel_MissionIconBasic_C_ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
