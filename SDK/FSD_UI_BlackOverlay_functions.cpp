// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_BlackOverlay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_BlackOverlay.UI_BlackOverlay_C.SetLoaderImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture**               Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Fade                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BlackOverlay_C::SetLoaderImage(class UTexture** Texture, float* Fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BlackOverlay.UI_BlackOverlay_C.SetLoaderImage");

	UUI_BlackOverlay_C_SetLoaderImage_Params params;
	params.Texture = Texture;
	params.Fade = Fade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BlackOverlay.UI_BlackOverlay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BlackOverlay_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BlackOverlay.UI_BlackOverlay_C.PreConstruct");

	UUI_BlackOverlay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BlackOverlay.UI_BlackOverlay_C.SetFadeProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Fade                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ToSpaceRig                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               loadingImage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BlackOverlay_C::SetFadeProgress(float* Fade, bool* ToSpaceRig, class UTexture** loadingImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BlackOverlay.UI_BlackOverlay_C.SetFadeProgress");

	UUI_BlackOverlay_C_SetFadeProgress_Params params;
	params.Fade = Fade;
	params.ToSpaceRig = ToSpaceRig;
	params.loadingImage = loadingImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BlackOverlay.UI_BlackOverlay_C.ExecuteUbergraph_UI_BlackOverlay
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BlackOverlay_C::ExecuteUbergraph_UI_BlackOverlay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BlackOverlay.UI_BlackOverlay_C.ExecuteUbergraph_UI_BlackOverlay");

	UUI_BlackOverlay_C_ExecuteUbergraph_UI_BlackOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
