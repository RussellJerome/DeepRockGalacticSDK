// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_Window_CutCorner_Gradient_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Window_CutCorner_Gradient_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.PreConstruct");

	UBasic_Window_CutCorner_Gradient_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.SetBackgroundTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Window_CutCorner_Gradient_C::SetBackgroundTint(struct FLinearColor* InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.SetBackgroundTint");

	UBasic_Window_CutCorner_Gradient_C_SetBackgroundTint_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.SetColorbarColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  Colorbar_Tint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Window_CutCorner_Gradient_C::SetColorbarColor(TEnumAsByte<ENUM_MenuColors>* Colorbar_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.SetColorbarColor");

	UBasic_Window_CutCorner_Gradient_C_SetColorbarColor_Params params;
	params.Colorbar_Tint = Colorbar_Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.ExecuteUbergraph_Basic_Window_CutCorner_Gradient
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Window_CutCorner_Gradient_C::ExecuteUbergraph_Basic_Window_CutCorner_Gradient(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.ExecuteUbergraph_Basic_Window_CutCorner_Gradient");

	UBasic_Window_CutCorner_Gradient_C_ExecuteUbergraph_Basic_Window_CutCorner_Gradient_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
