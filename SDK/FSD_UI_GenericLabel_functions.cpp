// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_GenericLabel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GenericLabel.UI_GenericLabel_C.GetText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UUI_GenericLabel_C::GetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericLabel.UI_GenericLabel_C.GetText");

	UUI_GenericLabel_C_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function UI_GenericLabel.UI_GenericLabel_C.SetWrappingPolicy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETextWrappingPolicy*           WrappingPolicy                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericLabel_C::SetWrappingPolicy(ETextWrappingPolicy* WrappingPolicy)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericLabel.UI_GenericLabel_C.SetWrappingPolicy");

	UUI_GenericLabel_C_SetWrappingPolicy_Params params;
	params.WrappingPolicy = WrappingPolicy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericLabel.UI_GenericLabel_C.SetWrapTextAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         WrapTextAt                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericLabel_C::SetWrapTextAt(float* WrapTextAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericLabel.UI_GenericLabel_C.SetWrapTextAt");

	UUI_GenericLabel_C_SetWrapTextAt_Params params;
	params.WrapTextAt = WrapTextAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericLabel.UI_GenericLabel_C.SetAutoWrapText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          AutoTextWrap                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericLabel_C::SetAutoWrapText(bool* AutoTextWrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericLabel.UI_GenericLabel_C.SetAutoWrapText");

	UUI_GenericLabel_C_SetAutoWrapText_Params params;
	params.AutoTextWrap = AutoTextWrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericLabel.UI_GenericLabel_C.SetFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           inFontSize                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericLabel_C::SetFontSize(int* inFontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericLabel.UI_GenericLabel_C.SetFontSize");

	UUI_GenericLabel_C_SetFontSize_Params params;
	params.inFontSize = inFontSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericLabel.UI_GenericLabel_C.SetMinDesiredWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MinDesiredWidth                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericLabel_C::SetMinDesiredWidth(float* MinDesiredWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericLabel.UI_GenericLabel_C.SetMinDesiredWidth");

	UUI_GenericLabel_C_SetMinDesiredWidth_Params params;
	params.MinDesiredWidth = MinDesiredWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericLabel.UI_GenericLabel_C.SetJustification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETextJustify>*     Justification                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericLabel_C::SetJustification(TEnumAsByte<ETextJustify>* Justification)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericLabel.UI_GenericLabel_C.SetJustification");

	UUI_GenericLabel_C_SetJustification_Params params;
	params.Justification = Justification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericLabel.UI_GenericLabel_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericLabel_C::SetTextColor(TEnumAsByte<ENUM_MenuColors>* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericLabel.UI_GenericLabel_C.SetTextColor");

	UUI_GenericLabel_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericLabel.UI_GenericLabel_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_GenericLabel_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericLabel.UI_GenericLabel_C.SetText");

	UUI_GenericLabel_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericLabel.UI_GenericLabel_C.SetMargin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMargin*                New_Margin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericLabel_C::SetMargin(struct FMargin* New_Margin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericLabel.UI_GenericLabel_C.SetMargin");

	UUI_GenericLabel_C_SetMargin_Params params;
	params.New_Margin = New_Margin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericLabel.UI_GenericLabel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericLabel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericLabel.UI_GenericLabel_C.PreConstruct");

	UUI_GenericLabel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericLabel.UI_GenericLabel_C.ExecuteUbergraph_UI_GenericLabel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericLabel_C::ExecuteUbergraph_UI_GenericLabel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericLabel.UI_GenericLabel_C.ExecuteUbergraph_UI_GenericLabel");

	UUI_GenericLabel_C_ExecuteUbergraph_UI_GenericLabel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
