// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OnScreen_BoscoRevivesCounter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreen_BoscoRevivesCounter.OnScreen_BoscoRevivesCounter_C.SetViewAmmoCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ViewAmmo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreen_BoscoRevivesCounter_C::SetViewAmmoCounter(bool* ViewAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_BoscoRevivesCounter.OnScreen_BoscoRevivesCounter_C.SetViewAmmoCounter");

	UOnScreen_BoscoRevivesCounter_C_SetViewAmmoCounter_Params params;
	params.ViewAmmo = ViewAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreen_BoscoRevivesCounter.OnScreen_BoscoRevivesCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOnScreen_BoscoRevivesCounter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_BoscoRevivesCounter.OnScreen_BoscoRevivesCounter_C.Construct");

	UOnScreen_BoscoRevivesCounter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreen_BoscoRevivesCounter.OnScreen_BoscoRevivesCounter_C.ExecuteUbergraph_OnScreen_BoscoRevivesCounter
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreen_BoscoRevivesCounter_C::ExecuteUbergraph_OnScreen_BoscoRevivesCounter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_BoscoRevivesCounter.OnScreen_BoscoRevivesCounter_C.ExecuteUbergraph_OnScreen_BoscoRevivesCounter");

	UOnScreen_BoscoRevivesCounter_C_ExecuteUbergraph_OnScreen_BoscoRevivesCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
