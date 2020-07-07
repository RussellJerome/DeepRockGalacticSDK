#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConsoleScreen_Base.ConsoleScreen_Base_C.SetNotificationVisible
struct UConsoleScreen_Base_C_SetNotificationVisible_Params
{
	bool*                                              NewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_Base.ConsoleScreen_Base_C.SetNotification
struct UConsoleScreen_Base_C_SetNotification_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 IconTexture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_Base.ConsoleScreen_Base_C.SetText
struct UConsoleScreen_Base_C_SetText_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleScreen_Base.ConsoleScreen_Base_C.PreConstruct
struct UConsoleScreen_Base_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_Base.ConsoleScreen_Base_C.ExecuteUbergraph_ConsoleScreen_Base
struct UConsoleScreen_Base_C_ExecuteUbergraph_ConsoleScreen_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
