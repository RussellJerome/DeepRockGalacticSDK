// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_Nitra_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C.OnIncreased_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_Nitra_C::OnIncreased_Event(class UCappedResource** Resource, float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C.OnIncreased_Event");

	UTutorial_Hint_Nitra_C_OnIncreased_Event_Params params;
	params.Resource = Resource;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_Nitra_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C.ReceiveOnInitialized");

	UTutorial_Hint_Nitra_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C.ExecuteUbergraph_Tutorial_Hint_Nitra
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_Nitra_C::ExecuteUbergraph_Tutorial_Hint_Nitra(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C.ExecuteUbergraph_Tutorial_Hint_Nitra");

	UTutorial_Hint_Nitra_C_ExecuteUbergraph_Tutorial_Hint_Nitra_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
