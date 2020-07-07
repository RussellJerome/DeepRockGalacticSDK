// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_GiveBeerBuff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_GiveBeerBuff.Cheat_GiveBeerBuff_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCheat_GiveBeerBuff_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_GiveBeerBuff.Cheat_GiveBeerBuff_C.Construct");

	UCheat_GiveBeerBuff_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_GiveBeerBuff.Cheat_GiveBeerBuff_C.set selected row active
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCheat_GiveBeerBuff_Row_C** Buff_row_to_skip               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCheat_GiveBeerBuff_C::set_selected_row_active(class UCheat_GiveBeerBuff_Row_C** Buff_row_to_skip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_GiveBeerBuff.Cheat_GiveBeerBuff_C.set selected row active");

	UCheat_GiveBeerBuff_C_set_selected_row_active_Params params;
	params.Buff_row_to_skip = Buff_row_to_skip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_GiveBeerBuff.Cheat_GiveBeerBuff_C.ExecuteUbergraph_Cheat_GiveBeerBuff
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_GiveBeerBuff_C::ExecuteUbergraph_Cheat_GiveBeerBuff(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_GiveBeerBuff.Cheat_GiveBeerBuff_C.ExecuteUbergraph_Cheat_GiveBeerBuff");

	UCheat_GiveBeerBuff_C_ExecuteUbergraph_Cheat_GiveBeerBuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
