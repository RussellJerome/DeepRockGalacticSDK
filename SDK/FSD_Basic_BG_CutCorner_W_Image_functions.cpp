// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_BG_CutCorner_W_Image_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_BG_CutCorner_W_Image_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.PreConstruct");

	UBasic_BG_CutCorner_W_Image_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             ImageBackground                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           BackgroundColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             Front                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_BG_CutCorner_W_Image_C::SetImage(class UTexture2D** ImageBackground, struct FLinearColor* BackgroundColor, class UTexture2D** Front)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetImage");

	UBasic_BG_CutCorner_W_Image_C_SetImage_Params params;
	params.ImageBackground = ImageBackground;
	params.BackgroundColor = BackgroundColor;
	params.Front = Front;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetOutlineColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_BG_CutCorner_W_Image_C::SetOutlineColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetOutlineColor");

	UBasic_BG_CutCorner_W_Image_C_SetOutlineColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetBackgroundColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_BG_CutCorner_W_Image_C::SetBackgroundColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetBackgroundColor");

	UBasic_BG_CutCorner_W_Image_C_SetBackgroundColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.UpdateCornorSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_BG_CutCorner_W_Image_C::UpdateCornorSize(float* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.UpdateCornorSize");

	UBasic_BG_CutCorner_W_Image_C_UpdateCornorSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MM_ButtonStyle>* IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_BG_CutCorner_W_Image_C::SetStyle(TEnumAsByte<E_MM_ButtonStyle>* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetStyle");

	UBasic_BG_CutCorner_W_Image_C_SetStyle_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.ExecuteUbergraph_Basic_BG_CutCorner_W_Image
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_BG_CutCorner_W_Image_C::ExecuteUbergraph_Basic_BG_CutCorner_W_Image(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.ExecuteUbergraph_Basic_BG_CutCorner_W_Image");

	UBasic_BG_CutCorner_W_Image_C_ExecuteUbergraph_Basic_BG_CutCorner_W_Image_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
