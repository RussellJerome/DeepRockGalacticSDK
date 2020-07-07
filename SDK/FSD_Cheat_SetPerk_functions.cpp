// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SetPerk_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_SetPerk.Cheat_SetPerk_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCheat_SetPerk_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetPerk.Cheat_SetPerk_C.Construct");

	UCheat_SetPerk_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SetPerk.Cheat_SetPerk_C.Set Perk In Row State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCheat_SetPerk_Row_C**   Buff_row_to_skip               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCheat_SetPerk_C::Set_Perk_In_Row_State(class UCheat_SetPerk_Row_C** Buff_row_to_skip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetPerk.Cheat_SetPerk_C.Set Perk In Row State");

	UCheat_SetPerk_C_Set_Perk_In_Row_State_Params params;
	params.Buff_row_to_skip = Buff_row_to_skip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SetPerk.Cheat_SetPerk_C.ExecuteUbergraph_Cheat_SetPerk
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SetPerk_C::ExecuteUbergraph_Cheat_SetPerk(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetPerk.Cheat_SetPerk_C.ExecuteUbergraph_Cheat_SetPerk");

	UCheat_SetPerk_C_ExecuteUbergraph_Cheat_SetPerk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
