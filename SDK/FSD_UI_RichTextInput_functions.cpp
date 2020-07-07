// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RichTextInput_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_RichTextInput.UI_RichTextInput_C.ShowFromDisplayDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputDisplay*          details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_RichTextInput_C::ShowFromDisplayDetails(struct FInputDisplay* details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.ShowFromDisplayDetails");

	UUI_RichTextInput_C_ShowFromDisplayDetails_Params params;
	params.details = details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RichTextInput.UI_RichTextInput_C.SetInteraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputInteraction*             InInteraction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RichTextInput_C::SetInteraction(EInputInteraction* InInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.SetInteraction");

	UUI_RichTextInput_C_SetInteraction_Params params;
	params.InInteraction = InInteraction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RichTextInput.UI_RichTextInput_C.ShowAsText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor*           InTint                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RichTextInput_C::ShowAsText(struct FText* InText, struct FLinearColor* InTint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.ShowAsText");

	UUI_RichTextInput_C_ShowAsText_Params params;
	params.InText = InText;
	params.InTint = InTint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RichTextInput.UI_RichTextInput_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InHeightOverride               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InWidthOverride                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InMinDesiredWidth              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RichTextInput_C::SetSize(float* InHeightOverride, float* InWidthOverride, float* InMinDesiredWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.SetSize");

	UUI_RichTextInput_C_SetSize_Params params;
	params.InHeightOverride = InHeightOverride;
	params.InWidthOverride = InWidthOverride;
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RichTextInput.UI_RichTextInput_C.ShowAsIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             InTexture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           InTint                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RichTextInput_C::ShowAsIcon(class UTexture2D** InTexture, struct FLinearColor* InTint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.ShowAsIcon");

	UUI_RichTextInput_C_ShowAsIcon_Params params;
	params.InTexture = InTexture;
	params.InTint = InTint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RichTextInput.UI_RichTextInput_C.ReceiveInputDetails
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FInputDisplay*          InDisplay                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_RichTextInput_C::ReceiveInputDetails(struct FInputDisplay* InDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.ReceiveInputDetails");

	UUI_RichTextInput_C_ReceiveInputDetails_Params params;
	params.InDisplay = InDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RichTextInput.UI_RichTextInput_C.ReceiveInputUnknown
// (Event, Protected, BlueprintEvent)

void UUI_RichTextInput_C::ReceiveInputUnknown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.ReceiveInputUnknown");

	UUI_RichTextInput_C_ReceiveInputUnknown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RichTextInput.UI_RichTextInput_C.ExecuteUbergraph_UI_RichTextInput
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RichTextInput_C::ExecuteUbergraph_UI_RichTextInput(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.ExecuteUbergraph_UI_RichTextInput");

	UUI_RichTextInput_C_ExecuteUbergraph_UI_RichTextInput_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
