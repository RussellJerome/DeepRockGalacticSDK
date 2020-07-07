#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_MinersManualNotification_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.PreConstruct
struct UHUD_MinersManualNotification_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.Show
struct UHUD_MinersManualNotification_C_Show_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float*                                             TimeOnScreen;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.OnFinished
struct UHUD_MinersManualNotification_C_OnFinished_Params
{
};

// Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.ExecuteUbergraph_HUD_MinersManualNotification
struct UHUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
