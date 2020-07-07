// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDives_ServerFilters_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.UpdatePasswordFilter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_ServerFilters_C::UpdatePasswordFilter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.UpdatePasswordFilter");

	UITM_DeepDives_ServerFilters_C_UpdatePasswordFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.GetAutoRefresh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AutoRefresh                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerFilters_C::GetAutoRefresh(bool* AutoRefresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.GetAutoRefresh");

	UITM_DeepDives_ServerFilters_C_GetAutoRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AutoRefresh != nullptr)
		*AutoRefresh = params.AutoRefresh;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.FilterSession
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult* InSession                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Should_Filter                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerFilters_C::FilterSession(struct FBlueprintSessionResult* InSession, bool* Should_Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.FilterSession");

	UITM_DeepDives_ServerFilters_C_FilterSession_Params params;
	params.InSession = InSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Should_Filter != nullptr)
		*Should_Filter = params.Should_Filter;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.IsDifficultySelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDifficultySetting**     InDifficulty                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Selected                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerFilters_C::IsDifficultySelected(class UDifficultySetting** InDifficulty, bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.IsDifficultySelected");

	UITM_DeepDives_ServerFilters_C_IsDifficultySelected_Params params;
	params.InDifficulty = InDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selected != nullptr)
		*Selected = params.Selected;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.UpdateSearchDistance
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESteamSearchRegion*            SearchRegion                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerFilters_C::UpdateSearchDistance(ESteamSearchRegion* SearchRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.UpdateSearchDistance");

	UITM_DeepDives_ServerFilters_C_UpdateSearchDistance_Params params;
	params.SearchRegion = SearchRegion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.GetTextFilter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UITM_DeepDives_ServerFilters_C::GetTextFilter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.GetTextFilter");

	UITM_DeepDives_ServerFilters_C_GetTextFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerFilters_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.PreConstruct");

	UITM_DeepDives_ServerFilters_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Filter_TextSearch_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDives_ServerFilters_C::BndEvt__Filter_TextSearch_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Filter_TextSearch_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature");

	UITM_DeepDives_ServerFilters_C_BndEvt__Filter_TextSearch_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_DeepDives_ServerFilters_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.Construct");

	UITM_DeepDives_ServerFilters_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerFilters_C::BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature");

	UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerFilters_C::BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature");

	UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerFilters_C::BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature");

	UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerFilters_C::BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature");

	UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Filter_HazardLevel_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)

void UITM_DeepDives_ServerFilters_C::BndEvt__Filter_HazardLevel_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Filter_HazardLevel_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature");

	UITM_DeepDives_ServerFilters_C_BndEvt__Filter_HazardLevel_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerFilters_C::BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	UITM_DeepDives_ServerFilters_C_BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.RefreshSettings
// (BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_ServerFilters_C::RefreshSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.RefreshSettings");

	UITM_DeepDives_ServerFilters_C_RefreshSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerFilters_C::BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature");

	UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerFilters_C::BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.ExecuteUbergraph_ITM_DeepDives_ServerFilters
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerFilters_C::ExecuteUbergraph_ITM_DeepDives_ServerFilters(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.ExecuteUbergraph_ITM_DeepDives_ServerFilters");

	UITM_DeepDives_ServerFilters_C_ExecuteUbergraph_ITM_DeepDives_ServerFilters_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.OnSearchFiltersChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_ServerFilters_C::OnSearchFiltersChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.OnSearchFiltersChanged__DelegateSignature");

	UITM_DeepDives_ServerFilters_C_OnSearchFiltersChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
