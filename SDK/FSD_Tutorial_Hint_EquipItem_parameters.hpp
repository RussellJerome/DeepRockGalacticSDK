#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_EquipItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ReceiveOnInitialized
struct UTutorial_Hint_EquipItem_C_ReceiveOnInitialized_Params
{
};

// Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ItemEquipped
struct UTutorial_Hint_EquipItem_C_ItemEquipped_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ReceiveOnHidden
struct UTutorial_Hint_EquipItem_C_ReceiveOnHidden_Params
{
};

// Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ExecuteUbergraph_Tutorial_Hint_EquipItem
struct UTutorial_Hint_EquipItem_C_ExecuteUbergraph_Tutorial_Hint_EquipItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
