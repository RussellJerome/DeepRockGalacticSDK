#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreenMemorialWall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetLinesSpeed
struct UConsoleScreenMemorialWall_C_SetLinesSpeed_Params
{
	float*                                             Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.RemoveLine
struct UConsoleScreenMemorialWall_C_RemoveLine_Params
{
	class UUI_ConsoleMemorialLine_C**                  NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetAnimationSpeed
struct UConsoleScreenMemorialWall_C_SetAnimationSpeed_Params
{
	bool*                                              IsFast;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SpawnNewLine
struct UConsoleScreenMemorialWall_C_SpawnNewLine_Params
{
};

// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.GetNameFromRow
struct UConsoleScreenMemorialWall_C_GetNameFromRow_Params
{
	int*                                               Row;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Tick
struct UConsoleScreenMemorialWall_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Construct
struct UConsoleScreenMemorialWall_C_Construct_Params
{
};

// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.ExecuteUbergraph_ConsoleScreenMemorialWall
struct UConsoleScreenMemorialWall_C_ExecuteUbergraph_ConsoleScreenMemorialWall_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
