// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_FSDCameraManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeMaxDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MaxDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FSDCameraManager_C::ChangeMaxDistance(float* MaxDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeMaxDistance");

	ABP_FSDCameraManager_C_ChangeMaxDistance_Params params;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MaxSpeed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FSDCameraManager_C::ChangeSpeed(float* MaxSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeSpeed");

	ABP_FSDCameraManager_C_ChangeSpeed_Params params;
	params.MaxSpeed = MaxSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.SmoothReturnVelocity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector*                New_Camera_Location            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_FSDCameraManager_C::SmoothReturnVelocity(struct FVector* New_Camera_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.SmoothReturnVelocity");

	ABP_FSDCameraManager_C_SmoothReturnVelocity_Params params;
	params.New_Camera_Location = New_Camera_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.SphereDirectionToPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FSDCameraManager_C::SphereDirectionToPlayer(struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.SphereDirectionToPlayer");

	ABP_FSDCameraManager_C_SphereDirectionToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.SetToThirdPersonCamera
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 New_Camera_Position            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FSDCameraManager_C::SetToThirdPersonCamera(struct FVector* New_Camera_Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.SetToThirdPersonCamera");

	ABP_FSDCameraManager_C_SetToThirdPersonCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (New_Camera_Position != nullptr)
		*New_Camera_Position = params.New_Camera_Position;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReturnCameraMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECharacterCameraMode*          NewCameraMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FSDCameraManager_C::ReturnCameraMode(class APlayerCharacter** Target, ECharacterCameraMode* NewCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReturnCameraMode");

	ABP_FSDCameraManager_C_ReturnCameraMode_Params params;
	params.Target = Target;
	params.NewCameraMode = NewCameraMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.PhotographyCameraModify
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                NewCameraLocation              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PreviousCameraLocation         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                OriginalCameraLocation         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ResultCameraLocation           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FSDCameraManager_C::PhotographyCameraModify(struct FVector* NewCameraLocation, struct FVector* PreviousCameraLocation, struct FVector* OriginalCameraLocation, struct FVector* ResultCameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.PhotographyCameraModify");

	ABP_FSDCameraManager_C_PhotographyCameraModify_Params params;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultCameraLocation != nullptr)
		*ResultCameraLocation = params.ResultCameraLocation;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_FSDCameraManager_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveDestroyed");

	ABP_FSDCameraManager_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABP_FSDCameraManager_C::OnPhotographySessionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionEnd");

	ABP_FSDCameraManager_C_OnPhotographySessionEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABP_FSDCameraManager_C::OnPhotographySessionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionStart");

	ABP_FSDCameraManager_C_OnPhotographySessionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FSDCameraManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveTick");

	ABP_FSDCameraManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FSDCameraManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveBeginPlay");

	ABP_FSDCameraManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.TogglePhotographyMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FSDCameraManager_C::TogglePhotographyMode(bool* active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.TogglePhotographyMode");

	ABP_FSDCameraManager_C_TogglePhotographyMode_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.Return Camera
// (BlueprintCallable, BlueprintEvent)

void ABP_FSDCameraManager_C::Return_Camera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.Return Camera");

	ABP_FSDCameraManager_C_Return_Camera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence**         LoaderLevelSequence            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FSDCameraManager_C::LoaderStart(class ULevelSequence** LoaderLevelSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStart");

	ABP_FSDCameraManager_C_LoaderStart_Params params;
	params.LoaderLevelSequence = LoaderLevelSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStop
// (BlueprintCallable, BlueprintEvent)

void ABP_FSDCameraManager_C::LoaderStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStop");

	ABP_FSDCameraManager_C_LoaderStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ExecuteUbergraph_BP_FSDCameraManager
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FSDCameraManager_C::ExecuteUbergraph_BP_FSDCameraManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ExecuteUbergraph_BP_FSDCameraManager");

	ABP_FSDCameraManager_C_ExecuteUbergraph_BP_FSDCameraManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ShowHUDForPhotography__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_FSDCameraManager_C::ShowHUDForPhotography__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ShowHUDForPhotography__DelegateSignature");

	ABP_FSDCameraManager_C_ShowHUDForPhotography__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.HideHUDForPhotography__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_FSDCameraManager_C::HideHUDForPhotography__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.HideHUDForPhotography__DelegateSignature");

	ABP_FSDCameraManager_C_HideHUDForPhotography__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
