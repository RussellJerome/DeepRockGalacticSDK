// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MaskedCanvas_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MaskedCanvas.UI_MaskedCanvas_C.SetMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture**               Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MaskedCanvas_C::SetMask(class UTexture** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MaskedCanvas.UI_MaskedCanvas_C.SetMask");

	UUI_MaskedCanvas_C_SetMask_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MaskedCanvas.UI_MaskedCanvas_C.UpdateMaterial
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_MaskedCanvas_C::UpdateMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MaskedCanvas.UI_MaskedCanvas_C.UpdateMaterial");

	UUI_MaskedCanvas_C_UpdateMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MaskedCanvas.UI_MaskedCanvas_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MaskedCanvas_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MaskedCanvas.UI_MaskedCanvas_C.PreConstruct");

	UUI_MaskedCanvas_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MaskedCanvas.UI_MaskedCanvas_C.ExecuteUbergraph_UI_MaskedCanvas
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MaskedCanvas_C::ExecuteUbergraph_UI_MaskedCanvas(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MaskedCanvas.UI_MaskedCanvas_C.ExecuteUbergraph_UI_MaskedCanvas");

	UUI_MaskedCanvas_C_ExecuteUbergraph_UI_MaskedCanvas_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
