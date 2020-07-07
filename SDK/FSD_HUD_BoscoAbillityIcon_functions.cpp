// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_BoscoAbillityIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DisableAnim                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BoscoAbillityIcon_C::SetProgress(float* Percent, bool* DisableAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.SetProgress");

	UHUD_BoscoAbillityIcon_C_SetProgress_Params params;
	params.Percent = Percent;
	params.DisableAnim = DisableAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBoscoAbillityComponent** Abillity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_BoscoAbillityIcon_C::Init(int* Index, class UBoscoAbillityComponent** Abillity)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.Init");

	UHUD_BoscoAbillityIcon_C_Init_Params params;
	params.Index = Index;
	params.Abillity = Abillity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BoscoAbillityIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.PreConstruct");

	UHUD_BoscoAbillityIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.On Flare Production Finished
// (BlueprintCallable, BlueprintEvent)

void UHUD_BoscoAbillityIcon_C::On_Flare_Production_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.On Flare Production Finished");

	UHUD_BoscoAbillityIcon_C_On_Flare_Production_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.OnChargeUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           aCurrentCharges                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BoscoAbillityIcon_C::OnChargeUsed(int* aCurrentCharges)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.OnChargeUsed");

	UHUD_BoscoAbillityIcon_C_OnChargeUsed_Params params;
	params.aCurrentCharges = aCurrentCharges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.ExecuteUbergraph_HUD_BoscoAbillityIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BoscoAbillityIcon_C::ExecuteUbergraph_HUD_BoscoAbillityIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.ExecuteUbergraph_HUD_BoscoAbillityIcon");

	UHUD_BoscoAbillityIcon_C_ExecuteUbergraph_HUD_BoscoAbillityIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
