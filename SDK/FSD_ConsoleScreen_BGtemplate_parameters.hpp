#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_BGtemplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetTextSize
struct UConsoleScreen_BGtemplate_C_SetTextSize_Params
{
	int*                                               TextSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetHeaderBars
struct UConsoleScreen_BGtemplate_C_SetHeaderBars_Params
{
	bool*                                              Toggle_Header_Bars;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetNotificationVisible
struct UConsoleScreen_BGtemplate_C_SetNotificationVisible_Params
{
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetNotification
struct UConsoleScreen_BGtemplate_C_SetNotification_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 InIcon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetText
struct UConsoleScreen_BGtemplate_C_SetText_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.PreConstruct
struct UConsoleScreen_BGtemplate_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.Construct
struct UConsoleScreen_BGtemplate_C_Construct_Params
{
};

// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.ExecuteUbergraph_ConsoleScreen_BGtemplate
struct UConsoleScreen_BGtemplate_C_ExecuteUbergraph_ConsoleScreen_BGtemplate_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
