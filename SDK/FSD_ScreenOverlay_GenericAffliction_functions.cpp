// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_GenericAffliction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScreenOverlay_GenericAffliction_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.Construct");

	UScreenOverlay_GenericAffliction_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ReceiveBeginOverlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D**             InTexture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           InTint                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_GenericAffliction_C::ReceiveBeginOverlay(class UTexture2D** InTexture, struct FLinearColor* InTint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ReceiveBeginOverlay");

	UScreenOverlay_GenericAffliction_C_ReceiveBeginOverlay_Params params;
	params.InTexture = InTexture;
	params.InTint = InTint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ReceiveEndOverlay
// (Event, Protected, BlueprintEvent)

void UScreenOverlay_GenericAffliction_C::ReceiveEndOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ReceiveEndOverlay");

	UScreenOverlay_GenericAffliction_C_ReceiveEndOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.Play Fade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUMGSequencePlayMode>* PlayMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_GenericAffliction_C::Play_Fade(TEnumAsByte<EUMGSequencePlayMode>* PlayMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.Play Fade");

	UScreenOverlay_GenericAffliction_C_Play_Fade_Params params;
	params.PlayMode = PlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.OnAnimFadingFinished
// (BlueprintCallable, BlueprintEvent)

void UScreenOverlay_GenericAffliction_C::OnAnimFadingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.OnAnimFadingFinished");

	UScreenOverlay_GenericAffliction_C_OnAnimFadingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ExecuteUbergraph_ScreenOverlay_GenericAffliction
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_GenericAffliction_C::ExecuteUbergraph_ScreenOverlay_GenericAffliction(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ExecuteUbergraph_ScreenOverlay_GenericAffliction");

	UScreenOverlay_GenericAffliction_C_ExecuteUbergraph_ScreenOverlay_GenericAffliction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
