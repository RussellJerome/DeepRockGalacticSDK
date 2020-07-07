#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Itembar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Itembar.HUD_Itembar_C.OnItemAdded
struct UHUD_Itembar_C_OnItemAdded_Params
{
	class UItemsBarIcon**                              ItemIcon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_Itembar.HUD_Itembar_C.OnClear
struct UHUD_Itembar_C_OnClear_Params
{
};

// Function HUD_Itembar.HUD_Itembar_C.Construct
struct UHUD_Itembar_C_Construct_Params
{
};

// Function HUD_Itembar.HUD_Itembar_C.OnItemEquipped
struct UHUD_Itembar_C_OnItemEquipped_Params
{
	class UItemsBarIcon**                              ItemIcon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_Itembar.HUD_Itembar_C.Show
struct UHUD_Itembar_C_Show_Params
{
};

// Function HUD_Itembar.HUD_Itembar_C.OnInputSourceChanged
struct UHUD_Itembar_C_OnInputSourceChanged_Params
{
	EInputSource*                                      InputSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Itembar.HUD_Itembar_C.OnItemClicked
struct UHUD_Itembar_C_OnItemClicked_Params
{
};

// Function HUD_Itembar.HUD_Itembar_C.PreConstruct
struct UHUD_Itembar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Itembar.HUD_Itembar_C.FadeOutFinished
struct UHUD_Itembar_C_FadeOutFinished_Params
{
};

// Function HUD_Itembar.HUD_Itembar_C.ExecuteUbergraph_HUD_Itembar
struct UHUD_Itembar_C_ExecuteUbergraph_HUD_Itembar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
