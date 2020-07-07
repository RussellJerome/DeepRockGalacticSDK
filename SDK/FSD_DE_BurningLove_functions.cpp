// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_BurningLove_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DE_BurningLove.DE_BurningLove_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_BurningLove_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_BurningLove.DE_BurningLove_C.OnStartEffect");

	UDE_BurningLove_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_BurningLove.DE_BurningLove_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_BurningLove_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_BurningLove.DE_BurningLove_C.OnStopEffect");

	UDE_BurningLove_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_BurningLove.DE_BurningLove_C.ExecuteUbergraph_DE_BurningLove
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_BurningLove_C::ExecuteUbergraph_DE_BurningLove(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_BurningLove.DE_BurningLove_C.ExecuteUbergraph_DE_BurningLove");

	UDE_BurningLove_C_ExecuteUbergraph_DE_BurningLove_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
