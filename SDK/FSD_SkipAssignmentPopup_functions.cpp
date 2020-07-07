// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_SkipAssignmentPopup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkipAssignmentPopup.SkipAssignmentPopup_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USkipAssignmentPopup_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.OnKeyUp");

	USkipAssignmentPopup_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkipAssignmentPopup.SkipAssignmentPopup_C.OnShow
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  Message                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkipAssignmentPopup_C::OnShow(struct FText* Title, struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.OnShow");

	USkipAssignmentPopup_C_OnShow_Params params;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkipAssignmentPopup.SkipAssignmentPopup_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void USkipAssignmentPopup_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	USkipAssignmentPopup_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkipAssignmentPopup.SkipAssignmentPopup_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void USkipAssignmentPopup_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	USkipAssignmentPopup_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkipAssignmentPopup.SkipAssignmentPopup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkipAssignmentPopup_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.PreConstruct");

	USkipAssignmentPopup_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkipAssignmentPopup.SkipAssignmentPopup_C.Yes
// (BlueprintCallable, BlueprintEvent)

void USkipAssignmentPopup_C::Yes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.Yes");

	USkipAssignmentPopup_C_Yes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkipAssignmentPopup.SkipAssignmentPopup_C.No
// (BlueprintCallable, BlueprintEvent)

void USkipAssignmentPopup_C::No()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.No");

	USkipAssignmentPopup_C_No_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkipAssignmentPopup.SkipAssignmentPopup_C.ExecuteUbergraph_SkipAssignmentPopup
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkipAssignmentPopup_C::ExecuteUbergraph_SkipAssignmentPopup(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.ExecuteUbergraph_SkipAssignmentPopup");

	USkipAssignmentPopup_C_ExecuteUbergraph_SkipAssignmentPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
