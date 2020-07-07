// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_FSDAnsel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FSDAnsel.FSDAnselFunctionLibrary.StopPhotographySession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UFSDAnselFunctionLibrary::STATIC_StopPhotographySession(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.StopPhotographySession");

	UFSDAnselFunctionLibrary_StopPhotographySession_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.StartPhotographySession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UFSDAnselFunctionLibrary::STATIC_StartPhotographySession(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.StartPhotographySession");

	UFSDAnselFunctionLibrary_StartPhotographySession_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetUIControlVisibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUIControlEffectTarget>* UIControlTarget                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsVisible                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFSDAnselFunctionLibrary::STATIC_SetUIControlVisibility(class UObject** WorldContextObject, TEnumAsByte<EUIControlEffectTarget>* UIControlTarget, bool* bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetUIControlVisibility");

	UFSDAnselFunctionLibrary_SetUIControlVisibility_Params params;
	params.WorldContextObject = WorldContextObject;
	params.UIControlTarget = UIControlTarget;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetSettleFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           NumSettleFrames                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFSDAnselFunctionLibrary::STATIC_SetSettleFrames(int* NumSettleFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetSettleFrames");

	UFSDAnselFunctionLibrary_SetSettleFrames_Params params;
	params.NumSettleFrames = NumSettleFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetIsPhotographyAllowed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          bIsPhotographyAllowed          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFSDAnselFunctionLibrary::STATIC_SetIsPhotographyAllowed(bool* bIsPhotographyAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetIsPhotographyAllowed");

	UFSDAnselFunctionLibrary_SetIsPhotographyAllowed_Params params;
	params.bIsPhotographyAllowed = bIsPhotographyAllowed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraMovementSpeed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float*                         TranslationSpeed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFSDAnselFunctionLibrary::STATIC_SetCameraMovementSpeed(float* TranslationSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraMovementSpeed");

	UFSDAnselFunctionLibrary_SetCameraMovementSpeed_Params params;
	params.TranslationSpeed = TranslationSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintDistance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float*                         MaxCameraDistance              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFSDAnselFunctionLibrary::STATIC_SetCameraConstraintDistance(float* MaxCameraDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintDistance");

	UFSDAnselFunctionLibrary_SetCameraConstraintDistance_Params params;
	params.MaxCameraDistance = MaxCameraDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintCameraSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float*                         CameraSize                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFSDAnselFunctionLibrary::STATIC_SetCameraConstraintCameraSize(float* CameraSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintCameraSize");

	UFSDAnselFunctionLibrary_SetCameraConstraintCameraSize_Params params;
	params.CameraSize = CameraSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPostprocess
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          bShouldAutoPostprocess         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFSDAnselFunctionLibrary::STATIC_SetAutoPostprocess(bool* bShouldAutoPostprocess)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPostprocess");

	UFSDAnselFunctionLibrary_SetAutoPostprocess_Params params;
	params.bShouldAutoPostprocess = bShouldAutoPostprocess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPause
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          bShouldAutoPause               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFSDAnselFunctionLibrary::STATIC_SetAutoPause(bool* bShouldAutoPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPause");

	UFSDAnselFunctionLibrary_SetAutoPause_Params params;
	params.bShouldAutoPause = bShouldAutoPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFSDAnselFunctionLibrary::STATIC_IsPhotographyAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAvailable");

	UFSDAnselFunctionLibrary_IsPhotographyAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAllowed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFSDAnselFunctionLibrary::STATIC_IsPhotographyAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAllowed");

	UFSDAnselFunctionLibrary_IsPhotographyAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByGeometry
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewCameraLocation              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PreviousCameraLocation         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                OriginalCameraLocation         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutCameraLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFSDAnselFunctionLibrary::STATIC_ConstrainCameraByGeometry(class UObject** WorldContextObject, struct FVector* NewCameraLocation, struct FVector* PreviousCameraLocation, struct FVector* OriginalCameraLocation, struct FVector* OutCameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByGeometry");

	UFSDAnselFunctionLibrary_ConstrainCameraByGeometry_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCameraLocation != nullptr)
		*OutCameraLocation = params.OutCameraLocation;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByDistance
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewCameraLocation              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PreviousCameraLocation         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                OriginalCameraLocation         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutCameraLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float*                         MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)

void UFSDAnselFunctionLibrary::STATIC_ConstrainCameraByDistance(class UObject** WorldContextObject, struct FVector* NewCameraLocation, struct FVector* PreviousCameraLocation, struct FVector* OriginalCameraLocation, float* MaxDistance, struct FVector* OutCameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByDistance");

	UFSDAnselFunctionLibrary_ConstrainCameraByDistance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCameraLocation != nullptr)
		*OutCameraLocation = params.OutCameraLocation;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
