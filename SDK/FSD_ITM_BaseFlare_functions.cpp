// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_BaseFlare_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_BaseFlare.ITM_BaseFlare_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AITM_BaseFlare_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.GetGearStatEntry");

	AITM_BaseFlare_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.UpdateShadowRadius
// (Public, BlueprintCallable, BlueprintEvent)

void AITM_BaseFlare_C::UpdateShadowRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.UpdateShadowRadius");

	AITM_BaseFlare_C_UpdateShadowRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.StartFadeOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AITM_BaseFlare_C::StartFadeOut(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.StartFadeOut");

	AITM_BaseFlare_C_StartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AITM_BaseFlare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.UserConstructionScript");

	AITM_BaseFlare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AITM_BaseFlare_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__FinishedFunc");

	AITM_BaseFlare_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AITM_BaseFlare_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__UpdateFunc");

	AITM_BaseFlare_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AITM_BaseFlare_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.ReceiveBeginPlay");

	AITM_BaseFlare_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareExtinguish
// (Event, Protected, BlueprintEvent)

void AITM_BaseFlare_C::OnFlareExtinguish()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareExtinguish");

	AITM_BaseFlare_C_OnFlareExtinguish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareIgnite
// (Event, Protected, BlueprintEvent)

void AITM_BaseFlare_C::OnFlareIgnite()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareIgnite");

	AITM_BaseFlare_C_OnFlareIgnite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.OnUpdateShadowRadius
// (Event, Public, BlueprintEvent)

void AITM_BaseFlare_C::OnUpdateShadowRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.OnUpdateShadowRadius");

	AITM_BaseFlare_C_OnUpdateShadowRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.ActivateFlare
// (Event, Public, BlueprintEvent)

void AITM_BaseFlare_C::ActivateFlare()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.ActivateFlare");

	AITM_BaseFlare_C_ActivateFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.ExecuteUbergraph_ITM_BaseFlare
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AITM_BaseFlare_C::ExecuteUbergraph_ITM_BaseFlare(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.ExecuteUbergraph_ITM_BaseFlare");

	AITM_BaseFlare_C_ExecuteUbergraph_ITM_BaseFlare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
