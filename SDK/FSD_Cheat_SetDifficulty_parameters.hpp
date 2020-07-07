#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SetDifficulty_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cheat_SetDifficulty.Cheat_SetDifficulty_C.Construct
struct UCheat_SetDifficulty_C_Construct_Params
{
};

// Function Cheat_SetDifficulty.Cheat_SetDifficulty_C.Build Difficulty List
struct UCheat_SetDifficulty_C_Build_Difficulty_List_Params
{
};

// Function Cheat_SetDifficulty.Cheat_SetDifficulty_C.On Change diff
struct UCheat_SetDifficulty_C_On_Change_diff_Params
{
};

// Function Cheat_SetDifficulty.Cheat_SetDifficulty_C.ExecuteUbergraph_Cheat_SetDifficulty
struct UCheat_SetDifficulty_C_ExecuteUbergraph_Cheat_SetDifficulty_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
