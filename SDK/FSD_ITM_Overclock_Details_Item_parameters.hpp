#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Overclock_Details_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.SetFontSize
struct UITM_Overclock_Details_Item_C_SetFontSize_Params
{
	int*                                               NewSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.SetData
struct UITM_Overclock_Details_Item_C_SetData_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              InIsAdvantagous;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.PreConstruct
struct UITM_Overclock_Details_Item_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.ExecuteUbergraph_ITM_Overclock_Details_Item
struct UITM_Overclock_Details_Item_C_ExecuteUbergraph_ITM_Overclock_Details_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
