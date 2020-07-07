// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_Flares_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_Flares.Tutorial_Hint_Flares_C.OnFlareThrown
// (BlueprintCallable, BlueprintEvent)

void UTutorial_Hint_Flares_C::OnFlareThrown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Flares.Tutorial_Hint_Flares_C.OnFlareThrown");

	UTutorial_Hint_Flares_C_OnFlareThrown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_Flares.Tutorial_Hint_Flares_C.ReceiveOnHidden
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_Flares_C::ReceiveOnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Flares.Tutorial_Hint_Flares_C.ReceiveOnHidden");

	UTutorial_Hint_Flares_C_ReceiveOnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_Flares.Tutorial_Hint_Flares_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_Flares_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Flares.Tutorial_Hint_Flares_C.ReceiveOnInitialized");

	UTutorial_Hint_Flares_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_Flares.Tutorial_Hint_Flares_C.ExecuteUbergraph_Tutorial_Hint_Flares
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_Flares_C::ExecuteUbergraph_Tutorial_Hint_Flares(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Flares.Tutorial_Hint_Flares_C.ExecuteUbergraph_Tutorial_Hint_Flares");

	UTutorial_Hint_Flares_C_ExecuteUbergraph_Tutorial_Hint_Flares_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
