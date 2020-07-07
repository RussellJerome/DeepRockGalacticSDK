// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_ThrowCarriable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_ThrowCarriable_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.ReceiveOnInitialized");

	UTutorial_ThrowCarriable_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.OnCarriableChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 carriedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_ThrowCarriable_C::OnCarriableChangedEvent(class AActor** carriedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.OnCarriableChangedEvent");

	UTutorial_ThrowCarriable_C_OnCarriableChangedEvent_Params params;
	params.carriedActor = carriedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.OnThrowCarriableProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_ThrowCarriable_C::OnThrowCarriableProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.OnThrowCarriableProgress");

	UTutorial_ThrowCarriable_C_OnThrowCarriableProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.ExecuteUbergraph_Tutorial_ThrowCarriable
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_ThrowCarriable_C::ExecuteUbergraph_Tutorial_ThrowCarriable(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.ExecuteUbergraph_Tutorial_ThrowCarriable");

	UTutorial_ThrowCarriable_C_ExecuteUbergraph_Tutorial_ThrowCarriable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
