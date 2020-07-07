// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_Input_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_Input.LIB_Input_C.IsSelectNext
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKeyEvent*              KeyEvent                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULIB_Input_C::STATIC_IsSelectNext(struct FKeyEvent* KeyEvent, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Input.LIB_Input_C.IsSelectNext");

	ULIB_Input_C_IsSelectNext_Params params;
	params.KeyEvent = KeyEvent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LIB_Input.LIB_Input_C.IsSelectPrevious
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKeyEvent*              KeyEvent                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULIB_Input_C::STATIC_IsSelectPrevious(struct FKeyEvent* KeyEvent, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Input.LIB_Input_C.IsSelectPrevious");

	ULIB_Input_C_IsSelectPrevious_Params params;
	params.KeyEvent = KeyEvent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LIB_Input.LIB_Input_C.IsBackMenuMouse
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPointerEvent*          Pointer_Event                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULIB_Input_C::STATIC_IsBackMenuMouse(struct FPointerEvent* Pointer_Event, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Input.LIB_Input_C.IsBackMenuMouse");

	ULIB_Input_C_IsBackMenuMouse_Params params;
	params.Pointer_Event = Pointer_Event;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LIB_Input.LIB_Input_C.IsUseButton
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKeyEvent*              Input                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULIB_Input_C::STATIC_IsUseButton(struct FKeyEvent* Input, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Input.LIB_Input_C.IsUseButton");

	ULIB_Input_C_IsUseButton_Params params;
	params.Input = Input;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LIB_Input.LIB_Input_C.IsOkMenu
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKeyEvent*              Input                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULIB_Input_C::STATIC_IsOkMenu(struct FKeyEvent* Input, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Input.LIB_Input_C.IsOkMenu");

	ULIB_Input_C_IsOkMenu_Params params;
	params.Input = Input;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LIB_Input.LIB_Input_C.IsCloseOrBackMenu
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKeyEvent               Input                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULIB_Input_C::STATIC_IsCloseOrBackMenu(class UObject** __WorldContext, struct FKeyEvent* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Input.LIB_Input_C.IsCloseOrBackMenu");

	ULIB_Input_C_IsCloseOrBackMenu_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
