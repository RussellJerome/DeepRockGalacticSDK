// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_PlayerPerks_Icon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCooldownDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHUD_PlayerPerks_Icon_C::GetCooldownDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCooldownDuration");

	UHUD_PlayerPerks_Icon_C_GetCooldownDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCoolDownProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHUD_PlayerPerks_Icon_C::GetCoolDownProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCoolDownProgress");

	UHUD_PlayerPerks_Icon_C_GetCoolDownProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetMaxUseCharges
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHUD_PlayerPerks_Icon_C::GetMaxUseCharges()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetMaxUseCharges");

	UHUD_PlayerPerks_Icon_C_GetMaxUseCharges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetRemainingUseCharges
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHUD_PlayerPerks_Icon_C::GetRemainingUseCharges()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetRemainingUseCharges");

	UHUD_PlayerPerks_Icon_C_GetRemainingUseCharges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshCounterAndProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CoolDownActive                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerPerks_Icon_C::RefreshCounterAndProgress(bool* CoolDownActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshCounterAndProgress");

	UHUD_PlayerPerks_Icon_C_RefreshCounterAndProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CoolDownActive != nullptr)
		*CoolDownActive = params.CoolDownActive;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetCounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerPerks_Icon_C::SetCounter(int* InCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetCounter");

	UHUD_PlayerPerks_Icon_C_SetCounter_Params params;
	params.InCount = InCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InProgress                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutProgress                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerPerks_Icon_C::SetProgress(float* InProgress, float* OutProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetProgress");

	UHUD_PlayerPerks_Icon_C_SetProgress_Params params;
	params.InProgress = InProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutProgress != nullptr)
		*OutProgress = params.OutProgress;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnTick_64B6D09E4CB7705CDF68E9949787003B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NormalizedTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerPerks_Icon_C::OnTick_64B6D09E4CB7705CDF68E9949787003B(float* DeltaTime, float* NormalizedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnTick_64B6D09E4CB7705CDF68E9949787003B");

	UHUD_PlayerPerks_Icon_C_OnTick_64B6D09E4CB7705CDF68E9949787003B_Params params;
	params.DeltaTime = DeltaTime;
	params.NormalizedTime = NormalizedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Completed_64B6D09E4CB7705CDF68E9949787003B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NormalizedTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerPerks_Icon_C::Completed_64B6D09E4CB7705CDF68E9949787003B(float* DeltaTime, float* NormalizedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Completed_64B6D09E4CB7705CDF68E9949787003B");

	UHUD_PlayerPerks_Icon_C_Completed_64B6D09E4CB7705CDF68E9949787003B_Params params;
	params.DeltaTime = DeltaTime;
	params.NormalizedTime = NormalizedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ReceivePerkAssetChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UHUD_PlayerPerks_Icon_C::ReceivePerkAssetChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ReceivePerkAssetChanged");

	UHUD_PlayerPerks_Icon_C_ReceivePerkAssetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_PlayerPerks_Icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Construct");

	UHUD_PlayerPerks_Icon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnAnimCoolDownFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_PlayerPerks_Icon_C::OnAnimCoolDownFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnAnimCoolDownFinished");

	UHUD_PlayerPerks_Icon_C_OnAnimCoolDownFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Begin Cool Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerPerks_Icon_C::Begin_Cool_Down(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Begin Cool Down");

	UHUD_PlayerPerks_Icon_C_Begin_Cool_Down_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerPerks_Icon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.PreConstruct");

	UHUD_PlayerPerks_Icon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshUseCharges
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             Perk                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerPerks_Icon_C::RefreshUseCharges(class UPerkAsset** Perk, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshUseCharges");

	UHUD_PlayerPerks_Icon_C_RefreshUseCharges_Params params;
	params.Perk = Perk;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.CoolDownTick
// (BlueprintCallable, BlueprintEvent)

void UHUD_PlayerPerks_Icon_C::CoolDownTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.CoolDownTick");

	UHUD_PlayerPerks_Icon_C_CoolDownTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ExecuteUbergraph_HUD_PlayerPerks_Icon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerPerks_Icon_C::ExecuteUbergraph_HUD_PlayerPerks_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ExecuteUbergraph_HUD_PlayerPerks_Icon");

	UHUD_PlayerPerks_Icon_C_ExecuteUbergraph_HUD_PlayerPerks_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
