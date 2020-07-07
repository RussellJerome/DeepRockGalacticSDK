#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_GiveBeerBuff_Row_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.Set BeerBuff
struct UCheat_GiveBeerBuff_Row_C_Set_BeerBuff_Params
{
	class UTemporaryBuff**                             berr_buff_in;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature
struct UCheat_GiveBeerBuff_Row_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.Check if owned buff is the active buff
struct UCheat_GiveBeerBuff_Row_C_Check_if_owned_buff_is_the_active_buff_Params
{
};

// Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.ExecuteUbergraph_Cheat_GiveBeerBuff_Row
struct UCheat_GiveBeerBuff_Row_C_ExecuteUbergraph_Cheat_GiveBeerBuff_Row_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.On BeerbuffRow checked__DelegateSignature
struct UCheat_GiveBeerBuff_Row_C_On_BeerbuffRow_checked__DelegateSignature_Params
{
	class UCheat_GiveBeerBuff_Row_C**                  Buff_row_to_skip;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
