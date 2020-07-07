#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_FSDAnsel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FSDAnsel.FSDAnselFunctionLibrary.StopPhotographySession
struct UFSDAnselFunctionLibrary_StopPhotographySession_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FSDAnsel.FSDAnselFunctionLibrary.StartPhotographySession
struct UFSDAnselFunctionLibrary_StartPhotographySession_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FSDAnsel.FSDAnselFunctionLibrary.SetUIControlVisibility
struct UFSDAnselFunctionLibrary_SetUIControlVisibility_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUIControlEffectTarget>*               UIControlTarget;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsVisible;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FSDAnsel.FSDAnselFunctionLibrary.SetSettleFrames
struct UFSDAnselFunctionLibrary_SetSettleFrames_Params
{
	int*                                               NumSettleFrames;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FSDAnsel.FSDAnselFunctionLibrary.SetIsPhotographyAllowed
struct UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Params
{
	bool*                                              bIsPhotographyAllowed;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraMovementSpeed
struct UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Params
{
	float*                                             TranslationSpeed;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintDistance
struct UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Params
{
	float*                                             MaxCameraDistance;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintCameraSize
struct UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Params
{
	float*                                             CameraSize;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPostprocess
struct UFSDAnselFunctionLibrary_SetAutoPostprocess_Params
{
	bool*                                              bShouldAutoPostprocess;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPause
struct UFSDAnselFunctionLibrary_SetAutoPause_Params
{
	bool*                                              bShouldAutoPause;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAvailable
struct UFSDAnselFunctionLibrary_IsPhotographyAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAllowed
struct UFSDAnselFunctionLibrary_IsPhotographyAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByGeometry
struct UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewCameraLocation;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PreviousCameraLocation;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    OriginalCameraLocation;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutCameraLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByDistance
struct UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewCameraLocation;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PreviousCameraLocation;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    OriginalCameraLocation;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutCameraLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
