#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ENE_Flea_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ENE_Flea.ENE_Flea_C.SetWantstoFly
struct AENE_Flea_C_SetWantstoFly_Params
{
	bool*                                              Fly;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ENE_Flea.ENE_Flea_C.BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature
struct AENE_Flea_C_BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature_Params
{
};

// Function ENE_Flea.ENE_Flea_C.OnMessageAI
struct AENE_Flea_C_OnMessageAI_Params
{
	struct FName*                                      TriggerName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ENE_Flea.ENE_Flea_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
struct AENE_Flea_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature_Params
{
	class UHealthComponentBase**                       HealthComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ENE_Flea.ENE_Flea_C.BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature
struct AENE_Flea_C_BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature_Params
{
};

// Function ENE_Flea.ENE_Flea_C.ReceiveBeginPlay
struct AENE_Flea_C_ReceiveBeginPlay_Params
{
};

// Function ENE_Flea.ENE_Flea_C.LookforPlayers
struct AENE_Flea_C_LookforPlayers_Params
{
};

// Function ENE_Flea.ENE_Flea_C.RandomFlight
struct AENE_Flea_C_RandomFlight_Params
{
};

// Function ENE_Flea.ENE_Flea_C.ExecuteUbergraph_ENE_Flea
struct AENE_Flea_C_ExecuteUbergraph_ENE_Flea_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
