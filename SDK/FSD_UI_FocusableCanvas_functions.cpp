// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_FocusableCanvas_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_FocusableCanvas_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusReceived");

	UUI_FocusableCanvas_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_FocusableCanvas.UI_FocusableCanvas_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_FocusableCanvas_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.Construct");

	UUI_FocusableCanvas_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_FocusableCanvas_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusLost");

	UUI_FocusableCanvas_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_FocusableCanvas_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnMouseEnter");

	UUI_FocusableCanvas_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_FocusableCanvas_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnMouseLeave");

	UUI_FocusableCanvas_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FocusableCanvas.UI_FocusableCanvas_C.ExecuteUbergraph_UI_FocusableCanvas
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_FocusableCanvas_C::ExecuteUbergraph_UI_FocusableCanvas(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.ExecuteUbergraph_UI_FocusableCanvas");

	UUI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnHoverChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_FocusableCanvas_C::OnHoverChanged__DelegateSignature(class UWidget** Widget, bool* IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnHoverChanged__DelegateSignature");

	UUI_FocusableCanvas_C_OnHoverChanged__DelegateSignature_Params params;
	params.Widget = Widget;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsFocused                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_FocusableCanvas_C::OnFocusChanged__DelegateSignature(class UWidget** Widget, bool* IsFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusChanged__DelegateSignature");

	UUI_FocusableCanvas_C_OnFocusChanged__DelegateSignature_Params params;
	params.Widget = Widget;
	params.IsFocused = IsFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
