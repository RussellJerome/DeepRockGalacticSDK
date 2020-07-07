// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_UnderhillDeluxe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnRep_CurrentCameraOffset
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void UDE_UnderhillDeluxe_C::OnRep_CurrentCameraOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnRep_CurrentCameraOffset");

	UDE_UnderhillDeluxe_C_OnRep_CurrentCameraOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnRep_CurrentScale
// (BlueprintCallable, BlueprintEvent)

void UDE_UnderhillDeluxe_C::OnRep_CurrentScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnRep_CurrentScale");

	UDE_UnderhillDeluxe_C_OnRep_CurrentScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.TraceForScaledCollision
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNextScaleColliding           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDE_UnderhillDeluxe_C::TraceForScaledCollision(bool* IsNextScaleColliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.TraceForScaledCollision");

	UDE_UnderhillDeluxe_C_TraceForScaledCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNextScaleColliding != nullptr)
		*IsNextScaleColliding = params.IsNextScaleColliding;
}


// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_UnderhillDeluxe_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.ReceiveTick");

	UDE_UnderhillDeluxe_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_UnderhillDeluxe_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnStartEffect");

	UDE_UnderhillDeluxe_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_UnderhillDeluxe_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnStopEffect");

	UDE_UnderhillDeluxe_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.Handle Scaling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_UnderhillDeluxe_C::Handle_Scaling(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.Handle Scaling");

	UDE_UnderhillDeluxe_C_Handle_Scaling_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.ExecuteUbergraph_DE_UnderhillDeluxe
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_UnderhillDeluxe_C::ExecuteUbergraph_DE_UnderhillDeluxe(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.ExecuteUbergraph_DE_UnderhillDeluxe");

	UDE_UnderhillDeluxe_C_ExecuteUbergraph_DE_UnderhillDeluxe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
