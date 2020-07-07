// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_MenuColors_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_MenuColors.LIB_MenuColors_C.WindowColors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_WindowColors>* InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color1                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color2                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_MenuColors_C::STATIC_WindowColors(TEnumAsByte<ENUM_WindowColors>* InColor, class UObject** __WorldContext, struct FLinearColor* Color1, struct FLinearColor* Color2)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.WindowColors");

	ULIB_MenuColors_C_WindowColors_Params params;
	params.InColor = InColor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color1 != nullptr)
		*Color1 = params.Color1;
	if (Color2 != nullptr)
		*Color2 = params.Color2;
}


// Function LIB_MenuColors.LIB_MenuColors_C.SelectTextColor
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock**             Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>*  FALSE                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>*  TRUE                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_MenuColors_C::STATIC_SelectTextColor(class UTextBlock** Text, TEnumAsByte<ENUM_MenuColors>* FALSE, TEnumAsByte<ENUM_MenuColors>* TRUE, bool* Condition, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.SelectTextColor");

	ULIB_MenuColors_C_SelectTextColor_Params params;
	params.Text = Text;
	params.FALSE = FALSE;
	params.TRUE = TRUE;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_MenuColors.LIB_MenuColors_C.SetTextColor
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock**             Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>*  Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_MenuColors_C::STATIC_SetTextColor(class UTextBlock** Text, TEnumAsByte<ENUM_MenuColors>* Color, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.SetTextColor");

	ULIB_MenuColors_C_SetTextColor_Params params;
	params.Text = Text;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_MenuColors.LIB_MenuColors_C.SelectMenuColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  FALSE                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>*  TRUE                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OutputColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_MenuColors_C::STATIC_SelectMenuColor(TEnumAsByte<ENUM_MenuColors>* FALSE, TEnumAsByte<ENUM_MenuColors>* TRUE, bool* Condition, class UObject** __WorldContext, struct FLinearColor* OutputColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.SelectMenuColor");

	ULIB_MenuColors_C_SelectMenuColor_Params params;
	params.FALSE = FALSE;
	params.TRUE = TRUE;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputColor != nullptr)
		*OutputColor = params.OutputColor;
}


// Function LIB_MenuColors.LIB_MenuColors_C.MenuColorsAndOpacity
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  ColorSelector                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OutputColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_MenuColors_C::STATIC_MenuColorsAndOpacity(TEnumAsByte<ENUM_MenuColors>* ColorSelector, float* Opacity, class UObject** __WorldContext, struct FLinearColor* OutputColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.MenuColorsAndOpacity");

	ULIB_MenuColors_C_MenuColorsAndOpacity_Params params;
	params.ColorSelector = ColorSelector;
	params.Opacity = Opacity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputColor != nullptr)
		*OutputColor = params.OutputColor;
}


// Function LIB_MenuColors.LIB_MenuColors_C.MenuColors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  ColorSelector                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OutputColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_MenuColors_C::STATIC_MenuColors(TEnumAsByte<ENUM_MenuColors>* ColorSelector, class UObject** __WorldContext, struct FLinearColor* OutputColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.MenuColors");

	ULIB_MenuColors_C_MenuColors_Params params;
	params.ColorSelector = ColorSelector;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputColor != nullptr)
		*OutputColor = params.OutputColor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
