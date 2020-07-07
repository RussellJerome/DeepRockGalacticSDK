#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SetPerk_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cheat_SetPerk.Cheat_SetPerk_C.Construct
struct UCheat_SetPerk_C_Construct_Params
{
};

// Function Cheat_SetPerk.Cheat_SetPerk_C.Set Perk In Row State
struct UCheat_SetPerk_C_Set_Perk_In_Row_State_Params
{
	class UCheat_SetPerk_Row_C**                       Buff_row_to_skip;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Cheat_SetPerk.Cheat_SetPerk_C.ExecuteUbergraph_Cheat_SetPerk
struct UCheat_SetPerk_C_ExecuteUbergraph_Cheat_SetPerk_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
