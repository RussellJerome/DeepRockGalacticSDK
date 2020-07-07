#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_BarGlass_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_ThrownGlass
struct AITM_BarGlass_Item_C_OnRep_ThrownGlass_Params
{
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_Visible
struct AITM_BarGlass_Item_C_OnRep_Visible_Params
{
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_IsFull
struct AITM_BarGlass_Item_C_OnRep_IsFull_Params
{
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.CheckCanSalute
struct AITM_BarGlass_Item_C_CheckCanSalute_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.IsDrinking
struct AITM_BarGlass_Item_C_IsDrinking_Params
{
	bool                                               IsDrinking;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayThrow
struct AITM_BarGlass_Item_C_PlayThrow_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayDrink
struct AITM_BarGlass_Item_C_PlayDrink_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.UserConstructionScript
struct AITM_BarGlass_Item_C_UserConstructionScript_Params
{
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.RecieveStartUsing
struct AITM_BarGlass_Item_C_RecieveStartUsing_Params
{
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.Server_Use
struct AITM_BarGlass_Item_C_Server_Use_Params
{
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Drink
struct AITM_BarGlass_Item_C_All_Drink_Params
{
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Throw
struct AITM_BarGlass_Item_C_All_Throw_Params
{
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.DropItem
struct AITM_BarGlass_Item_C_DropItem_Params
{
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SetEmpty
struct AITM_BarGlass_Item_C_SetEmpty_Params
{
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
struct AITM_BarGlass_Item_C_BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature_Params
{
	class UActorComponent**                            Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bReset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ReceiveBeginPlay
struct AITM_BarGlass_Item_C_ReceiveBeginPlay_Params
{
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SkinThrownGlass
struct AITM_BarGlass_Item_C_SkinThrownGlass_Params
{
};

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ExecuteUbergraph_ITM_BarGlass_Item
struct AITM_BarGlass_Item_C_ExecuteUbergraph_ITM_BarGlass_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
