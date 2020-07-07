// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_SmartStout_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DE_SmartStout.DE_SmartStout_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_SmartStout_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_SmartStout.DE_SmartStout_C.OnStopEffect");

	UDE_SmartStout_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_SmartStout.DE_SmartStout_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_SmartStout_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_SmartStout.DE_SmartStout_C.OnStartEffect");

	UDE_SmartStout_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_SmartStout.DE_SmartStout_C.ExecuteUbergraph_DE_SmartStout
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_SmartStout_C::ExecuteUbergraph_DE_SmartStout(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_SmartStout.DE_SmartStout_C.ExecuteUbergraph_DE_SmartStout");

	UDE_SmartStout_C_ExecuteUbergraph_DE_SmartStout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
