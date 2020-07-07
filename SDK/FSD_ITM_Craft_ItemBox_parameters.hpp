#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Craft_ItemBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.FreeRenderTarget
struct UITM_Craft_ItemBox_C_FreeRenderTarget_Params
{
};

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.CreateResources
struct UITM_Craft_ItemBox_C_CreateResources_Params
{
	TScriptInterface<class UCraftable>*                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCostColor
struct UITM_Craft_ItemBox_C_SetCostColor_Params
{
};

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetRankRequirements
struct UITM_Craft_ItemBox_C_SetRankRequirements_Params
{
};

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetTextAndIcon
struct UITM_Craft_ItemBox_C_SetTextAndIcon_Params
{
};

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCanUnlock
struct UITM_Craft_ItemBox_C_SetCanUnlock_Params
{
};

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetData
struct UITM_Craft_ItemBox_C_SetData_Params
{
	TScriptInterface<class UCraftable>*                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.PreConstruct
struct UITM_Craft_ItemBox_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UITM_Craft_ItemBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UITM_Craft_ItemBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UITM_Craft_ItemBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.Update
struct UITM_Craft_ItemBox_C_Update_Params
{
};

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.ExecuteUbergraph_ITM_Craft_ItemBox
struct UITM_Craft_ItemBox_C_ExecuteUbergraph_ITM_Craft_ItemBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
