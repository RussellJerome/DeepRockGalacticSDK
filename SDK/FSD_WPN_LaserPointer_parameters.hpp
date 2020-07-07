#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_LaserPointer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_LaserPointer.WPN_LaserPointer_C.SetLaserBeamMaterial
struct AWPN_LaserPointer_C_SetLaserBeamMaterial_Params
{
	class APlayerCharacter**                           InCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.SetBeamVisibility
struct AWPN_LaserPointer_C_SetBeamVisibility_Params
{
	bool*                                              bNewVisibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.CanPlacePOI
struct AWPN_LaserPointer_C_CanPlacePOI_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture**                                   Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Can_Place;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.UpdateBackgroundColor
struct AWPN_LaserPointer_C_UpdateBackgroundColor_Params
{
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.SetBackgroundColor
struct AWPN_LaserPointer_C_SetBackgroundColor_Params
{
	struct FLinearColor*                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.Adjust Beam
struct AWPN_LaserPointer_C_Adjust_Beam_Params
{
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.GetPointTransform
struct AWPN_LaserPointer_C_GetPointTransform_Params
{
	struct FTransform                                  PointTransform;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.UserConstructionScript
struct AWPN_LaserPointer_C_UserConstructionScript_Params
{
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveUnequipped
struct AWPN_LaserPointer_C_RecieveUnequipped_Params
{
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature
struct AWPN_LaserPointer_C_BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature_Params
{
	class UUserWidget**                                Crosshair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.OnPointOfInterest
struct AWPN_LaserPointer_C_OnPointOfInterest_Params
{
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 TargetIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveBeginPlay
struct AWPN_LaserPointer_C_ReceiveBeginPlay_Params
{
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.ToggleLaserVisible
struct AWPN_LaserPointer_C_ToggleLaserVisible_Params
{
	bool*                                              aVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.AddedToInventory
struct AWPN_LaserPointer_C_AddedToInventory_Params
{
	class APlayerCharacter**                           ItemOwner;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.OnScanComplete
struct AWPN_LaserPointer_C_OnScanComplete_Params
{
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.OnMarkerPlaced_Event
struct AWPN_LaserPointer_C_OnMarkerPlaced_Event_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Name;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ELaserPointerTargetType*                           TypeOfTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveEquipped
struct AWPN_LaserPointer_C_RecieveEquipped_Params
{
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.OnPOIDestroyed
struct AWPN_LaserPointer_C_OnPOIDestroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveTick
struct AWPN_LaserPointer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_LaserPointer.WPN_LaserPointer_C.ExecuteUbergraph_WPN_LaserPointer
struct AWPN_LaserPointer_C_ExecuteUbergraph_WPN_LaserPointer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
