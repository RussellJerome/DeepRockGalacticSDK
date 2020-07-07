// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Animation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Animation.BP_Animation_C.GetInitialTransformComponents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Animation_C::GetInitialTransformComponents(struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Animation.BP_Animation_C.GetInitialTransformComponents");

	UBP_Animation_C_GetInitialTransformComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function BP_Animation.BP_Animation_C.SetRotationCenter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Pivot                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 outCenter                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OutCenterLocal                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBP_Animation_C::SetRotationCenter(struct FVector* Pivot, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale, struct FVector* outCenter, struct FVector* OutCenterLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Animation.BP_Animation_C.SetRotationCenter");

	UBP_Animation_C_SetRotationCenter_Params params;
	params.Pivot = Pivot;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outCenter != nullptr)
		*outCenter = params.outCenter;
	if (OutCenterLocal != nullptr)
		*OutCenterLocal = params.OutCenterLocal;
}


// Function BP_Animation.BP_Animation_C.SetAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeltaGenTimelineAnimation* Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_Animation_C::SetAnimation(struct FDeltaGenTimelineAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Animation.BP_Animation_C.SetAnimation");

	UBP_Animation_C_SetAnimation_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Animation.BP_Animation_C.ResetTransform
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Animation_C::ResetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Animation.BP_Animation_C.ResetTransform");

	UBP_Animation_C_ResetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Animation.BP_Animation_C.SetLocalTransform
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             NewLocalTransform              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBP_Animation_C::SetLocalTransform(struct FTransform* NewLocalTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Animation.BP_Animation_C.SetLocalTransform");

	UBP_Animation_C_SetLocalTransform_Params params;
	params.NewLocalTransform = NewLocalTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Animation.BP_Animation_C.ConvertDeltaGenEulerToRotator
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                InVec                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UBP_Animation_C::ConvertDeltaGenEulerToRotator(struct FVector* InVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Animation.BP_Animation_C.ConvertDeltaGenEulerToRotator");

	UBP_Animation_C_ConvertDeltaGenEulerToRotator_Params params;
	params.InVec = InVec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Animation.BP_Animation_C.UpdateAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Animation_C::UpdateAnimation(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Animation.BP_Animation_C.UpdateAnimation");

	UBP_Animation_C_UpdateAnimation_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Animation.BP_Animation_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_Animation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Animation.BP_Animation_C.ReceiveBeginPlay");

	UBP_Animation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Animation.BP_Animation_C.ExecuteUbergraph_BP_Animation
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Animation_C::ExecuteUbergraph_BP_Animation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Animation.BP_Animation_C.ExecuteUbergraph_BP_Animation");

	UBP_Animation_C_ExecuteUbergraph_BP_Animation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
