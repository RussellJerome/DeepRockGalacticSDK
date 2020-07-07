// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_Menu_MinimalWindow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.IsMouseOver
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           MouseOver                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_MinimalWindow_C::IsMouseOver(bool* MouseOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.IsMouseOver");

	UBasic_Menu_MinimalWindow_C_IsMouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseOver != nullptr)
		*MouseOver = params.MouseOver;
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBasic_Menu_MinimalWindow_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnFocusReceived");

	UBasic_Menu_MinimalWindow_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_MinimalWindow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.PreConstruct");

	UBasic_Menu_MinimalWindow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasic_Menu_MinimalWindow_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnFocusLost");

	UBasic_Menu_MinimalWindow_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBasic_Menu_MinimalWindow_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnMouseEnter");

	UBasic_Menu_MinimalWindow_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBasic_Menu_MinimalWindow_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnMouseLeave");

	UBasic_Menu_MinimalWindow_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.ExecuteUbergraph_Basic_Menu_MinimalWindow
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_MinimalWindow_C::ExecuteUbergraph_Basic_Menu_MinimalWindow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.ExecuteUbergraph_Basic_Menu_MinimalWindow");

	UBasic_Menu_MinimalWindow_C_ExecuteUbergraph_Basic_Menu_MinimalWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnLostFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasic_Menu_MinimalWindow_C** Window                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBasic_Menu_MinimalWindow_C::OnLostFocus__DelegateSignature(class UBasic_Menu_MinimalWindow_C** Window)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnLostFocus__DelegateSignature");

	UBasic_Menu_MinimalWindow_C_OnLostFocus__DelegateSignature_Params params;
	params.Window = Window;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnReceivedFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasic_Menu_MinimalWindow_C** Window                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBasic_Menu_MinimalWindow_C::OnReceivedFocus__DelegateSignature(class UBasic_Menu_MinimalWindow_C** Window)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnReceivedFocus__DelegateSignature");

	UBasic_Menu_MinimalWindow_C_OnReceivedFocus__DelegateSignature_Params params;
	params.Window = Window;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnCursorLeave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasic_Menu_MinimalWindow_C** Window                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBasic_Menu_MinimalWindow_C::OnCursorLeave__DelegateSignature(class UBasic_Menu_MinimalWindow_C** Window)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnCursorLeave__DelegateSignature");

	UBasic_Menu_MinimalWindow_C_OnCursorLeave__DelegateSignature_Params params;
	params.Window = Window;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnCursorEnter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasic_Menu_MinimalWindow_C** Window                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBasic_Menu_MinimalWindow_C::OnCursorEnter__DelegateSignature(class UBasic_Menu_MinimalWindow_C** Window)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnCursorEnter__DelegateSignature");

	UBasic_Menu_MinimalWindow_C_OnCursorEnter__DelegateSignature_Params params;
	params.Window = Window;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.ThickBars__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBasic_Menu_MinimalWindow_C::ThickBars__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.ThickBars__DelegateSignature");

	UBasic_Menu_MinimalWindow_C_ThickBars__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.On Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBasic_Menu_MinimalWindow_C::On_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.On Clicked__DelegateSignature");

	UBasic_Menu_MinimalWindow_C_On_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
