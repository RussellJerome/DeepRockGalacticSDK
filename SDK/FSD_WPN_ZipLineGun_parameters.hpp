#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_ZipLineGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.CalcFirstPersonMuzzleLocation
struct AWPN_ZipLineGun_C_CalcFirstPersonMuzzleLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.CanFireWeapon
struct AWPN_ZipLineGun_C_CanFireWeapon_Params
{
	struct FText                                       FailMsg;                                                  // (Parm, OutParm)
	class UDialogDataAsset*                            FailShout;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetGearStatEntry
struct AWPN_ZipLineGun_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetCrosshair
struct AWPN_ZipLineGun_C_GetCrosshair_Params
{
	class UHUD_Crosshair_ZiplineGun_C*                 Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.Update Line Of Sight
struct AWPN_ZipLineGun_C_Update_Line_Of_Sight_Params
{
	struct FVector*                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DidHit;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.Negate
struct AWPN_ZipLineGun_C_Negate_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.Between
struct AWPN_ZipLineGun_C_Between_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBetween;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.Can Fire
struct AWPN_ZipLineGun_C_Can_Fire_Params
{
	struct FText                                       FailMsg;                                                  // (Parm, OutParm)
	class UDialogDataAsset*                            FailShout;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CanShoot;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetStartLocation
struct AWPN_ZipLineGun_C_GetStartLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.LineTrace
struct AWPN_ZipLineGun_C_LineTrace_Params
{
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HitAny;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.ClientShoot
struct AWPN_ZipLineGun_C_ClientShoot_Params
{
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.ReceiveTick
struct AWPN_ZipLineGun_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveStopUsing
struct AWPN_ZipLineGun_C_RecieveStopUsing_Params
{
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.AddedToInventory
struct AWPN_ZipLineGun_C_AddedToInventory_Params
{
	class APlayerCharacter**                           ItemOwner;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveStartUsing
struct AWPN_ZipLineGun_C_RecieveStartUsing_Params
{
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.ReceiveBeginPlay
struct AWPN_ZipLineGun_C_ReceiveBeginPlay_Params
{
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature
struct AWPN_ZipLineGun_C_BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature_Params
{
	class UUserWidget**                                Crosshair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveEquipped
struct AWPN_ZipLineGun_C_RecieveEquipped_Params
{
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature
struct AWPN_ZipLineGun_C_BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.ExecuteUbergraph_WPN_ZipLineGun
struct AWPN_ZipLineGun_C_ExecuteUbergraph_WPN_ZipLineGun_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
