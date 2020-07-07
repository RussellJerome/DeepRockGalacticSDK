// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SetDifficultyRow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.Set Difficulty Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDifficultySetting**     Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SetDifficultyRow_C::Set_Difficulty_Item(class UDifficultySetting** Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.Set Difficulty Item");

	UCheat_SetDifficultyRow_C_Set_Difficulty_Item_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.Check if owned difficulty is active
// (BlueprintCallable, BlueprintEvent)

void UCheat_SetDifficultyRow_C::Check_if_owned_difficulty_is_active()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.Check if owned difficulty is active");

	UCheat_SetDifficultyRow_C_Check_if_owned_difficulty_is_active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.BndEvt__CheckBox_SelectDiff_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SetDifficultyRow_C::BndEvt__CheckBox_SelectDiff_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.BndEvt__CheckBox_SelectDiff_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	UCheat_SetDifficultyRow_C_BndEvt__CheckBox_SelectDiff_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.ExecuteUbergraph_Cheat_SetDifficultyRow
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SetDifficultyRow_C::ExecuteUbergraph_Cheat_SetDifficultyRow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.ExecuteUbergraph_Cheat_SetDifficultyRow");

	UCheat_SetDifficultyRow_C_ExecuteUbergraph_Cheat_SetDifficultyRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.On Difficulty Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCheat_SetDifficultyRow_C::On_Difficulty_Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetDifficultyRow.Cheat_SetDifficultyRow_C.On Difficulty Selected__DelegateSignature");

	UCheat_SetDifficultyRow_C_On_Difficulty_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
