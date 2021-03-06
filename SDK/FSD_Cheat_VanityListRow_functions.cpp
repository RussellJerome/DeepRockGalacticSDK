// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_VanityListRow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_VanityListRow.Cheat_VanityListRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCheat_VanityListRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_VanityListRow.Cheat_VanityListRow_C.Construct");

	UCheat_VanityListRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_VanityListRow.Cheat_VanityListRow_C.BndEvt__CheckBox_49_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_VanityListRow_C::BndEvt__CheckBox_49_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_VanityListRow.Cheat_VanityListRow_C.BndEvt__CheckBox_49_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	UCheat_VanityListRow_C_BndEvt__CheckBox_49_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_VanityListRow.Cheat_VanityListRow_C.ExecuteUbergraph_Cheat_VanityListRow
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_VanityListRow_C::ExecuteUbergraph_Cheat_VanityListRow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_VanityListRow.Cheat_VanityListRow_C.ExecuteUbergraph_Cheat_VanityListRow");

	UCheat_VanityListRow_C_ExecuteUbergraph_Cheat_VanityListRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_VanityListRow.Cheat_VanityListRow_C.OnCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Checked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UVanityItem**            Vanity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVanitySlot*                   Vanity_Type                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_VanityListRow_C::OnCheckStateChanged__DelegateSignature(bool* Is_Checked, class UVanityItem** Vanity, EVanitySlot* Vanity_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_VanityListRow.Cheat_VanityListRow_C.OnCheckStateChanged__DelegateSignature");

	UCheat_VanityListRow_C_OnCheckStateChanged__DelegateSignature_Params params;
	params.Is_Checked = Is_Checked;
	params.Vanity = Vanity;
	params.Vanity_Type = Vanity_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
