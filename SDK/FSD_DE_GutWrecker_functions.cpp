// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_GutWrecker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DE_GutWrecker.DE_GutWrecker_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_GutWrecker_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_GutWrecker.DE_GutWrecker_C.ReceiveTick");

	UDE_GutWrecker_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_GutWrecker.DE_GutWrecker_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_GutWrecker_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_GutWrecker.DE_GutWrecker_C.OnStartEffect");

	UDE_GutWrecker_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_GutWrecker.DE_GutWrecker_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_GutWrecker_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_GutWrecker.DE_GutWrecker_C.OnStopEffect");

	UDE_GutWrecker_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_GutWrecker.DE_GutWrecker_C.ExecuteUbergraph_DE_GutWrecker
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_GutWrecker_C::ExecuteUbergraph_DE_GutWrecker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_GutWrecker.DE_GutWrecker_C.ExecuteUbergraph_DE_GutWrecker");

	UDE_GutWrecker_C_ExecuteUbergraph_DE_GutWrecker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
