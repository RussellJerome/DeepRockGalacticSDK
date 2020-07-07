#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_Notification_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationIcon
struct UConsoleScreen_Notification_C_SetNotificationIcon_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationText
struct UConsoleScreen_Notification_C_SetNotificationText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               NewSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.PreConstruct
struct UConsoleScreen_Notification_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.Construct
struct UConsoleScreen_Notification_C_Construct_Params
{
};

// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationCategory
struct UConsoleScreen_Notification_C_SetNotificationCategory_Params
{
	class UCategoryID**                                CategoryID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.OnItemCategoryChanged
struct UConsoleScreen_Notification_C_OnItemCategoryChanged_Params
{
};

// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.ExecuteUbergraph_ConsoleScreen_Notification
struct UConsoleScreen_Notification_C_ExecuteUbergraph_ConsoleScreen_Notification_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
