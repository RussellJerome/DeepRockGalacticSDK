#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Flares_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Flares.HUD_Flares_C.CreateIcons
struct UHUD_Flares_C_CreateIcons_Params
{
	int*                                               IconCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Flares.HUD_Flares_C.PreConstruct
struct UHUD_Flares_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Flares.HUD_Flares_C.Construct
struct UHUD_Flares_C_Construct_Params
{
};

// Function HUD_Flares.HUD_Flares_C.OnItemsLoaded
struct UHUD_Flares_C_OnItemsLoaded_Params
{
};

// Function HUD_Flares.HUD_Flares_C.OnFlareProduction
struct UHUD_Flares_C_OnFlareProduction_Params
{
	int*                                               NextIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Flares.HUD_Flares_C.Setup Dynamic HUD
struct UHUD_Flares_C_Setup_Dynamic_HUD_Params
{
};

// Function HUD_Flares.HUD_Flares_C.OnFlareThrown_Event
struct UHUD_Flares_C_OnFlareThrown_Event_Params
{
};

// Function HUD_Flares.HUD_Flares_C.OnFlareCountChanged
struct UHUD_Flares_C_OnFlareCountChanged_Params
{
	int*                                               CurrentCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_Flares.HUD_Flares_C.UpdateVisibility
struct UHUD_Flares_C_UpdateVisibility_Params
{
};

// Function HUD_Flares.HUD_Flares_C.OnLaserPointerPressed
struct UHUD_Flares_C_OnLaserPointerPressed_Params
{
};

// Function HUD_Flares.HUD_Flares_C.OnLaserPointerReleased_Event
struct UHUD_Flares_C_OnLaserPointerReleased_Event_Params
{
};

// Function HUD_Flares.HUD_Flares_C.ExecuteUbergraph_HUD_Flares
struct UHUD_Flares_C_ExecuteUbergraph_HUD_Flares_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
