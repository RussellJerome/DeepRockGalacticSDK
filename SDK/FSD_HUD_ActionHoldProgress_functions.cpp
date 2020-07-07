// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ActionHoldProgress_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ActionHoldProgress_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.PreConstruct");

	UHUD_ActionHoldProgress_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_ActionHoldProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.Construct");

	UHUD_ActionHoldProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.OnActionHoldProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ActionHoldProgress_C::OnActionHoldProgress(struct FText* Description, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.OnActionHoldProgress");

	UHUD_ActionHoldProgress_C_OnActionHoldProgress_Params params;
	params.Description = Description;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.ExecuteUbergraph_HUD_ActionHoldProgress
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ActionHoldProgress_C::ExecuteUbergraph_HUD_ActionHoldProgress(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.ExecuteUbergraph_HUD_ActionHoldProgress");

	UHUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
