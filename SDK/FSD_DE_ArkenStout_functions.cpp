// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_ArkenStout_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DE_ArkenStout.DE_ArkenStout_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_ArkenStout_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ArkenStout.DE_ArkenStout_C.OnStopEffect");

	UDE_ArkenStout_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_ArkenStout.DE_ArkenStout_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_ArkenStout_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ArkenStout.DE_ArkenStout_C.OnStartEffect");

	UDE_ArkenStout_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_ArkenStout.DE_ArkenStout_C.ExecuteUbergraph_DE_ArkenStout
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_ArkenStout_C::ExecuteUbergraph_DE_ArkenStout(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ArkenStout.DE_ArkenStout_C.ExecuteUbergraph_DE_ArkenStout");

	UDE_ArkenStout_C_ExecuteUbergraph_DE_ArkenStout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
