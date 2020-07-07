// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_CategoryImage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CategoryImage.CategoryImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCategoryImage_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryImage.CategoryImage_C.PreConstruct");

	UCategoryImage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryImage.CategoryImage_C.SetImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           BackgroundColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             OptionalMaskedImage            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCategoryImage_C::SetImage(class UTexture2D** Image, struct FLinearColor* BackgroundColor, class UTexture2D** OptionalMaskedImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryImage.CategoryImage_C.SetImage");

	UCategoryImage_C_SetImage_Params params;
	params.Image = Image;
	params.BackgroundColor = BackgroundColor;
	params.OptionalMaskedImage = OptionalMaskedImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryImage.CategoryImage_C.SetOutlineColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCategoryImage_C::SetOutlineColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryImage.CategoryImage_C.SetOutlineColor");

	UCategoryImage_C_SetOutlineColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryImage.CategoryImage_C.SetMissionIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FObjectiveMissionIcon*  MissionIcon                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UCategoryImage_C::SetMissionIcon(struct FObjectiveMissionIcon* MissionIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryImage.CategoryImage_C.SetMissionIcon");

	UCategoryImage_C_SetMissionIcon_Params params;
	params.MissionIcon = MissionIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryImage.CategoryImage_C.SetStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MM_ButtonStyle>* IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCategoryImage_C::SetStyle(TEnumAsByte<E_MM_ButtonStyle>* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryImage.CategoryImage_C.SetStyle");

	UCategoryImage_C_SetStyle_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryImage.CategoryImage_C.ExecuteUbergraph_CategoryImage
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCategoryImage_C::ExecuteUbergraph_CategoryImage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryImage.CategoryImage_C.ExecuteUbergraph_CategoryImage");

	UCategoryImage_C_ExecuteUbergraph_CategoryImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
