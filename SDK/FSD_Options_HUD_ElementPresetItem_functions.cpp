// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_HUD_ElementPresetItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_HUD_ElementPresetItem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C.PreConstruct");

	UOptions_HUD_ElementPresetItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UOptions_HUD_ElementPresetItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UOptions_HUD_ElementPresetItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C.ExecuteUbergraph_Options_HUD_ElementPresetItem
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_HUD_ElementPresetItem_C::ExecuteUbergraph_Options_HUD_ElementPresetItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C.ExecuteUbergraph_Options_HUD_ElementPresetItem");

	UOptions_HUD_ElementPresetItem_C_ExecuteUbergraph_Options_HUD_ElementPresetItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
