// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Filter_ServerWorkEnvironment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OpenMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFilter_ServerWorkEnvironment_C::OpenMenu(bool* Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OpenMenu");

	UFilter_ServerWorkEnvironment_C_OpenMenu_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.GetSelectedDifficulties
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UDifficultySetting*> Difficulties                   (Parm, OutParm, ZeroConstructor)

void UFilter_ServerWorkEnvironment_C::GetSelectedDifficulties(TArray<class UDifficultySetting*>* Difficulties)
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.GetSelectedDifficulties");

	UFilter_ServerWorkEnvironment_C_GetSelectedDifficulties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difficulties != nullptr)
		*Difficulties = params.Difficulties;
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.IsDifficultySelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDifficultySetting**     InDifficulty                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Selected                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFilter_ServerWorkEnvironment_C::IsDifficultySelected(class UDifficultySetting** InDifficulty, bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.IsDifficultySelected");

	UFilter_ServerWorkEnvironment_C_IsDifficultySelected_Params params;
	params.InDifficulty = InDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selected != nullptr)
		*Selected = params.Selected;
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.UpdateSubheader
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFilter_ServerWorkEnvironment_C::UpdateSubheader()
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.UpdateSubheader");

	UFilter_ServerWorkEnvironment_C_UpdateSubheader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Add Work Environment
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDifficultySetting**     Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCheck_ServerWorkEnvironment_C* OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           OutIsChecked                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFilter_ServerWorkEnvironment_C::Add_Work_Environment(class UDifficultySetting** Difficulty, class UCheck_ServerWorkEnvironment_C** OutWidget, bool* OutIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Add Work Environment");

	UFilter_ServerWorkEnvironment_C_Add_Work_Environment_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
	if (OutIsChecked != nullptr)
		*OutIsChecked = params.OutIsChecked;
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFilter_ServerWorkEnvironment_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.PreConstruct");

	UFilter_ServerWorkEnvironment_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnCheckedChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCheck_ServerWorkEnvironment_C** CheckBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDifficultySetting**     Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFilter_ServerWorkEnvironment_C::OnCheckedChanged(class UCheck_ServerWorkEnvironment_C** CheckBox, class UDifficultySetting** Difficulty, bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnCheckedChanged");

	UFilter_ServerWorkEnvironment_C_OnCheckedChanged_Params params;
	params.CheckBox = CheckBox;
	params.Difficulty = Difficulty;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UFilter_ServerWorkEnvironment_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Reset");

	UFilter_ServerWorkEnvironment_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.ExecuteUbergraph_Filter_ServerWorkEnvironment
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFilter_ServerWorkEnvironment_C::ExecuteUbergraph_Filter_ServerWorkEnvironment(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.ExecuteUbergraph_Filter_ServerWorkEnvironment");

	UFilter_ServerWorkEnvironment_C_ExecuteUbergraph_Filter_ServerWorkEnvironment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFilter_ServerWorkEnvironment_C::OnSelectionChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnSelectionChanged__DelegateSignature");

	UFilter_ServerWorkEnvironment_C_OnSelectionChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
