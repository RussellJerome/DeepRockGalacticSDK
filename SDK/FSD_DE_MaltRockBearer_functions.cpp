// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_MaltRockBearer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnRep_Current Scale
// (BlueprintCallable, BlueprintEvent)

void UDE_MaltRockBearer_C::OnRep_Current_Scale()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnRep_Current Scale");

	UDE_MaltRockBearer_C_OnRep_Current_Scale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_MaltRockBearer.DE_MaltRockBearer_C.TraceForScaledCollision
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNextScaleColliding           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDE_MaltRockBearer_C::TraceForScaledCollision(bool* IsNextScaleColliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.TraceForScaledCollision");

	UDE_MaltRockBearer_C_TraceForScaledCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNextScaleColliding != nullptr)
		*IsNextScaleColliding = params.IsNextScaleColliding;
}


// Function DE_MaltRockBearer.DE_MaltRockBearer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_MaltRockBearer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.ReceiveTick");

	UDE_MaltRockBearer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_MaltRockBearer_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnStartEffect");

	UDE_MaltRockBearer_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_MaltRockBearer_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnStopEffect");

	UDE_MaltRockBearer_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_MaltRockBearer.DE_MaltRockBearer_C.Handle Scaling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_MaltRockBearer_C::Handle_Scaling(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.Handle Scaling");

	UDE_MaltRockBearer_C_Handle_Scaling_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_MaltRockBearer.DE_MaltRockBearer_C.ExecuteUbergraph_DE_MaltRockBearer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_MaltRockBearer_C::ExecuteUbergraph_DE_MaltRockBearer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.ExecuteUbergraph_DE_MaltRockBearer");

	UDE_MaltRockBearer_C_ExecuteUbergraph_DE_MaltRockBearer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
