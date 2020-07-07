// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_ShieldBoost_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.ReceiveBeginOverlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D**             InTexture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           InTint                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_ShieldBoost_C::ReceiveBeginOverlay(class UTexture2D** InTexture, struct FLinearColor* InTint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.ReceiveBeginOverlay");

	UScreenOverlay_ShieldBoost_C_ReceiveBeginOverlay_Params params;
	params.InTexture = InTexture;
	params.InTint = InTint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScreenOverlay_ShieldBoost_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.Construct");

	UScreenOverlay_ShieldBoost_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.Play Fade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUMGSequencePlayMode>* PlayMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_ShieldBoost_C::Play_Fade(TEnumAsByte<EUMGSequencePlayMode>* PlayMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.Play Fade");

	UScreenOverlay_ShieldBoost_C_Play_Fade_Params params;
	params.PlayMode = PlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.OnAnimFadingFinished
// (BlueprintCallable, BlueprintEvent)

void UScreenOverlay_ShieldBoost_C::OnAnimFadingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.OnAnimFadingFinished");

	UScreenOverlay_ShieldBoost_C_OnAnimFadingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.ReceiveEndOverlay
// (Event, Protected, BlueprintEvent)

void UScreenOverlay_ShieldBoost_C::ReceiveEndOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.ReceiveEndOverlay");

	UScreenOverlay_ShieldBoost_C_ReceiveEndOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.ExecuteUbergraph_ScreenOverlay_ShieldBoost
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_ShieldBoost_C::ExecuteUbergraph_ScreenOverlay_ShieldBoost(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldBoost.ScreenOverlay_ShieldBoost_C.ExecuteUbergraph_ScreenOverlay_ShieldBoost");

	UScreenOverlay_ShieldBoost_C_ExecuteUbergraph_ScreenOverlay_ShieldBoost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
