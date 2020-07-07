#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_OrderMenu_Preview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.PreConstruct
struct UUI_Bar_OrderMenu_Preview_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Set Preview Item
struct UUI_Bar_OrderMenu_Preview_C_Set_Preview_Item_Params
{
	class USpaceRigBarMenuItem**                       currentItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Construct
struct UUI_Bar_OrderMenu_Preview_C_Construct_Params
{
};

// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade In
struct UUI_Bar_OrderMenu_Preview_C_Fade_In_Params
{
};

// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade Out
struct UUI_Bar_OrderMenu_Preview_C_Fade_Out_Params
{
};

// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.FadeOutFinished
struct UUI_Bar_OrderMenu_Preview_C_FadeOutFinished_Params
{
};

// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.ExecuteUbergraph_UI_Bar_OrderMenu_Preview
struct UUI_Bar_OrderMenu_Preview_C_ExecuteUbergraph_UI_Bar_OrderMenu_Preview_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.OnPreviewItemChanged__DelegateSignature
struct UUI_Bar_OrderMenu_Preview_C_OnPreviewItemChanged__DelegateSignature_Params
{
	class USpaceRigBarMenuItem**                       Previous_Item;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpaceRigBarMenuItem**                       New_Item;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
