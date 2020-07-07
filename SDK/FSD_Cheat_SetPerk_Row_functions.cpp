// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SetPerk_Row_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.Set Perk for row
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             Perk_for_row                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SetPerk_Row_C::Set_Perk_for_row(class UPerkAsset** Perk_for_row)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.Set Perk for row");

	UCheat_SetPerk_Row_C_Set_Perk_for_row_Params params;
	params.Perk_for_row = Perk_for_row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SetPerk_Row_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature");

	UCheat_SetPerk_Row_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.Check if owned perk is a active perk
// (BlueprintCallable, BlueprintEvent)

void UCheat_SetPerk_Row_C::Check_if_owned_perk_is_a_active_perk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.Check if owned perk is a active perk");

	UCheat_SetPerk_Row_C_Check_if_owned_perk_is_a_active_perk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.ExecuteUbergraph_Cheat_SetPerk_Row
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SetPerk_Row_C::ExecuteUbergraph_Cheat_SetPerk_Row(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.ExecuteUbergraph_Cheat_SetPerk_Row");

	UCheat_SetPerk_Row_C_ExecuteUbergraph_Cheat_SetPerk_Row_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.On PerkRow checked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCheat_SetPerk_Row_C**   Buff_row_to_skip               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCheat_SetPerk_Row_C::On_PerkRow_checked__DelegateSignature(class UCheat_SetPerk_Row_C** Buff_row_to_skip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SetPerk_Row.Cheat_SetPerk_Row_C.On PerkRow checked__DelegateSignature");

	UCheat_SetPerk_Row_C_On_PerkRow_checked__DelegateSignature_Params params;
	params.Buff_row_to_skip = Buff_row_to_skip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
