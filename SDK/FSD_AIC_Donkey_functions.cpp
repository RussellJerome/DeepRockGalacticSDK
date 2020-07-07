// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AIC_Donkey_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIC_Donkey.AIC_Donkey_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAIC_Donkey_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Donkey.AIC_Donkey_C.ReceiveBeginPlay");

	AAIC_Donkey_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIC_Donkey.AIC_Donkey_C.OnOverlapsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           OverlapCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAIC_Donkey_C::OnOverlapsChanged(int* OverlapCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Donkey.AIC_Donkey_C.OnOverlapsChanged");

	AAIC_Donkey_C_OnOverlapsChanged_Params params;
	params.OverlapCount = OverlapCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIC_Donkey.AIC_Donkey_C.ExecuteUbergraph_AIC_Donkey
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAIC_Donkey_C::ExecuteUbergraph_AIC_Donkey(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Donkey.AIC_Donkey_C.ExecuteUbergraph_AIC_Donkey");

	AAIC_Donkey_C_ExecuteUbergraph_AIC_Donkey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
