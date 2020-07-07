#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_NetworkPlayGameMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.GetDefaultPawnClassForController
struct ABP_NetworkPlayGameMode_C_GetDefaultPawnClassForController_Params
{
	class AController**                                InController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.RecieveAllDwarvesDown
struct ABP_NetworkPlayGameMode_C_RecieveAllDwarvesDown_Params
{
};

// Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.ExecuteUbergraph_BP_NetworkPlayGameMode
struct ABP_NetworkPlayGameMode_C_ExecuteUbergraph_BP_NetworkPlayGameMode_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
