// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_DefaultLabel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  ColorSelector                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DefaultLabel_C::SetTextColor(TEnumAsByte<ENUM_MenuColors>* ColorSelector)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTextColor");

	UHUD_DefaultLabel_C_SetTextColor_Params params;
	params.ColorSelector = ColorSelector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetOutlineSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFontOutlineSettings*   InFontInfo_OutlineSettings     (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_DefaultLabel_C::SetOutlineSettings(struct FFontOutlineSettings* InFontInfo_OutlineSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetOutlineSettings");

	UHUD_DefaultLabel_C_SetOutlineSettings_Params params;
	params.InFontInfo_OutlineSettings = InFontInfo_OutlineSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetJustification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETextJustify>*     InJustification                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DefaultLabel_C::SetJustification(TEnumAsByte<ETextJustify>* InJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetJustification");

	UHUD_DefaultLabel_C_SetJustification_Params params;
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTypeFace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_AcuminCondensedTypeface>* Typeface                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DefaultLabel_C::SetTypeFace(TEnumAsByte<ENUM_AcuminCondensedTypeface>* Typeface)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTypeFace");

	UHUD_DefaultLabel_C_SetTypeFace_Params params;
	params.Typeface = Typeface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           inFontSize                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DefaultLabel_C::SetFontSize(int* inFontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetFontSize");

	UHUD_DefaultLabel_C_SetFontSize_Params params;
	params.inFontSize = inFontSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_DefaultLabel_C::SetText(struct FText* NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetText");

	UHUD_DefaultLabel_C_SetText_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DefaultLabel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.PreConstruct");

	UHUD_DefaultLabel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.ExecuteUbergraph_HUD_DefaultLabel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DefaultLabel_C::ExecuteUbergraph_HUD_DefaultLabel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.ExecuteUbergraph_HUD_DefaultLabel");

	UHUD_DefaultLabel_C_ExecuteUbergraph_HUD_DefaultLabel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
