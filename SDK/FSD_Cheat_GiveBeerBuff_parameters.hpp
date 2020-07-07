#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_GiveBeerBuff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cheat_GiveBeerBuff.Cheat_GiveBeerBuff_C.Construct
struct UCheat_GiveBeerBuff_C_Construct_Params
{
};

// Function Cheat_GiveBeerBuff.Cheat_GiveBeerBuff_C.set selected row active
struct UCheat_GiveBeerBuff_C_set_selected_row_active_Params
{
	class UCheat_GiveBeerBuff_Row_C**                  Buff_row_to_skip;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Cheat_GiveBeerBuff.Cheat_GiveBeerBuff_C.ExecuteUbergraph_Cheat_GiveBeerBuff
struct UCheat_GiveBeerBuff_C_ExecuteUbergraph_Cheat_GiveBeerBuff_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
