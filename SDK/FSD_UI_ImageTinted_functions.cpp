// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_ImageTinted_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ImageTinted.UI_ImageTinted_C.SetBrushFromTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          MatchSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ImageTinted_C::SetBrushFromTexture(class UTexture2D** Texture, bool* MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.SetBrushFromTexture");

	UUI_ImageTinted_C_SetBrushFromTexture_Params params;
	params.Texture = Texture;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ImageTinted.UI_ImageTinted_C.SetTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  InTint                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InOpacity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ImageTinted_C::SetTint(TEnumAsByte<ENUM_MenuColors>* InTint, float* InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.SetTint");

	UUI_ImageTinted_C_SetTint_Params params;
	params.InTint = InTint;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ImageTinted.UI_ImageTinted_C.SetBrush
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush*            InBrush                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_ImageTinted_C::SetBrush(struct FSlateBrush* InBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.SetBrush");

	UUI_ImageTinted_C_SetBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ImageTinted.UI_ImageTinted_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ImageTinted_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.PreConstruct");

	UUI_ImageTinted_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ImageTinted.UI_ImageTinted_C.ExecuteUbergraph_UI_ImageTinted
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ImageTinted_C::ExecuteUbergraph_UI_ImageTinted(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.ExecuteUbergraph_UI_ImageTinted");

	UUI_ImageTinted_C_ExecuteUbergraph_UI_ImageTinted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
