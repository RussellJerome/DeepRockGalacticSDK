// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_ToothGrinder_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DE_ToothGrinder.DE_ToothGrinder_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_ToothGrinder_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ToothGrinder.DE_ToothGrinder_C.OnStartEffect");

	UDE_ToothGrinder_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_ToothGrinder.DE_ToothGrinder_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_ToothGrinder_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ToothGrinder.DE_ToothGrinder_C.OnStopEffect");

	UDE_ToothGrinder_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_ToothGrinder.DE_ToothGrinder_C.ExecuteUbergraph_DE_ToothGrinder
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_ToothGrinder_C::ExecuteUbergraph_DE_ToothGrinder(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ToothGrinder.DE_ToothGrinder_C.ExecuteUbergraph_DE_ToothGrinder");

	UDE_ToothGrinder_C_ExecuteUbergraph_DE_ToothGrinder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
