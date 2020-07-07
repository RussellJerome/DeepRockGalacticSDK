// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_GradientMasked_Image_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.GetTextureOrDefault
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UUI_GradientMasked_Image_C::GetTextureOrDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.GetTextureOrDefault");

	UUI_GradientMasked_Image_C_GetTextureOrDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             InTexture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GradientMasked_Image_C::SetImage(class UTexture2D** InTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.SetImage");

	UUI_GradientMasked_Image_C_SetImage_Params params;
	params.InTexture = InTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.OnMaterialRefreshed
// (BlueprintCallable, BlueprintEvent)

void UUI_GradientMasked_Image_C::OnMaterialRefreshed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.OnMaterialRefreshed");

	UUI_GradientMasked_Image_C_OnMaterialRefreshed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.ExecuteUbergraph_UI_GradientMasked_Image
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GradientMasked_Image_C::ExecuteUbergraph_UI_GradientMasked_Image(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.ExecuteUbergraph_UI_GradientMasked_Image");

	UUI_GradientMasked_Image_C_ExecuteUbergraph_UI_GradientMasked_Image_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
