// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_MacteraBrew_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DE_MacteraBrew.DE_MacteraBrew_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_MacteraBrew_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_MacteraBrew.DE_MacteraBrew_C.OnStopEffect");

	UDE_MacteraBrew_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_MacteraBrew.DE_MacteraBrew_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_MacteraBrew_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_MacteraBrew.DE_MacteraBrew_C.OnStartEffect");

	UDE_MacteraBrew_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_MacteraBrew.DE_MacteraBrew_C.ExecuteUbergraph_DE_MacteraBrew
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_MacteraBrew_C::ExecuteUbergraph_DE_MacteraBrew(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_MacteraBrew.DE_MacteraBrew_C.ExecuteUbergraph_DE_MacteraBrew");

	UDE_MacteraBrew_C_ExecuteUbergraph_DE_MacteraBrew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
