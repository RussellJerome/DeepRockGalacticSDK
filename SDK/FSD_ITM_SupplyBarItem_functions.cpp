// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_SupplyBarItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InProgress                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SupplyBarItem_C::SetProgress(float* InProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetProgress");

	UITM_SupplyBarItem_C_SetProgress_Params params;
	params.InProgress = InProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  InBorderColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>*  InInnerColor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>*  InLowColorColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SupplyBarItem_C::SetColors(TEnumAsByte<ENUM_MenuColors>* InBorderColor, TEnumAsByte<ENUM_MenuColors>* InInnerColor, TEnumAsByte<ENUM_MenuColors>* InLowColorColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetColors");

	UITM_SupplyBarItem_C_SetColors_Params params;
	params.InBorderColor = InBorderColor;
	params.InInnerColor = InInnerColor;
	params.InLowColorColor = InLowColorColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsOn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SupplyBarItem_C::SetOn(bool* IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetOn");

	UITM_SupplyBarItem_C_SetOn_Params params;
	params.IsOn = IsOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SupplyBarItem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.PreConstruct");

	UITM_SupplyBarItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_SupplyBarItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.Construct");

	UITM_SupplyBarItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.OnBlinkingFinished
// (BlueprintCallable, BlueprintEvent)

void UITM_SupplyBarItem_C::OnBlinkingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.OnBlinkingFinished");

	UITM_SupplyBarItem_C_OnBlinkingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.ExecuteUbergraph_ITM_SupplyBarItem
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SupplyBarItem_C::ExecuteUbergraph_ITM_SupplyBarItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.ExecuteUbergraph_ITM_SupplyBarItem");

	UITM_SupplyBarItem_C_ExecuteUbergraph_ITM_SupplyBarItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
