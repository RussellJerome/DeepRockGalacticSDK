// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_Text_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_Text.LIB_Text_C.GetTimeText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Dividend                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void ULIB_Text_C::STATIC_GetTimeText(float* Dividend, class UObject** __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.GetTimeText");

	ULIB_Text_C_GetTimeText_Params params;
	params.Dividend = Dividend;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LIB_Text.LIB_Text_C.SetTextCased
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Target                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ENU_TextCase>*     Text_Case                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_Text_C::STATIC_SetTextCased(struct FText* InText, TEnumAsByte<ENU_TextCase>* Text_Case, class UObject** __WorldContext, class UTextBlock** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.SetTextCased");

	ULIB_Text_C_SetTextCased_Params params;
	params.InText = InText;
	params.Text_Case = Text_Case;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function LIB_Text.LIB_Text_C.GetFontSize
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              Label                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Text_C::STATIC_GetFontSize(class UObject** __WorldContext, class UTextBlock** Label, int* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.GetFontSize");

	ULIB_Text_C_GetFontSize_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
	if (Size != nullptr)
		*Size = params.Size;
}


// Function LIB_Text.LIB_Text_C.SetFontSize
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Label                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// int*                           NewSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_Text_C::STATIC_SetFontSize(int* NewSize, class UObject** __WorldContext, class UTextBlock** Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.SetFontSize");

	ULIB_Text_C_SetFontSize_Params params;
	params.NewSize = NewSize;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function LIB_Text.LIB_Text_C.SetTextUpperCased
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock**             Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_Text_C::STATIC_SetTextUpperCased(class UTextBlock** Target, struct FText* InText, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.SetTextUpperCased");

	ULIB_Text_C_SetTextUpperCased_Params params;
	params.Target = Target;
	params.InText = InText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_Text.LIB_Text_C.GetDisconnectReasonCaption
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EDisconnectReason*             DisconnectReason               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void ULIB_Text_C::STATIC_GetDisconnectReasonCaption(EDisconnectReason* DisconnectReason, class UObject** __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.GetDisconnectReasonCaption");

	ULIB_Text_C_GetDisconnectReasonCaption_Params params;
	params.DisconnectReason = DisconnectReason;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LIB_Text.LIB_Text_C.GetDisconnectReasonText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EDisconnectReason*             DisconnectReason               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void ULIB_Text_C::STATIC_GetDisconnectReasonText(EDisconnectReason* DisconnectReason, class UObject** __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.GetDisconnectReasonText");

	ULIB_Text_C_GetDisconnectReasonText_Params params;
	params.DisconnectReason = DisconnectReason;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
