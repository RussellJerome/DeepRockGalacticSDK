#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_Jobs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConsoleScreen_Jobs.ConsoleScreen_Jobs_C.Construct
struct UConsoleScreen_Jobs_C_Construct_Params
{
};

// Function ConsoleScreen_Jobs.ConsoleScreen_Jobs_C.PreConstruct
struct UConsoleScreen_Jobs_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_Jobs.ConsoleScreen_Jobs_C.ExecuteUbergraph_ConsoleScreen_Jobs
struct UConsoleScreen_Jobs_C_ExecuteUbergraph_ConsoleScreen_Jobs_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
