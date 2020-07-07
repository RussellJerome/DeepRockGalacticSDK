#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_MinersManualNotification_Manager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.Construct
struct UHUD_MinersManualNotification_Manager_C_Construct_Params
{
};

// Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.OnMinersManualNotification
struct UHUD_MinersManualNotification_Manager_C_OnMinersManualNotification_Params
{
	EMinersManualSection*                              Section;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid*                                      ObjectID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.ExecuteUbergraph_HUD_MinersManualNotification_Manager
struct UHUD_MinersManualNotification_Manager_C_ExecuteUbergraph_HUD_MinersManualNotification_Manager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
