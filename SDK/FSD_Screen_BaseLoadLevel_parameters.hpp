#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Screen_BaseLoadLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.StartLoadSeq
struct UScreen_BaseLoadLevel_C_StartLoadSeq_Params
{
};

// Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.StopLoader
struct UScreen_BaseLoadLevel_C_StopLoader_Params
{
};

// Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.ExecuteUbergraph_Screen_BaseLoadLevel
struct UScreen_BaseLoadLevel_C_ExecuteUbergraph_Screen_BaseLoadLevel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
