#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_ChargedBlasterShot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnRep_AoEEnabled
struct APRJ_ChargedBlasterShot_C_OnRep_AoEEnabled_Params
{
};

// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.UserConstructionScript
struct APRJ_ChargedBlasterShot_C_UserConstructionScript_Params
{
};

// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.Grow Time Line__FinishedFunc
struct APRJ_ChargedBlasterShot_C_Grow_Time_Line__FinishedFunc_Params
{
};

// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.Grow Time Line__UpdateFunc
struct APRJ_ChargedBlasterShot_C_Grow_Time_Line__UpdateFunc_Params
{
};

// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
struct APRJ_ChargedBlasterShot_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature_Params
{
	class UHealthComponentBase**                       HealthComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APRJ_ChargedBlasterShot_C_BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnAoEDamageEnabled
struct APRJ_ChargedBlasterShot_C_OnAoEDamageEnabled_Params
{
};

// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.ReceiveBeginPlay
struct APRJ_ChargedBlasterShot_C_ReceiveBeginPlay_Params
{
};

// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnImpacted
struct APRJ_ChargedBlasterShot_C_OnImpacted_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.UpdateFNRadius
struct APRJ_ChargedBlasterShot_C_UpdateFNRadius_Params
{
	float*                                             New_Radius;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.ExecuteUbergraph_PRJ_ChargedBlasterShot
struct APRJ_ChargedBlasterShot_C_ExecuteUbergraph_PRJ_ChargedBlasterShot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
