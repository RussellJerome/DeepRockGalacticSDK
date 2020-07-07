#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_FocusShot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tutorial_Hint_FocusShot.Tutorial_Hint_FocusShot_C.ReceiveOnInitialized
struct UTutorial_Hint_FocusShot_C_ReceiveOnInitialized_Params
{
};

// Function Tutorial_Hint_FocusShot.Tutorial_Hint_FocusShot_C.OnItemEquipped_Event
struct UTutorial_Hint_FocusShot_C_OnItemEquipped_Event_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_Hint_FocusShot.Tutorial_Hint_FocusShot_C.FullyFocusedEvent_Event
struct UTutorial_Hint_FocusShot_C_FullyFocusedEvent_Event_Params
{
};

// Function Tutorial_Hint_FocusShot.Tutorial_Hint_FocusShot_C.ExecuteUbergraph_Tutorial_Hint_FocusShot
struct UTutorial_Hint_FocusShot_C_ExecuteUbergraph_Tutorial_Hint_FocusShot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
