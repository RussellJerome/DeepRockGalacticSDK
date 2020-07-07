#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_EnemyShowroomController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_EnemyShowroomController.BP_EnemyShowroomController_C.Receive_PlayAttack
struct UBP_EnemyShowroomController_C_Receive_PlayAttack_Params
{
	class UAnimSequenceBase**                          attackAnimation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemyShowroomController.BP_EnemyShowroomController_C.ExecuteUbergraph_BP_EnemyShowroomController
struct UBP_EnemyShowroomController_C_ExecuteUbergraph_BP_EnemyShowroomController_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
