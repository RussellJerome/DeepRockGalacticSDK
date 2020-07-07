// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_HUD_ElementPresets_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.AddPreset
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHUDVisibilityPresets*         PresetID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_HUD_ElementPresets_C::AddPreset(EHUDVisibilityPresets* PresetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.AddPreset");

	UOptions_HUD_ElementPresets_C_AddPreset_Params params;
	params.PresetID = PresetID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_HUD_ElementPresets_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.PreConstruct");

	UOptions_HUD_ElementPresets_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.ExecuteUbergraph_Options_HUD_ElementPresets
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_HUD_ElementPresets_C::ExecuteUbergraph_Options_HUD_ElementPresets(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.ExecuteUbergraph_Options_HUD_ElementPresets");

	UOptions_HUD_ElementPresets_C_ExecuteUbergraph_Options_HUD_ElementPresets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
