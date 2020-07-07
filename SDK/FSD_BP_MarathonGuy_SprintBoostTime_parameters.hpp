#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MarathonGuy_SprintBoostTime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MarathonGuy_SprintBoostTime.BP_MarathonGuy_SprintBoostTime_C.Receive_ActivatePerk
struct UBP_MarathonGuy_SprintBoostTime_C_Receive_ActivatePerk_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MarathonGuy_SprintBoostTime.BP_MarathonGuy_SprintBoostTime_C.ExecuteUbergraph_BP_MarathonGuy_SprintBoostTime
struct UBP_MarathonGuy_SprintBoostTime_C_ExecuteUbergraph_BP_MarathonGuy_SprintBoostTime_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
