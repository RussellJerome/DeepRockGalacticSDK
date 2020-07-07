// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RoundedImage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_RoundedImage.UI_RoundedImage_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RoundedImage_C::SetImage(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RoundedImage.UI_RoundedImage_C.SetImage");

	UUI_RoundedImage_C_SetImage_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RoundedImage.UI_RoundedImage_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_RoundedImage_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RoundedImage.UI_RoundedImage_C.OnPaint");

	UUI_RoundedImage_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UI_RoundedImage.UI_RoundedImage_C.UpdateMaterial
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_RoundedImage_C::UpdateMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RoundedImage.UI_RoundedImage_C.UpdateMaterial");

	UUI_RoundedImage_C_UpdateMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RoundedImage.UI_RoundedImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RoundedImage_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RoundedImage.UI_RoundedImage_C.PreConstruct");

	UUI_RoundedImage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RoundedImage.UI_RoundedImage_C.ExecuteUbergraph_UI_RoundedImage
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RoundedImage_C::ExecuteUbergraph_UI_RoundedImage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RoundedImage.UI_RoundedImage_C.ExecuteUbergraph_UI_RoundedImage");

	UUI_RoundedImage_C_ExecuteUbergraph_UI_RoundedImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
