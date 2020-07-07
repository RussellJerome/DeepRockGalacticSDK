// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_KeyCapture_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_KeyCapture.UI_KeyCapture_C.GetCurrentKeyName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   InputKey                       (Parm, OutParm)

void UUI_KeyCapture_C::GetCurrentKeyName(struct FText* InputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.GetCurrentKeyName");

	UUI_KeyCapture_C_GetCurrentKeyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputKey != nullptr)
		*InputKey = params.InputKey;
}


// Function UI_KeyCapture.UI_KeyCapture_C.UpdateClearButton
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_KeyCapture_C::UpdateClearButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.UpdateClearButton");

	UUI_KeyCapture_C_UpdateClearButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.UpdateKeyLabel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_KeyCapture_C::UpdateKeyLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.UpdateKeyLabel");

	UUI_KeyCapture_C_UpdateKeyLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.Receive Key
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_KeyCapture_C::Receive_Key(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.Receive Key");

	UUI_KeyCapture_C_Receive_Key_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_KeyCapture_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnMouseButtonUp");

	UUI_KeyCapture_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_KeyCapture_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnKeyUp");

	UUI_KeyCapture_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_KeyCapture_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnFocusReceived");

	UUI_KeyCapture_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KeyCapture.UI_KeyCapture_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_KeyCapture_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.Construct");

	UUI_KeyCapture_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KeyCapture_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.PreConstruct");

	UUI_KeyCapture_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_KeyCapture_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnFocusLost");

	UUI_KeyCapture_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EKeyBindingAxis*               ActionAxis                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KeyCapture_C::Initialize(struct FName* ActionName, EKeyBindingAxis* ActionAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.Initialize");

	UUI_KeyCapture_C_Initialize_Params params;
	params.ActionName = ActionName;
	params.ActionAxis = ActionAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.UpdateKeyBinding
// (BlueprintCallable, BlueprintEvent)

void UUI_KeyCapture_C::UpdateKeyBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.UpdateKeyBinding");

	UUI_KeyCapture_C_UpdateKeyBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_KeyCapture_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnMouseEnter");

	UUI_KeyCapture_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_KeyCapture_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnMouseLeave");

	UUI_KeyCapture_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_KeyCapture_C::BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UUI_KeyCapture_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.AddKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_KeyCapture_C::AddKey(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.AddKey");

	UUI_KeyCapture_C_AddKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.On Prompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KeyCapture_C::On_Prompt(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.On Prompt");

	UUI_KeyCapture_C_On_Prompt_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.ExecuteUbergraph_UI_KeyCapture
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KeyCapture_C::ExecuteUbergraph_UI_KeyCapture(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.ExecuteUbergraph_UI_KeyCapture");

	UUI_KeyCapture_C_ExecuteUbergraph_UI_KeyCapture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_KeyCapture_C::OnKeyCaptureCancelled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureCancelled__DelegateSignature");

	UUI_KeyCapture_C_OnKeyCaptureCancelled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_KeyCapture_C::OnKeyCaptureChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureChanged__DelegateSignature");

	UUI_KeyCapture_C_OnKeyCaptureChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureError__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_KeyCapture_C::OnKeyCaptureError__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureError__DelegateSignature");

	UUI_KeyCapture_C_OnKeyCaptureError__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_KeyCapture_C::OnKeyCaptureFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureFinished__DelegateSignature");

	UUI_KeyCapture_C_OnKeyCaptureFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
