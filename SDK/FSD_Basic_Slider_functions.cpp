// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_Slider_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Slider.Basic_Slider_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  New_Text                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasic_Slider_C::Set_Text(struct FText* New_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.Set Text");

	UBasic_Slider_C_Set_Text_Params params;
	params.New_Text = New_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Slider.Basic_Slider_C.Get Value
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasic_Slider_C::Get_Value(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.Get Value");

	UBasic_Slider_C_Get_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Basic_Slider.Basic_Slider_C.Get Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasic_Slider_C::Get_Percent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.Get Percent");

	UBasic_Slider_C_Get_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function Basic_Slider.Basic_Slider_C.Set Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Slider_C::Set_Value(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.Set Value");

	UBasic_Slider_C_Set_Value_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Slider.Basic_Slider_C.Set Percent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         New_Percent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Slider_C::Set_Percent(float* New_Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.Set Percent");

	UBasic_Slider_C_Set_Percent_Params params;
	params.New_Percent = New_Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Slider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature");

	UBasic_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_Slider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature");

	UBasic_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_Slider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature");

	UBasic_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Slider.Basic_Slider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Slider_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.PreConstruct");

	UBasic_Slider_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Slider.Basic_Slider_C.Update Text
// (BlueprintCallable, BlueprintEvent)

void UBasic_Slider_C::Update_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.Update Text");

	UBasic_Slider_C_Update_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Slider.Basic_Slider_C.ExecuteUbergraph_Basic_Slider
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Slider_C::ExecuteUbergraph_Basic_Slider(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.ExecuteUbergraph_Basic_Slider");

	UBasic_Slider_C_ExecuteUbergraph_Basic_Slider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Slider.Basic_Slider_C.OnPercentChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Slider_C::OnPercentChanged__DelegateSignature(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.OnPercentChanged__DelegateSignature");

	UBasic_Slider_C_OnPercentChanged__DelegateSignature_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Slider.Basic_Slider_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Slider_C::OnValueChanged__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.OnValueChanged__DelegateSignature");

	UBasic_Slider_C_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
