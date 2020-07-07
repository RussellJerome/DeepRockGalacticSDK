// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_GradientMasked_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.GetDynamicMaterial
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GradientMasked_Base_C::GetDynamicMaterial(class UMaterialInstanceDynamic** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.GetDynamicMaterial");

	UUI_GradientMasked_Base_C_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
}


// Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.Refresh
// (Protected, BlueprintCallable, BlueprintEvent)

void UUI_GradientMasked_Base_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.Refresh");

	UUI_GradientMasked_Base_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.GetMaterialTemplate
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_MaskedGradientTypes>* GradientType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      OutTemplate                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GradientMasked_Base_C::GetMaterialTemplate(TEnumAsByte<ENUM_MaskedGradientTypes>* GradientType, class UMaterialInterface** OutTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.GetMaterialTemplate");

	UUI_GradientMasked_Base_C_GetMaterialTemplate_Params params;
	params.GradientType = GradientType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTemplate != nullptr)
		*OutTemplate = params.OutTemplate;
}


// Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GradientMasked_Base_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.PreConstruct");

	UUI_GradientMasked_Base_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.OnMaterialRefreshed
// (BlueprintCallable, BlueprintEvent)

void UUI_GradientMasked_Base_C::OnMaterialRefreshed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.OnMaterialRefreshed");

	UUI_GradientMasked_Base_C_OnMaterialRefreshed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.ExecuteUbergraph_UI_GradientMasked_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GradientMasked_Base_C::ExecuteUbergraph_UI_GradientMasked_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.ExecuteUbergraph_UI_GradientMasked_Base");

	UUI_GradientMasked_Base_C_ExecuteUbergraph_UI_GradientMasked_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
