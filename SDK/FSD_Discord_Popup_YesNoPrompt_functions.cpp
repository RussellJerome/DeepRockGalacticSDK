// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Discord_Popup_YesNoPrompt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UDiscord_Popup_YesNoPrompt_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.OnKeyUp");

	UDiscord_Popup_YesNoPrompt_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.OnShow
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  Message                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDiscord_Popup_YesNoPrompt_C::OnShow(struct FText* Title, struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.OnShow");

	UDiscord_Popup_YesNoPrompt_C_OnShow_Params params;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UDiscord_Popup_YesNoPrompt_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UDiscord_Popup_YesNoPrompt_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UDiscord_Popup_YesNoPrompt_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UDiscord_Popup_YesNoPrompt_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDiscord_Popup_YesNoPrompt_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.PreConstruct");

	UDiscord_Popup_YesNoPrompt_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Yes
// (BlueprintCallable, BlueprintEvent)

void UDiscord_Popup_YesNoPrompt_C::Yes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Yes");

	UDiscord_Popup_YesNoPrompt_C_Yes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.No
// (BlueprintCallable, BlueprintEvent)

void UDiscord_Popup_YesNoPrompt_C::No()
{
	static auto fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.No");

	UDiscord_Popup_YesNoPrompt_C_No_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Clear Resources
// (BlueprintCallable, BlueprintEvent)

void UDiscord_Popup_YesNoPrompt_C::Clear_Resources()
{
	static auto fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Clear Resources");

	UDiscord_Popup_YesNoPrompt_C_Clear_Resources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Add Resource
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData**          InResource                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDiscord_Popup_YesNoPrompt_C::Add_Resource(class UResourceData** InResource, float* InAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Add Resource");

	UDiscord_Popup_YesNoPrompt_C_Add_Resource_Params params;
	params.InResource = InResource;
	params.InAmount = InAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.SetResources
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCraftingCost>*  Resources                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDiscord_Popup_YesNoPrompt_C::SetResources(TArray<struct FCraftingCost>* Resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.SetResources");

	UDiscord_Popup_YesNoPrompt_C_SetResources_Params params;
	params.Resources = Resources;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.ExecuteUbergraph_Discord_Popup_YesNoPrompt
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDiscord_Popup_YesNoPrompt_C::ExecuteUbergraph_Discord_Popup_YesNoPrompt(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.ExecuteUbergraph_Discord_Popup_YesNoPrompt");

	UDiscord_Popup_YesNoPrompt_C_ExecuteUbergraph_Discord_Popup_YesNoPrompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
