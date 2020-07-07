#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_DiscoLight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DE_DiscoLight.DE_DiscoLight_C.OnRep_Light
struct UDE_DiscoLight_C_OnRep_Light_Params
{
};

// Function DE_DiscoLight.DE_DiscoLight_C.OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC
struct UDE_DiscoLight_C_OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_DiscoLight.DE_DiscoLight_C.ReceiveBeginPlay
struct UDE_DiscoLight_C_ReceiveBeginPlay_Params
{
};

// Function DE_DiscoLight.DE_DiscoLight_C.ReceiveTick
struct UDE_DiscoLight_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_DiscoLight.DE_DiscoLight_C.OnStartEffect
struct UDE_DiscoLight_C_OnStartEffect_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DE_DiscoLight.DE_DiscoLight_C.OnStopEffect
struct UDE_DiscoLight_C_OnStopEffect_Params
{
};

// Function DE_DiscoLight.DE_DiscoLight_C.Set Light
struct UDE_DiscoLight_C_Set_Light_Params
{
};

// Function DE_DiscoLight.DE_DiscoLight_C.ExecuteUbergraph_DE_DiscoLight
struct UDE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
