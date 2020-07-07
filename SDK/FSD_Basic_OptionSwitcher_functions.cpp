// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_OptionSwitcher_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.RemoveOption
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBasic_OptionSwitcher_C::RemoveOption(struct FText* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.RemoveOption");

	UBasic_OptionSwitcher_C_RemoveOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetOptionCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasic_OptionSwitcher_C::GetOptionCount(int* count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetOptionCount");

	UBasic_OptionSwitcher_C_GetOptionCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (count != nullptr)
		*count = params.count;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ClearOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UBasic_OptionSwitcher_C::ClearOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ClearOptions");

	UBasic_OptionSwitcher_C_ClearOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.Add Option
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Option                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasic_OptionSwitcher_C::Add_Option(struct FText* Option, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.Add Option");

	UBasic_OptionSwitcher_C_Add_Option_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetSelectedValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Value                          (Parm, OutParm)

void UBasic_OptionSwitcher_C::GetSelectedValue(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetSelectedValue");

	UBasic_OptionSwitcher_C_GetSelectedValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetSelectedIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasic_OptionSwitcher_C::GetSelectedIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetSelectedIndex");

	UBasic_OptionSwitcher_C_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.SetSelectedValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasic_OptionSwitcher_C::SetSelectedValue(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.SetSelectedValue");

	UBasic_OptionSwitcher_C_SetSelectedValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.SetSelectedIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_OptionSwitcher_C::SetSelectedIndex(int* NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.SetSelectedIndex");

	UBasic_OptionSwitcher_C_SetSelectedIndex_Params params;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.Set Options
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           options                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           DefaultIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_OptionSwitcher_C::Set_Options(int* DefaultIndex, TArray<struct FText>* options)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.Set Options");

	UBasic_OptionSwitcher_C_Set_Options_Params params;
	params.DefaultIndex = DefaultIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (options != nullptr)
		*options = params.options;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_OptionSwitcher_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.PreConstruct");

	UBasic_OptionSwitcher_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_OptionSwitcher_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature");

	UBasic_OptionSwitcher_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_OptionSwitcher_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature");

	UBasic_OptionSwitcher_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_OptionSwitcher_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UBasic_OptionSwitcher_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_OptionSwitcher_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBasic_OptionSwitcher_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_OptionSwitcher_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UBasic_OptionSwitcher_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_OptionSwitcher_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UBasic_OptionSwitcher_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ExecuteUbergraph_Basic_OptionSwitcher
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_OptionSwitcher_C::ExecuteUbergraph_Basic_OptionSwitcher(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ExecuteUbergraph_Basic_OptionSwitcher");

	UBasic_OptionSwitcher_C_ExecuteUbergraph_Basic_OptionSwitcher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_OptionSwitcher_C::OnSelectionChanged__DelegateSignature(struct FText* Value, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.OnSelectionChanged__DelegateSignature");

	UBasic_OptionSwitcher_C_OnSelectionChanged__DelegateSignature_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
