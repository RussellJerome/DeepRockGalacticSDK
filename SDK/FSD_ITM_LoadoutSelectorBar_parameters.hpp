#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_LoadoutSelectorBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.GetToolTipWidget
struct UITM_LoadoutSelectorBar_C_GetToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetData
struct UITM_LoadoutSelectorBar_C_SetData_Params
{
	class UClass**                                     CharacterClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetSelected
struct UITM_LoadoutSelectorBar_C_SetSelected_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
	class UITM_LoadoutSelectButton_C**                 Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
	class UITM_LoadoutSelectButton_C**                 Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
	class UITM_LoadoutSelectButton_C**                 Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature
struct UITM_LoadoutSelectorBar_C_BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ImageIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SelectPressed
struct UITM_LoadoutSelectorBar_C_SelectPressed_Params
{
	class UITM_LoadoutSelectButton_C**                 Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetLoadoutIcon
struct UITM_LoadoutSelectorBar_C_SetLoadoutIcon_Params
{
	class UITM_LoadoutSelectButton_C**                 Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.RefreshLoadout
struct UITM_LoadoutSelectorBar_C_RefreshLoadout_Params
{
};

// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetSelectorVisible
struct UITM_LoadoutSelectorBar_C_SetSelectorVisible_Params
{
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.ExecuteUbergraph_ITM_LoadoutSelectorBar
struct UITM_LoadoutSelectorBar_C_ExecuteUbergraph_ITM_LoadoutSelectorBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.NewLoadoutSelected__DelegateSignature
struct UITM_LoadoutSelectorBar_C_NewLoadoutSelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
