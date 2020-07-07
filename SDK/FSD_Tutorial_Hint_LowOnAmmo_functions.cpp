// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_LowOnAmmo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_LowOnAmmo_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.ReceiveOnInitialized");

	UTutorial_Hint_LowOnAmmo_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.OnSupplyStatusChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ammoStatus01                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         healthStatus01                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_LowOnAmmo_C::OnSupplyStatusChangedEvent(float* ammoStatus01, float* healthStatus01)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.OnSupplyStatusChangedEvent");

	UTutorial_Hint_LowOnAmmo_C_OnSupplyStatusChangedEvent_Params params;
	params.ammoStatus01 = ammoStatus01;
	params.healthStatus01 = healthStatus01;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.OnResourceMined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_LowOnAmmo_C::OnResourceMined(class UCappedResource** Resource, float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.OnResourceMined");

	UTutorial_Hint_LowOnAmmo_C_OnResourceMined_Params params;
	params.Resource = Resource;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.ExecuteUbergraph_Tutorial_Hint_LowOnAmmo
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_LowOnAmmo_C::ExecuteUbergraph_Tutorial_Hint_LowOnAmmo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.ExecuteUbergraph_Tutorial_Hint_LowOnAmmo");

	UTutorial_Hint_LowOnAmmo_C_ExecuteUbergraph_Tutorial_Hint_LowOnAmmo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
