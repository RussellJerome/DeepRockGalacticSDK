#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Announcement_Schematic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Announcement_Schematic.Announcement_Schematic_C.SetTitleProgress
struct UAnnouncement_Schematic_C_SetTitleProgress_Params
{
	float*                                             InProgress;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Schematic.Announcement_Schematic_C.PreConstruct
struct UAnnouncement_Schematic_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Schematic.Announcement_Schematic_C.Construct
struct UAnnouncement_Schematic_C_Construct_Params
{
};

// Function Announcement_Schematic.Announcement_Schematic_C.OnAnnounceAnimFinished
struct UAnnouncement_Schematic_C_OnAnnounceAnimFinished_Params
{
};

// Function Announcement_Schematic.Announcement_Schematic_C.ExecuteUbergraph_Announcement_Schematic
struct UAnnouncement_Schematic_C_ExecuteUbergraph_Announcement_Schematic_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
