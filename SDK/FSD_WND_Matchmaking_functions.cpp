// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Matchmaking_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Matchmaking.WND_Matchmaking_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWND_Matchmaking_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.OnKeyUp");

	UWND_Matchmaking_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_Matchmaking.WND_Matchmaking_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           ETA                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_C::SetInfo(class FString* Status, int* ETA)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.SetInfo");

	UWND_Matchmaking_C_SetInfo_Params params;
	params.Status = Status;
	params.ETA = ETA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking.WND_Matchmaking_C.OnCancelled_5BBD71A6477F1AA5B558078C2A214949
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_C::OnCancelled_5BBD71A6477F1AA5B558078C2A214949()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.OnCancelled_5BBD71A6477F1AA5B558078C2A214949");

	UWND_Matchmaking_C_OnCancelled_5BBD71A6477F1AA5B558078C2A214949_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking.WND_Matchmaking_C.OnFailure_5BBD71A6477F1AA5B558078C2A214949
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_C::OnFailure_5BBD71A6477F1AA5B558078C2A214949()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.OnFailure_5BBD71A6477F1AA5B558078C2A214949");

	UWND_Matchmaking_C_OnFailure_5BBD71A6477F1AA5B558078C2A214949_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking.WND_Matchmaking_C.OnSuccess_5BBD71A6477F1AA5B558078C2A214949
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_C::OnSuccess_5BBD71A6477F1AA5B558078C2A214949()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.OnSuccess_5BBD71A6477F1AA5B558078C2A214949");

	UWND_Matchmaking_C_OnSuccess_5BBD71A6477F1AA5B558078C2A214949_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking.WND_Matchmaking_C.OnFailure_5C0F74314285F8B9B80A20BE4FAC1DCD
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_C::OnFailure_5C0F74314285F8B9B80A20BE4FAC1DCD()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.OnFailure_5C0F74314285F8B9B80A20BE4FAC1DCD");

	UWND_Matchmaking_C_OnFailure_5C0F74314285F8B9B80A20BE4FAC1DCD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking.WND_Matchmaking_C.OnSuccess_5C0F74314285F8B9B80A20BE4FAC1DCD
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_C::OnSuccess_5C0F74314285F8B9B80A20BE4FAC1DCD()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.OnSuccess_5C0F74314285F8B9B80A20BE4FAC1DCD");

	UWND_Matchmaking_C_OnSuccess_5C0F74314285F8B9B80A20BE4FAC1DCD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking.WND_Matchmaking_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWND_Matchmaking_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWND_Matchmaking_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking.WND_Matchmaking_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.PreConstruct");

	UWND_Matchmaking_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking.WND_Matchmaking_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_C::Show(class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.Show");

	UWND_Matchmaking_C_Show_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking.WND_Matchmaking_C.Cancel
// (BlueprintCallable, BlueprintEvent)

void UWND_Matchmaking_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.Cancel");

	UWND_Matchmaking_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking.WND_Matchmaking_C.MatchStatusUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Description                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_C::MatchStatusUpdate(class FString* Description, int* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.MatchStatusUpdate");

	UWND_Matchmaking_C_MatchStatusUpdate_Params params;
	params.Description = Description;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Matchmaking.WND_Matchmaking_C.ExecuteUbergraph_WND_Matchmaking
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Matchmaking_C::ExecuteUbergraph_WND_Matchmaking(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.ExecuteUbergraph_WND_Matchmaking");

	UWND_Matchmaking_C_ExecuteUbergraph_WND_Matchmaking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
