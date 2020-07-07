#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SetDifficultyRow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.Set Difficulty Item
struct UCheat_SetDifficultyRow_C_Set_Difficulty_Item_Params
{
	class UDifficultySetting**                         Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.Check if owned difficulty is active
struct UCheat_SetDifficultyRow_C_Check_if_owned_difficulty_is_active_Params
{
};

// Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.BndEvt__CheckBox_SelectDiff_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
struct UCheat_SetDifficultyRow_C_BndEvt__CheckBox_SelectDiff_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.ExecuteUbergraph_Cheat_SetDifficultyRow
struct UCheat_SetDifficultyRow_C_ExecuteUbergraph_Cheat_SetDifficultyRow_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.On Difficulty Selected__DelegateSignature
struct UCheat_SetDifficultyRow_C_On_Difficulty_Selected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
