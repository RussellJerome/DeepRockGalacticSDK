#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MissionReadOut_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.CanShowMissionType
struct UUI_MissionReadOut_Base_C_CanShowMissionType_Params
{
	class UGeneratedMission**                          InMission;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanShow;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.Construct
struct UUI_MissionReadOut_Base_C_Construct_Params
{
};

// Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.OnGeneratedMissionChanged
struct UUI_MissionReadOut_Base_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.ExecuteUbergraph_UI_MissionReadOut_Base
struct UUI_MissionReadOut_Base_C_ExecuteUbergraph_UI_MissionReadOut_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.OnMissionSelected__DelegateSignature
struct UUI_MissionReadOut_Base_C_OnMissionSelected__DelegateSignature_Params
{
	class UGeneratedMission**                          InMission;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
