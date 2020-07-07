#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_MissionIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.SetIcon
struct UITM_MisSel_MissionIcon_C_SetIcon_Params
{
	struct FObjectiveMissionIcon*                      MissionIcon;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.SetData
struct UITM_MisSel_MissionIcon_C_SetData_Params
{
	class UMissionTemplate**                           InMissionTemplate;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.PreConstruct
struct UITM_MisSel_MissionIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.ExecuteUbergraph_ITM_MisSel_MissionIcon
struct UITM_MisSel_MissionIcon_C_ExecuteUbergraph_ITM_MisSel_MissionIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
