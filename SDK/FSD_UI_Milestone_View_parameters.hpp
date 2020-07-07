#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Milestone_View_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Milestone_View.UI_Milestone_View_C.Update Has Claimable State
struct UUI_Milestone_View_C_Update_Has_Claimable_State_Params
{
};

// Function UI_Milestone_View.UI_Milestone_View_C.Construct
struct UUI_Milestone_View_C_Construct_Params
{
};

// Function UI_Milestone_View.UI_Milestone_View_C.BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature
struct UUI_Milestone_View_C_BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature_Params
{
};

// Function UI_Milestone_View.UI_Milestone_View_C.Init Milestone Widget
struct UUI_Milestone_View_C_Init_Milestone_Widget_Params
{
	class UUI_Milestone_Item_C**                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Milestone_View.UI_Milestone_View_C.OnItemClaimableChanged_Event
struct UUI_Milestone_View_C_OnItemClaimableChanged_Event_Params
{
	class UUI_Milestone_Item_C**                       Milestone_Item;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Milestone_View.UI_Milestone_View_C.Refresh
struct UUI_Milestone_View_C_Refresh_Params
{
};

// Function UI_Milestone_View.UI_Milestone_View_C.ExecuteUbergraph_UI_Milestone_View
struct UUI_Milestone_View_C_ExecuteUbergraph_UI_Milestone_View_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Milestone_View.UI_Milestone_View_C.OnHasClaimableChanged__DelegateSignature
struct UUI_Milestone_View_C_OnHasClaimableChanged__DelegateSignature_Params
{
	bool*                                              HasClaimable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
