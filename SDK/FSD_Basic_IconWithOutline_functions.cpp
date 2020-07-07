// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_IconWithOutline_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_IconWithOutline.Basic_IconWithOutline_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           OutlineColor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           IconColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UseOutline                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          OutlineThicknes                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         IconScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EM_IconShapes>*    IconShape                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_IconWithOutline_C::SetData(class UTexture2D** Icon, struct FLinearColor* OutlineColor, struct FLinearColor* IconColor, bool* UseOutline, bool* OutlineThicknes, float* IconScale, TEnumAsByte<EM_IconShapes>* IconShape)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_IconWithOutline.Basic_IconWithOutline_C.SetData");

	UBasic_IconWithOutline_C_SetData_Params params;
	params.Icon = Icon;
	params.OutlineColor = OutlineColor;
	params.IconColor = IconColor;
	params.UseOutline = UseOutline;
	params.OutlineThicknes = OutlineThicknes;
	params.IconScale = IconScale;
	params.IconShape = IconShape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_IconWithOutline.Basic_IconWithOutline_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_IconWithOutline_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_IconWithOutline.Basic_IconWithOutline_C.PreConstruct");

	UBasic_IconWithOutline_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_IconWithOutline.Basic_IconWithOutline_C.SetOutlineColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_IconWithOutline_C::SetOutlineColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_IconWithOutline.Basic_IconWithOutline_C.SetOutlineColor");

	UBasic_IconWithOutline_C_SetOutlineColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_IconWithOutline.Basic_IconWithOutline_C.ExecuteUbergraph_Basic_IconWithOutline
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_IconWithOutline_C::ExecuteUbergraph_Basic_IconWithOutline(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_IconWithOutline.Basic_IconWithOutline_C.ExecuteUbergraph_Basic_IconWithOutline");

	UBasic_IconWithOutline_C_ExecuteUbergraph_Basic_IconWithOutline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
