// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SetDifficulty_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_SetDifficulty.Cheat_SetDifficulty_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCheat_SetDifficulty_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetDifficulty.Cheat_SetDifficulty_C.Construct");

	UCheat_SetDifficulty_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SetDifficulty.Cheat_SetDifficulty_C.Build Difficulty List
// (BlueprintCallable, BlueprintEvent)

void UCheat_SetDifficulty_C::Build_Difficulty_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetDifficulty.Cheat_SetDifficulty_C.Build Difficulty List");

	UCheat_SetDifficulty_C_Build_Difficulty_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SetDifficulty.Cheat_SetDifficulty_C.On Change diff
// (BlueprintCallable, BlueprintEvent)

void UCheat_SetDifficulty_C::On_Change_diff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetDifficulty.Cheat_SetDifficulty_C.On Change diff");

	UCheat_SetDifficulty_C_On_Change_diff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SetDifficulty.Cheat_SetDifficulty_C.ExecuteUbergraph_Cheat_SetDifficulty
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SetDifficulty_C::ExecuteUbergraph_Cheat_SetDifficulty(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetDifficulty.Cheat_SetDifficulty_C.ExecuteUbergraph_Cheat_SetDifficulty");

	UCheat_SetDifficulty_C_ExecuteUbergraph_Cheat_SetDifficulty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
