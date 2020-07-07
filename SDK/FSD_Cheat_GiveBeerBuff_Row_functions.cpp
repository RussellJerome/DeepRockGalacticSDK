// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_GiveBeerBuff_Row_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.Set BeerBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTemporaryBuff**         berr_buff_in                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_GiveBeerBuff_Row_C::Set_BeerBuff(class UTemporaryBuff** berr_buff_in)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.Set BeerBuff");

	UCheat_GiveBeerBuff_Row_C_Set_BeerBuff_Params params;
	params.berr_buff_in = berr_buff_in;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_GiveBeerBuff_Row_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature");

	UCheat_GiveBeerBuff_Row_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.Check if owned buff is the active buff
// (BlueprintCallable, BlueprintEvent)

void UCheat_GiveBeerBuff_Row_C::Check_if_owned_buff_is_the_active_buff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.Check if owned buff is the active buff");

	UCheat_GiveBeerBuff_Row_C_Check_if_owned_buff_is_the_active_buff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.ExecuteUbergraph_Cheat_GiveBeerBuff_Row
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_GiveBeerBuff_Row_C::ExecuteUbergraph_Cheat_GiveBeerBuff_Row(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.ExecuteUbergraph_Cheat_GiveBeerBuff_Row");

	UCheat_GiveBeerBuff_Row_C_ExecuteUbergraph_Cheat_GiveBeerBuff_Row_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.On BeerbuffRow checked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCheat_GiveBeerBuff_Row_C** Buff_row_to_skip               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCheat_GiveBeerBuff_Row_C::On_BeerbuffRow_checked__DelegateSignature(class UCheat_GiveBeerBuff_Row_C** Buff_row_to_skip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_GiveBeerBuff_Row.Cheat_GiveBeerBuff_Row_C.On BeerbuffRow checked__DelegateSignature");

	UCheat_GiveBeerBuff_Row_C_On_BeerbuffRow_checked__DelegateSignature_Params params;
	params.Buff_row_to_skip = Buff_row_to_skip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
