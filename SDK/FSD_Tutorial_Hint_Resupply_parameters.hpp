#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_Resupply_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ReceiveOnInitialized
struct UTutorial_Hint_Resupply_C_ReceiveOnInitialized_Params
{
};

// Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ReceiveOnHidden
struct UTutorial_Hint_Resupply_C_ReceiveOnHidden_Params
{
};

// Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ResourceAdded
struct UTutorial_Hint_Resupply_C_ResourceAdded_Params
{
	class UCappedResource**                            Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ExecuteUbergraph_Tutorial_Hint_Resupply
struct UTutorial_Hint_Resupply_C_ExecuteUbergraph_Tutorial_Hint_Resupply_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
