// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Matchmaking_Random_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.GetShortTimeString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UWND_Matchmaking_Random_C::GetShortTimeString(float* Seconds, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.GetShortTimeString");

	UWND_Matchmaking_Random_C_GetShortTimeString_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWND_Matchmaking_Random_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnKeyUp");

	UWND_Matchmaking_Random_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           ETA                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_Random_C::SetInfo(class FString* Status, int* ETA)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.SetInfo");

	UWND_Matchmaking_Random_C_SetInfo_Params params;
	params.Status = Status;
	params.ETA = ETA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnCancelled_60C36B444D1043ED6EFCA8BEE5B2A546
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Random_C::OnCancelled_60C36B444D1043ED6EFCA8BEE5B2A546()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnCancelled_60C36B444D1043ED6EFCA8BEE5B2A546");

	UWND_Matchmaking_Random_C_OnCancelled_60C36B444D1043ED6EFCA8BEE5B2A546_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_60C36B444D1043ED6EFCA8BEE5B2A546
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Random_C::OnFailure_60C36B444D1043ED6EFCA8BEE5B2A546()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_60C36B444D1043ED6EFCA8BEE5B2A546");

	UWND_Matchmaking_Random_C_OnFailure_60C36B444D1043ED6EFCA8BEE5B2A546_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_60C36B444D1043ED6EFCA8BEE5B2A546
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Random_C::OnSuccess_60C36B444D1043ED6EFCA8BEE5B2A546()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_60C36B444D1043ED6EFCA8BEE5B2A546");

	UWND_Matchmaking_Random_C_OnSuccess_60C36B444D1043ED6EFCA8BEE5B2A546_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_B5F48FED4760268A1AB776BBA80FEA51
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Random_C::OnFailure_B5F48FED4760268A1AB776BBA80FEA51()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_B5F48FED4760268A1AB776BBA80FEA51");

	UWND_Matchmaking_Random_C_OnFailure_B5F48FED4760268A1AB776BBA80FEA51_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_B5F48FED4760268A1AB776BBA80FEA51
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Random_C::OnSuccess_B5F48FED4760268A1AB776BBA80FEA51()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_B5F48FED4760268A1AB776BBA80FEA51");

	UWND_Matchmaking_Random_C_OnSuccess_B5F48FED4760268A1AB776BBA80FEA51_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_B619D28D4A771A7C1DE3BB9DA24BF467
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Random_C::OnFailure_B619D28D4A771A7C1DE3BB9DA24BF467()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_B619D28D4A771A7C1DE3BB9DA24BF467");

	UWND_Matchmaking_Random_C_OnFailure_B619D28D4A771A7C1DE3BB9DA24BF467_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_B619D28D4A771A7C1DE3BB9DA24BF467
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Random_C::OnSuccess_B619D28D4A771A7C1DE3BB9DA24BF467()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_B619D28D4A771A7C1DE3BB9DA24BF467");

	UWND_Matchmaking_Random_C_OnSuccess_B619D28D4A771A7C1DE3BB9DA24BF467_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWND_Matchmaking_Random_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWND_Matchmaking_Random_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_Random_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.PreConstruct");

	UWND_Matchmaking_Random_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Cancel
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Random_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Cancel");

	UWND_Matchmaking_Random_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWND_Matchmaking_Random_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Construct");

	UWND_Matchmaking_Random_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_Random_C::BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(struct FText* Value, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");

	UWND_Matchmaking_Random_C_BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_Matchmaking_Random_C::BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWND_Matchmaking_Random_C_BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.MatchStatusUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Description                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_Random_C::MatchStatusUpdate(class FString* Description, int* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.MatchStatusUpdate");

	UWND_Matchmaking_Random_C_MatchStatusUpdate_Params params;
	params.Description = Description;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Search
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Random_C::Search()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Search");

	UWND_Matchmaking_Random_C_Search_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnShown
// (Event, Public, BlueprintEvent)

void UWND_Matchmaking_Random_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnShown");

	UWND_Matchmaking_Random_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_Random_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Tick");

	UWND_Matchmaking_Random_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_Random_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Reset");

	UWND_Matchmaking_Random_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnClosed
// (Event, Public, BlueprintEvent)

void UWND_Matchmaking_Random_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnClosed");

	UWND_Matchmaking_Random_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.ExecuteUbergraph_WND_Matchmaking_Random
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_Random_C::ExecuteUbergraph_WND_Matchmaking_Random(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.ExecuteUbergraph_WND_Matchmaking_Random");

	UWND_Matchmaking_Random_C_ExecuteUbergraph_WND_Matchmaking_Random_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
