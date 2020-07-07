#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_ThrowCarriable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.ReceiveOnInitialized
struct UTutorial_ThrowCarriable_C_ReceiveOnInitialized_Params
{
};

// Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.OnCarriableChangedEvent
struct UTutorial_ThrowCarriable_C_OnCarriableChangedEvent_Params
{
	class AActor**                                     carriedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.OnThrowCarriableProgress
struct UTutorial_ThrowCarriable_C_OnThrowCarriableProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.ExecuteUbergraph_Tutorial_ThrowCarriable
struct UTutorial_ThrowCarriable_C_ExecuteUbergraph_Tutorial_ThrowCarriable_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
