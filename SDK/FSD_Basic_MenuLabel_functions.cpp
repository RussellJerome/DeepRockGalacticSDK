// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_MenuLabel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_MenuLabel.Basic_MenuLabel_C.SetJustification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETextJustify>*     InJustification                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_MenuLabel_C::SetJustification(TEnumAsByte<ETextJustify>* InJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.SetJustification");

	UBasic_MenuLabel_C_SetJustification_Params params;
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_MenuLabel.Basic_MenuLabel_C.SetTypeFace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_CarbonTypeface>* Typeface                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_MenuLabel_C::SetTypeFace(TEnumAsByte<ENUM_CarbonTypeface>* Typeface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.SetTypeFace");

	UBasic_MenuLabel_C_SetTypeFace_Params params;
	params.Typeface = Typeface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_MenuLabel.Basic_MenuLabel_C.SetFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           inFontSize                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_MenuLabel_C::SetFontSize(int* inFontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.SetFontSize");

	UBasic_MenuLabel_C_SetFontSize_Params params;
	params.inFontSize = inFontSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_MenuLabel.Basic_MenuLabel_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasic_MenuLabel_C::SetText(struct FText* NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.SetText");

	UBasic_MenuLabel_C_SetText_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_MenuLabel.Basic_MenuLabel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_MenuLabel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.PreConstruct");

	UBasic_MenuLabel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_MenuLabel.Basic_MenuLabel_C.ExecuteUbergraph_Basic_MenuLabel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_MenuLabel_C::ExecuteUbergraph_Basic_MenuLabel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.ExecuteUbergraph_Basic_MenuLabel");

	UBasic_MenuLabel_C_ExecuteUbergraph_Basic_MenuLabel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
