// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Trading_Counter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trading_Counter.Trading_Counter_C.SetMaxValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Max_Value                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrading_Counter_C::SetMaxValue(int* Max_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.SetMaxValue");

	UTrading_Counter_C_SetMaxValue_Params params;
	params.Max_Value = Max_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Counter.Trading_Counter_C.GetValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTrading_Counter_C::GetValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.GetValue");

	UTrading_Counter_C_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Trading_Counter.Trading_Counter_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrading_Counter_C::SetValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.SetValue");

	UTrading_Counter_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Counter.Trading_Counter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrading_Counter_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.PreConstruct");

	UTrading_Counter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Counter.Trading_Counter_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_255_OnPressed__DelegateSignature
// (BlueprintEvent)

void UTrading_Counter_C::BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_255_OnPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_255_OnPressed__DelegateSignature");

	UTrading_Counter_C_BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_255_OnPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Counter.Trading_Counter_C.BndEvt__ButtonMinus_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
// (BlueprintEvent)

void UTrading_Counter_C::BndEvt__ButtonMinus_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.BndEvt__ButtonMinus_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature");

	UTrading_Counter_C_BndEvt__ButtonMinus_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Counter.Trading_Counter_C.Hold Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBasic_ButtonScalable_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTrading_Counter_C::Hold_Button(int* Direction, class UBasic_ButtonScalable_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.Hold Button");

	UTrading_Counter_C_Hold_Button_Params params;
	params.Direction = Direction;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Counter.Trading_Counter_C.ExecuteUbergraph_Trading_Counter
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrading_Counter_C::ExecuteUbergraph_Trading_Counter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.ExecuteUbergraph_Trading_Counter");

	UTrading_Counter_C_ExecuteUbergraph_Trading_Counter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Counter.Trading_Counter_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrading_Counter_C::OnValueChanged__DelegateSignature(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.OnValueChanged__DelegateSignature");

	UTrading_Counter_C_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
