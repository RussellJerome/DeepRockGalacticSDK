#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_AvailablePerkPoints_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.CountPerkPoints
struct UUI_AvailablePerkPoints_C_CountPerkPoints_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.SetPerkPointsText
struct UUI_AvailablePerkPoints_C_SetPerkPointsText_Params
{
	int*                                               Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.PreConstruct
struct UUI_AvailablePerkPoints_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.Construct
struct UUI_AvailablePerkPoints_C_Construct_Params
{
};

// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.OnPerkPointsChanged
struct UUI_AvailablePerkPoints_C_OnPerkPointsChanged_Params
{
	int*                                               PerkPoints;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Change;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.Tick
struct UUI_AvailablePerkPoints_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.OnPingAnimFinished
struct UUI_AvailablePerkPoints_C_OnPingAnimFinished_Params
{
};

// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.ExecuteUbergraph_UI_AvailablePerkPoints
struct UUI_AvailablePerkPoints_C_ExecuteUbergraph_UI_AvailablePerkPoints_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
