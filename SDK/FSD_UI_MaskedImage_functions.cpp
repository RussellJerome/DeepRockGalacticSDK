// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MaskedImage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MaskedImage.UI_MaskedImage_C.SetMaskBlack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MaskedImage_C::SetMaskBlack(bool* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.SetMaskBlack");

	UUI_MaskedImage_C_SetMaskBlack_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MaskedImage.UI_MaskedImage_C.UpdateMaterial
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_MaskedImage_C::UpdateMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.UpdateMaterial");

	UUI_MaskedImage_C_UpdateMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MaskedImage.UI_MaskedImage_C.SetDrawAs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushDrawType>* InBrush_DrawAs                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MaskedImage_C::SetDrawAs(TEnumAsByte<ESlateBrushDrawType>* InBrush_DrawAs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.SetDrawAs");

	UUI_MaskedImage_C_SetDrawAs_Params params;
	params.InBrush_DrawAs = InBrush_DrawAs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MaskedImage.UI_MaskedImage_C.SetMaskInverted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Invert                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MaskedImage_C::SetMaskInverted(bool* Invert)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.SetMaskInverted");

	UUI_MaskedImage_C_SetMaskInverted_Params params;
	params.Invert = Invert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MaskedImage.UI_MaskedImage_C.SetMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture**               Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MaskedImage_C::SetMask(class UTexture** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.SetMask");

	UUI_MaskedImage_C_SetMask_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MaskedImage.UI_MaskedImage_C.SetImageTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            TintColor                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_MaskedImage_C::SetImageTint(struct FSlateColor* TintColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.SetImageTint");

	UUI_MaskedImage_C_SetImageTint_Params params;
	params.TintColor = TintColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MaskedImage.UI_MaskedImage_C.SetImageSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              DesiredSize                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MaskedImage_C::SetImageSize(struct FVector2D* DesiredSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.SetImageSize");

	UUI_MaskedImage_C_SetImageSize_Params params;
	params.DesiredSize = DesiredSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MaskedImage.UI_MaskedImage_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Match_Size                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MaskedImage_C::SetImage(class UTexture2D** Value, bool* Match_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.SetImage");

	UUI_MaskedImage_C_SetImage_Params params;
	params.Value = Value;
	params.Match_Size = Match_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MaskedImage.UI_MaskedImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MaskedImage_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.PreConstruct");

	UUI_MaskedImage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MaskedImage.UI_MaskedImage_C.ExecuteUbergraph_UI_MaskedImage
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MaskedImage_C::ExecuteUbergraph_UI_MaskedImage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.ExecuteUbergraph_UI_MaskedImage");

	UUI_MaskedImage_C_ExecuteUbergraph_UI_MaskedImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
