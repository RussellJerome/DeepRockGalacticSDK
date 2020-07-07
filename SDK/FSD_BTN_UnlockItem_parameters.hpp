#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BTN_UnlockItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTN_UnlockItem.BTN_UnlockItem_C.SetData
struct UBTN_UnlockItem_C_SetData_Params
{
	TScriptInterface<class UCraftable>*                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTN_UnlockItem.BTN_UnlockItem_C.PreConstruct
struct UBTN_UnlockItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTN_UnlockItem.BTN_UnlockItem_C.ExecuteUbergraph_BTN_UnlockItem
struct UBTN_UnlockItem_C_ExecuteUbergraph_BTN_UnlockItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
