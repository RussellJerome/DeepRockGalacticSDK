#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_LaserPointer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ReceiveOnInitialized
struct UTutorial_Hint_LaserPointer_C_ReceiveOnInitialized_Params
{
};

// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnMarkerPlaced_Event
struct UTutorial_Hint_LaserPointer_C_OnMarkerPlaced_Event_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Name;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ELaserPointerTargetType*                           TypeOfTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ExecuteUbergraph_Tutorial_Hint_LaserPointer
struct UTutorial_Hint_LaserPointer_C_ExecuteUbergraph_Tutorial_Hint_LaserPointer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
