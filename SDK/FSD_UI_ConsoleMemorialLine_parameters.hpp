#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_ConsoleMemorialLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.AddBoard
struct UUI_ConsoleMemorialLine_C_AddBoard_Params
{
	class UConsoleScreenMemorialWall_C**               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetSpeed
struct UUI_ConsoleMemorialLine_C_SetSpeed_Params
{
	float*                                             Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetText
struct UUI_ConsoleMemorialLine_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.Construct
struct UUI_ConsoleMemorialLine_C_Construct_Params
{
};

// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.OnMoveFinished
struct UUI_ConsoleMemorialLine_C_OnMoveFinished_Params
{
};

// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.ExecuteUbergraph_UI_ConsoleMemorialLine
struct UUI_ConsoleMemorialLine_C_ExecuteUbergraph_UI_ConsoleMemorialLine_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
