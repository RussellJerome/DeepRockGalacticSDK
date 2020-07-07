#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_FlareIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_FlareIcon.HUD_FlareIcon_C.SetProgress
struct UHUD_FlareIcon_C_SetProgress_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_FlareIcon.HUD_FlareIcon_C.Init
struct UHUD_FlareIcon_C_Init_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_FlareIcon.HUD_FlareIcon_C.OnFlareCountChanged
struct UHUD_FlareIcon_C_OnFlareCountChanged_Params
{
	int*                                               CurrentCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_FlareIcon.HUD_FlareIcon_C.PreConstruct
struct UHUD_FlareIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_FlareIcon.HUD_FlareIcon_C.On Flare Production Finished
struct UHUD_FlareIcon_C_On_Flare_Production_Finished_Params
{
};

// Function HUD_FlareIcon.HUD_FlareIcon_C.ExecuteUbergraph_HUD_FlareIcon
struct UHUD_FlareIcon_C_ExecuteUbergraph_HUD_FlareIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
