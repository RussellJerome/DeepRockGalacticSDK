#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_Container_Text_W_Image_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.PreConstruct
struct ULore_Container_Text_W_Image_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.AddItem
struct ULore_Container_Text_W_Image_C_AddItem_Params
{
	class UWidget**                                    Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>*                 InHorizontalAlignment;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>*                   InVerticalAlignment;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMargin*                                    InPadding;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateSizeRule>*                       Size_Rule;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.SetData
struct ULore_Container_Text_W_Image_C_SetData_Params
{
	class UMinersManualData**                          Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.Refresh
struct ULore_Container_Text_W_Image_C_Refresh_Params
{
};

// Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.ExecuteUbergraph_Lore_Container_Text_W_Image
struct ULore_Container_Text_W_Image_C_ExecuteUbergraph_Lore_Container_Text_W_Image_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
