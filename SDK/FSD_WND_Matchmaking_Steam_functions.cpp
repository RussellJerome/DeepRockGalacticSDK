// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Matchmaking_Steam_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.GetQuickJoinSettings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBiome*                  SearchBiome                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMissionTemplate*        SearchMissionType              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_Steam_C::GetQuickJoinSettings(class UBiome** SearchBiome, class UMissionTemplate** SearchMissionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.GetQuickJoinSettings");

	UWND_Matchmaking_Steam_C_GetQuickJoinSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SearchBiome != nullptr)
		*SearchBiome = params.SearchBiome;
	if (SearchMissionType != nullptr)
		*SearchMissionType = params.SearchMissionType;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.GetShortTimeString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UWND_Matchmaking_Steam_C::GetShortTimeString(float* Seconds, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.GetShortTimeString");

	UWND_Matchmaking_Steam_C_GetShortTimeString_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWND_Matchmaking_Steam_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnKeyUp");

	UWND_Matchmaking_Steam_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_50EA0D244B2E8D5AD321FE9AD32604C7
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnFailure_50EA0D244B2E8D5AD321FE9AD32604C7()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_50EA0D244B2E8D5AD321FE9AD32604C7");

	UWND_Matchmaking_Steam_C_OnFailure_50EA0D244B2E8D5AD321FE9AD32604C7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_50EA0D244B2E8D5AD321FE9AD32604C7
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnSuccess_50EA0D244B2E8D5AD321FE9AD32604C7()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_50EA0D244B2E8D5AD321FE9AD32604C7");

	UWND_Matchmaking_Steam_C_OnSuccess_50EA0D244B2E8D5AD321FE9AD32604C7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_DB01A13D4436619AED64DBAF5AA33079
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnFailure_DB01A13D4436619AED64DBAF5AA33079()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_DB01A13D4436619AED64DBAF5AA33079");

	UWND_Matchmaking_Steam_C_OnFailure_DB01A13D4436619AED64DBAF5AA33079_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_DB01A13D4436619AED64DBAF5AA33079
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnSuccess_DB01A13D4436619AED64DBAF5AA33079()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_DB01A13D4436619AED64DBAF5AA33079");

	UWND_Matchmaking_Steam_C_OnSuccess_DB01A13D4436619AED64DBAF5AA33079_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_2F439A5344ADFB92D1C27FB71FFFFFF7
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnFailure_2F439A5344ADFB92D1C27FB71FFFFFF7()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_2F439A5344ADFB92D1C27FB71FFFFFF7");

	UWND_Matchmaking_Steam_C_OnFailure_2F439A5344ADFB92D1C27FB71FFFFFF7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_2F439A5344ADFB92D1C27FB71FFFFFF7
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnSuccess_2F439A5344ADFB92D1C27FB71FFFFFF7()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_2F439A5344ADFB92D1C27FB71FFFFFF7");

	UWND_Matchmaking_Steam_C_OnSuccess_2F439A5344ADFB92D1C27FB71FFFFFF7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_721B2BE34FF99567F4914C86B67DADFA
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnFailure_721B2BE34FF99567F4914C86B67DADFA()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_721B2BE34FF99567F4914C86B67DADFA");

	UWND_Matchmaking_Steam_C_OnFailure_721B2BE34FF99567F4914C86B67DADFA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_721B2BE34FF99567F4914C86B67DADFA
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnSuccess_721B2BE34FF99567F4914C86B67DADFA()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_721B2BE34FF99567F4914C86B67DADFA");

	UWND_Matchmaking_Steam_C_OnSuccess_721B2BE34FF99567F4914C86B67DADFA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWND_Matchmaking_Steam_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWND_Matchmaking_Steam_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_Steam_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.PreConstruct");

	UWND_Matchmaking_Steam_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Cancel
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Steam_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Cancel");

	UWND_Matchmaking_Steam_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWND_Matchmaking_Steam_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Construct");

	UWND_Matchmaking_Steam_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_Steam_C::BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(struct FText* Value, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");

	UWND_Matchmaking_Steam_C_BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnShown
// (Event, Public, BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnShown");

	UWND_Matchmaking_Steam_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Steam_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Reset");

	UWND_Matchmaking_Steam_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.ServelistChanged
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Steam_C::ServelistChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.ServelistChanged");

	UWND_Matchmaking_Steam_C_ServelistChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_Matchmaking_Steam_C::BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWND_Matchmaking_Steam_C_BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Search
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Steam_C::Search()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Search");

	UWND_Matchmaking_Steam_C_Search_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Answer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_Steam_C::Answer(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Answer");

	UWND_Matchmaking_Steam_C_Answer_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Basic_ButtonScalable2_C_0_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_Matchmaking_Steam_C::BndEvt__Basic_ButtonScalable2_C_0_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Basic_ButtonScalable2_C_0_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature");

	UWND_Matchmaking_Steam_C_BndEvt__Basic_ButtonScalable2_C_0_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.ExecuteUbergraph_WND_Matchmaking_Steam
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_Steam_C::ExecuteUbergraph_WND_Matchmaking_Steam(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.ExecuteUbergraph_WND_Matchmaking_Steam");

	UWND_Matchmaking_Steam_C_ExecuteUbergraph_WND_Matchmaking_Steam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
