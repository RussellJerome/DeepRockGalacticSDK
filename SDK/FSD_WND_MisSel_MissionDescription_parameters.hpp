#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_MisSel_MissionDescription_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.HandleAssignments
struct UWND_MisSel_MissionDescription_C_HandleAssignments_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDifficultySetting**                         optionalDifficulty;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.SetData
struct UWND_MisSel_MissionDescription_C_SetData_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDifficultySetting**                         Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.PreConstruct
struct UWND_MisSel_MissionDescription_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.BndEvt__Button_MissionInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWND_MisSel_MissionDescription_C_BndEvt__Button_MissionInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.ExecuteUbergraph_WND_MisSel_MissionDescription
struct UWND_MisSel_MissionDescription_C_ExecuteUbergraph_WND_MisSel_MissionDescription_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
