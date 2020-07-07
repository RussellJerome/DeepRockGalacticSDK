// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_IntoxicationComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ToPercentStr
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  PercentString                  (Parm, OutParm, ZeroConstructor)

void UBP_IntoxicationComponent_C::ToPercentStr(float* Progress, class FString* PercentString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ToPercentStr");

	UBP_IntoxicationComponent_C_ToPercentStr_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PercentString != nullptr)
		*PercentString = params.PercentString;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.MyLerp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Current_Value                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Target_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Delta_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_IntoxicationComponent_C::MyLerp(float* Current_Value, float* Target_Value, float* Delta_Time, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.MyLerp");

	UBP_IntoxicationComponent_C_MyLerp_Params params;
	params.Current_Value = Current_Value;
	params.Target_Value = Target_Value;
	params.Delta_Time = Delta_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.SetPostProcessStrength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewStrength                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_IntoxicationComponent_C::SetPostProcessStrength(float* NewStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.SetPostProcessStrength");

	UBP_IntoxicationComponent_C_SetPostProcessStrength_Params params;
	params.NewStrength = NewStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.GetAlcoholPct
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EDrinkableAlcoholStrength*     Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_IntoxicationComponent_C::GetAlcoholPct(EDrinkableAlcoholStrength* Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.GetAlcoholPct");

	UBP_IntoxicationComponent_C_GetAlcoholPct_Params params;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Movement Stength
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_IntoxicationComponent_C::Lerp_Movement_Stength(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Movement Stength");

	UBP_IntoxicationComponent_C_Lerp_Movement_Stength_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Push Effects
// (BlueprintCallable, BlueprintEvent)

void UBP_IntoxicationComponent_C::Push_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Push Effects");

	UBP_IntoxicationComponent_C_Push_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Pop Effects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 DebugReason                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_IntoxicationComponent_C::Pop_Effects(class FString* DebugReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Pop Effects");

	UBP_IntoxicationComponent_C_Pop_Effects_Params params;
	params.DebugReason = DebugReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrunkTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_IntoxicationComponent_C::ReceiveDrunkTick(float* DeltaTime, float* DrunkTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkTick");

	UBP_IntoxicationComponent_C_ReceiveDrunkTick_Params params;
	params.DeltaTime = DeltaTime;
	params.DrunkTime = DrunkTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceivePassOutDrunk
// (Event, Protected, BlueprintEvent)

void UBP_IntoxicationComponent_C::ReceivePassOutDrunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceivePassOutDrunk");

	UBP_IntoxicationComponent_C_ReceivePassOutDrunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Post Process Strength
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_IntoxicationComponent_C::Lerp_Post_Process_Strength(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Post Process Strength");

	UBP_IntoxicationComponent_C_Lerp_Post_Process_Strength_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkEnd
// (Event, Protected, BlueprintEvent)

void UBP_IntoxicationComponent_C::ReceiveDrunkEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkEnd");

	UBP_IntoxicationComponent_C_ReceiveDrunkEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkBegin
// (Event, Protected, BlueprintEvent)

void UBP_IntoxicationComponent_C::ReceiveDrunkBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkBegin");

	UBP_IntoxicationComponent_C_ReceiveDrunkBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ExecuteUbergraph_BP_IntoxicationComponent
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_IntoxicationComponent_C::ExecuteUbergraph_BP_IntoxicationComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ExecuteUbergraph_BP_IntoxicationComponent");

	UBP_IntoxicationComponent_C_ExecuteUbergraph_BP_IntoxicationComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
