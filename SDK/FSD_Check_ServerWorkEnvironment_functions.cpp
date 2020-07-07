// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Check_ServerWorkEnvironment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.SetIsChecked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InIsChecked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheck_ServerWorkEnvironment_C::SetIsChecked(bool* InIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.SetIsChecked");

	UCheck_ServerWorkEnvironment_C_SetIsChecked_Params params;
	params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCheck_ServerWorkEnvironment_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.IsInteractable");

	UCheck_ServerWorkEnvironment_C_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.GetIsChecked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Checked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCheck_ServerWorkEnvironment_C::GetIsChecked(bool* Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.GetIsChecked");

	UCheck_ServerWorkEnvironment_C_GetIsChecked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Checked != nullptr)
		*Checked = params.Checked;
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheck_ServerWorkEnvironment_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.PreConstruct");

	UCheck_ServerWorkEnvironment_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheck_ServerWorkEnvironment_C::BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	UCheck_ServerWorkEnvironment_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCheck_ServerWorkEnvironment_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UCheck_ServerWorkEnvironment_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCheck_ServerWorkEnvironment_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.Construct");

	UCheck_ServerWorkEnvironment_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.ExecuteUbergraph_Check_ServerWorkEnvironment
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheck_ServerWorkEnvironment_C::ExecuteUbergraph_Check_ServerWorkEnvironment(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.ExecuteUbergraph_Check_ServerWorkEnvironment");

	UCheck_ServerWorkEnvironment_C_ExecuteUbergraph_Check_ServerWorkEnvironment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.OnCheckedChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCheck_ServerWorkEnvironment_C** CheckBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDifficultySetting**     Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheck_ServerWorkEnvironment_C::OnCheckedChanged__DelegateSignature(class UCheck_ServerWorkEnvironment_C** CheckBox, class UDifficultySetting** Difficulty, bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.OnCheckedChanged__DelegateSignature");

	UCheck_ServerWorkEnvironment_C_OnCheckedChanged__DelegateSignature_Params params;
	params.CheckBox = CheckBox;
	params.Difficulty = Difficulty;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
