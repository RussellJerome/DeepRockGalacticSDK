#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_FSDCameraManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeMaxDistance
struct ABP_FSDCameraManager_C_ChangeMaxDistance_Params
{
	float*                                             MaxDistance;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeSpeed
struct ABP_FSDCameraManager_C_ChangeSpeed_Params
{
	float*                                             MaxSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.SmoothReturnVelocity
struct ABP_FSDCameraManager_C_SmoothReturnVelocity_Params
{
	struct FVector*                                    New_Camera_Location;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.SphereDirectionToPlayer
struct ABP_FSDCameraManager_C_SphereDirectionToPlayer_Params
{
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.SetToThirdPersonCamera
struct ABP_FSDCameraManager_C_SetToThirdPersonCamera_Params
{
	struct FVector                                     New_Camera_Position;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReturnCameraMode
struct ABP_FSDCameraManager_C_ReturnCameraMode_Params
{
	class APlayerCharacter**                           Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECharacterCameraMode*                              NewCameraMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.PhotographyCameraModify
struct ABP_FSDCameraManager_C_PhotographyCameraModify_Params
{
	struct FVector*                                    NewCameraLocation;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PreviousCameraLocation;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    OriginalCameraLocation;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ResultCameraLocation;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveDestroyed
struct ABP_FSDCameraManager_C_ReceiveDestroyed_Params
{
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionEnd
struct ABP_FSDCameraManager_C_OnPhotographySessionEnd_Params
{
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionStart
struct ABP_FSDCameraManager_C_OnPhotographySessionStart_Params
{
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveTick
struct ABP_FSDCameraManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveBeginPlay
struct ABP_FSDCameraManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.TogglePhotographyMode
struct ABP_FSDCameraManager_C_TogglePhotographyMode_Params
{
	bool*                                              active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.Return Camera
struct ABP_FSDCameraManager_C_Return_Camera_Params
{
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStart
struct ABP_FSDCameraManager_C_LoaderStart_Params
{
	class ULevelSequence**                             LoaderLevelSequence;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStop
struct ABP_FSDCameraManager_C_LoaderStop_Params
{
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ExecuteUbergraph_BP_FSDCameraManager
struct ABP_FSDCameraManager_C_ExecuteUbergraph_BP_FSDCameraManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ShowHUDForPhotography__DelegateSignature
struct ABP_FSDCameraManager_C_ShowHUDForPhotography__DelegateSignature_Params
{
};

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.HideHUDForPhotography__DelegateSignature
struct ABP_FSDCameraManager_C_HideHUDForPhotography__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
