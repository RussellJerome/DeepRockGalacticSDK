#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_ZipLineGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.GetNearestPointOnLine
struct APRJ_ZipLineGun_C_GetNearestPointOnLine_Params
{
	struct FVector*                                    WorldPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    LineStart;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    LineEnd;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NearestLinePosition;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.Finish Zip Line
struct APRJ_ZipLineGun_C_Finish_Zip_Line_Params
{
};

// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.UserConstructionScript
struct APRJ_ZipLineGun_C_UserConstructionScript_Params
{
};

// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.On Hit
struct APRJ_ZipLineGun_C_On_Hit_Params
{
};

// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct APRJ_ZipLineGun_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.OnShoot
struct APRJ_ZipLineGun_C_OnShoot_Params
{
	struct FVector*                                    Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    EndLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveTick
struct APRJ_ZipLineGun_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.SetCollider
struct APRJ_ZipLineGun_C_SetCollider_Params
{
};

// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveBeginPlay
struct APRJ_ZipLineGun_C_ReceiveBeginPlay_Params
{
};

// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.All_ConnectWithZipLine
struct APRJ_ZipLineGun_C_All_ConnectWithZipLine_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             VerticalSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ExecuteUbergraph_PRJ_ZipLineGun
struct APRJ_ZipLineGun_C_ExecuteUbergraph_PRJ_ZipLineGun_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
