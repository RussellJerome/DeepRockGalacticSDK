// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_Resupply_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_Resupply_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ReceiveOnInitialized");

	UTutorial_Hint_Resupply_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ReceiveOnHidden
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_Resupply_C::ReceiveOnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ReceiveOnHidden");

	UTutorial_Hint_Resupply_C_ReceiveOnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ResourceAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_Resupply_C::ResourceAdded(class UCappedResource** Resource, float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ResourceAdded");

	UTutorial_Hint_Resupply_C_ResourceAdded_Params params;
	params.Resource = Resource;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ExecuteUbergraph_Tutorial_Hint_Resupply
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_Resupply_C::ExecuteUbergraph_Tutorial_Hint_Resupply(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ExecuteUbergraph_Tutorial_Hint_Resupply");

	UTutorial_Hint_Resupply_C_ExecuteUbergraph_Tutorial_Hint_Resupply_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
