#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_UnderhillDeluxe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnRep_CurrentCameraOffset
struct UDE_UnderhillDeluxe_C_OnRep_CurrentCameraOffset_Params
{
};

// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnRep_CurrentScale
struct UDE_UnderhillDeluxe_C_OnRep_CurrentScale_Params
{
};

// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.TraceForScaledCollision
struct UDE_UnderhillDeluxe_C_TraceForScaledCollision_Params
{
	bool                                               IsNextScaleColliding;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.ReceiveTick
struct UDE_UnderhillDeluxe_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnStartEffect
struct UDE_UnderhillDeluxe_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnStopEffect
struct UDE_UnderhillDeluxe_C_OnStopEffect_Params
{
};

// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.Handle Scaling
struct UDE_UnderhillDeluxe_C_Handle_Scaling_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.ExecuteUbergraph_DE_UnderhillDeluxe
struct UDE_UnderhillDeluxe_C_ExecuteUbergraph_DE_UnderhillDeluxe_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
