#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_MaltRockBearer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnRep_Current Scale
struct UDE_MaltRockBearer_C_OnRep_Current_Scale_Params
{
};

// Function DE_MaltRockBearer.DE_MaltRockBearer_C.TraceForScaledCollision
struct UDE_MaltRockBearer_C_TraceForScaledCollision_Params
{
	bool                                               IsNextScaleColliding;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DE_MaltRockBearer.DE_MaltRockBearer_C.ReceiveTick
struct UDE_MaltRockBearer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnStartEffect
struct UDE_MaltRockBearer_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnStopEffect
struct UDE_MaltRockBearer_C_OnStopEffect_Params
{
};

// Function DE_MaltRockBearer.DE_MaltRockBearer_C.Handle Scaling
struct UDE_MaltRockBearer_C_Handle_Scaling_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_MaltRockBearer.DE_MaltRockBearer_C.ExecuteUbergraph_DE_MaltRockBearer
struct UDE_MaltRockBearer_C_ExecuteUbergraph_DE_MaltRockBearer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
