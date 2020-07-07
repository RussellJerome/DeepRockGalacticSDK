// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_CooldownWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetBackgroundTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CooldownWidget_C::SetBackgroundTint(struct FLinearColor* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetBackgroundTint");

	UHUD_CooldownWidget_C_SetBackgroundTint_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetFillTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CooldownWidget_C::SetFillTint(struct FLinearColor* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetFillTint");

	UHUD_CooldownWidget_C_SetFillTint_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CooldownWidget_C::SetPercent(float* InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetPercent");

	UHUD_CooldownWidget_C_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CooldownWidget.HUD_CooldownWidget_C.ReceiveInitWidget
// (Event, Protected, BlueprintEvent)

void UHUD_CooldownWidget_C::ReceiveInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CooldownWidget.HUD_CooldownWidget_C.ReceiveInitWidget");

	UHUD_CooldownWidget_C_ReceiveInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CooldownWidget.HUD_CooldownWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CooldownWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CooldownWidget.HUD_CooldownWidget_C.PreConstruct");

	UHUD_CooldownWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CooldownWidget.HUD_CooldownWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_CooldownWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CooldownWidget.HUD_CooldownWidget_C.Construct");

	UHUD_CooldownWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetHeightScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CooldownWidget_C::SetHeightScale(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetHeightScale");

	UHUD_CooldownWidget_C_SetHeightScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CooldownWidget.HUD_CooldownWidget_C.OnAnimFadeoutFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_CooldownWidget_C::OnAnimFadeoutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CooldownWidget.HUD_CooldownWidget_C.OnAnimFadeoutFinished");

	UHUD_CooldownWidget_C_OnAnimFadeoutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CooldownWidget.HUD_CooldownWidget_C.ReceiveUpdateProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         InProgress                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CooldownWidget_C::ReceiveUpdateProgress(float* InProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CooldownWidget.HUD_CooldownWidget_C.ReceiveUpdateProgress");

	UHUD_CooldownWidget_C_ReceiveUpdateProgress_Params params;
	params.InProgress = InProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CooldownWidget.HUD_CooldownWidget_C.ExecuteUbergraph_HUD_CooldownWidget
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CooldownWidget_C::ExecuteUbergraph_HUD_CooldownWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CooldownWidget.HUD_CooldownWidget_C.ExecuteUbergraph_HUD_CooldownWidget");

	UHUD_CooldownWidget_C_ExecuteUbergraph_HUD_CooldownWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
