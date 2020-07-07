// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_FullScreen_Resolutions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShouldResolutionBeEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFSDGameUserSettings**   usersettings                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOptions_FullScreen_Resolutions_C::ShouldResolutionBeEnabled(class UFSDGameUserSettings** usersettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShouldResolutionBeEnabled");

	UOptions_FullScreen_Resolutions_C_ShouldResolutionBeEnabled_Params params;
	params.usersettings = usersettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.StringToRes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FIntPoint               IntPoint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptions_FullScreen_Resolutions_C::StringToRes(class FString* String, struct FIntPoint* IntPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.StringToRes");

	UOptions_FullScreen_Resolutions_C_StringToRes_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntPoint != nullptr)
		*IntPoint = params.IntPoint;
}


// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ResToString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint               IntPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class FString                  String                         (Parm, OutParm, ZeroConstructor)

void UOptions_FullScreen_Resolutions_C::ResToString(struct FIntPoint* IntPoint, class FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ResToString");

	UOptions_FullScreen_Resolutions_C_ResToString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntPoint != nullptr)
		*IntPoint = params.IntPoint;
	if (String != nullptr)
		*String = params.String;
}


// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_FullScreen_Resolutions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.Construct");

	UOptions_FullScreen_Resolutions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_FullScreen_Resolutions_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.UINeedsUpdate");

	UOptions_FullScreen_Resolutions_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShowUI
// (BlueprintCallable, BlueprintEvent)

void UOptions_FullScreen_Resolutions_C::ShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShowUI");

	UOptions_FullScreen_Resolutions_C_ShowUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_FullScreen_Resolutions_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature(struct FText* Value, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature");

	UOptions_FullScreen_Resolutions_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ExecuteUbergraph_Options_FullScreen_Resolutions
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_FullScreen_Resolutions_C::ExecuteUbergraph_Options_FullScreen_Resolutions(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ExecuteUbergraph_Options_FullScreen_Resolutions");

	UOptions_FullScreen_Resolutions_C_ExecuteUbergraph_Options_FullScreen_Resolutions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
