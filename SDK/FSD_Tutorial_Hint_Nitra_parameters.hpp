#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_Nitra_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C.OnIncreased_Event
struct UTutorial_Hint_Nitra_C_OnIncreased_Event_Params
{
	class UCappedResource**                            Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C.ReceiveOnInitialized
struct UTutorial_Hint_Nitra_C_ReceiveOnInitialized_Params
{
};

// Function Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C.ExecuteUbergraph_Tutorial_Hint_Nitra
struct UTutorial_Hint_Nitra_C_ExecuteUbergraph_Tutorial_Hint_Nitra_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
