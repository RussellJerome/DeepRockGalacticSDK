#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LCD_MissionReadout_Data_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LCD_MissionReadout_Data.LCD_MissionReadout_Data_C.SetGeneratedMission
struct ULCD_MissionReadout_Data_C_SetGeneratedMission_Params
{
	class UGeneratedMission**                          In_Mission;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LCD_MissionReadout_Data.LCD_MissionReadout_Data_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature
struct ULCD_MissionReadout_Data_C_BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature_Params
{
	class UGeneratedMission**                          InMission;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LCD_MissionReadout_Data.LCD_MissionReadout_Data_C.PreConstruct
struct ULCD_MissionReadout_Data_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LCD_MissionReadout_Data.LCD_MissionReadout_Data_C.ExecuteUbergraph_LCD_MissionReadout_Data
struct ULCD_MissionReadout_Data_C_ExecuteUbergraph_LCD_MissionReadout_Data_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
