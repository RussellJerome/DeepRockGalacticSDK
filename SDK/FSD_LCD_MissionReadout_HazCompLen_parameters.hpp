#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LCD_MissionReadout_HazCompLen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustCLBar
struct ULCD_MissionReadout_HazCompLen_C_AdjustCLBar_Params
{
	float*                                             InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustBar
struct ULCD_MissionReadout_HazCompLen_C_AdjustBar_Params
{
	float*                                             InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.SetGeneratedMission
struct ULCD_MissionReadout_HazCompLen_C_SetGeneratedMission_Params
{
	class UGeneratedMission**                          In_Mission;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.Tick
struct ULCD_MissionReadout_HazCompLen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature
struct ULCD_MissionReadout_HazCompLen_C_BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature_Params
{
	class UGeneratedMission**                          InMission;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.ExecuteUbergraph_LCD_MissionReadout_HazCompLen
struct ULCD_MissionReadout_HazCompLen_C_ExecuteUbergraph_LCD_MissionReadout_HazCompLen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
