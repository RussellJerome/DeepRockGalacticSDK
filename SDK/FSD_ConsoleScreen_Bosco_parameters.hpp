#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_Bosco_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.Construct
struct UConsoleScreen_Bosco_C_Construct_Params
{
};

// Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.PreConstruct
struct UConsoleScreen_Bosco_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.ExecuteUbergraph_ConsoleScreen_Bosco
struct UConsoleScreen_Bosco_C_ExecuteUbergraph_ConsoleScreen_Bosco_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
