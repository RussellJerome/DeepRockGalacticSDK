#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_LowOnAmmo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.ReceiveOnInitialized
struct UTutorial_Hint_LowOnAmmo_C_ReceiveOnInitialized_Params
{
};

// Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.OnSupplyStatusChangedEvent
struct UTutorial_Hint_LowOnAmmo_C_OnSupplyStatusChangedEvent_Params
{
	float*                                             ammoStatus01;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             healthStatus01;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.OnResourceMined
struct UTutorial_Hint_LowOnAmmo_C_OnResourceMined_Params
{
	class UCappedResource**                            Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.ExecuteUbergraph_Tutorial_Hint_LowOnAmmo
struct UTutorial_Hint_LowOnAmmo_C_ExecuteUbergraph_Tutorial_Hint_LowOnAmmo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
