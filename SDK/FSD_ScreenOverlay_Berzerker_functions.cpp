// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_Berzerker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Play Fade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUMGSequencePlayMode>* PlayMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_Berzerker_C::Play_Fade(TEnumAsByte<EUMGSequencePlayMode>* PlayMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Play Fade");

	UScreenOverlay_Berzerker_C_Play_Fade_Params params;
	params.PlayMode = PlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.OnAnimFadingFinished
// (BlueprintCallable, BlueprintEvent)

void UScreenOverlay_Berzerker_C::OnAnimFadingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.OnAnimFadingFinished");

	UScreenOverlay_Berzerker_C_OnAnimFadingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveBeginOverlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D**             InTexture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           InTint                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_Berzerker_C::ReceiveBeginOverlay(class UTexture2D** InTexture, struct FLinearColor* InTint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveBeginOverlay");

	UScreenOverlay_Berzerker_C_ReceiveBeginOverlay_Params params;
	params.InTexture = InTexture;
	params.InTint = InTint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScreenOverlay_Berzerker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Construct");

	UScreenOverlay_Berzerker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveEndOverlay
// (Event, Protected, BlueprintEvent)

void UScreenOverlay_Berzerker_C::ReceiveEndOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveEndOverlay");

	UScreenOverlay_Berzerker_C_ReceiveEndOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ExecuteUbergraph_ScreenOverlay_Berzerker
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_Berzerker_C::ExecuteUbergraph_ScreenOverlay_Berzerker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ExecuteUbergraph_ScreenOverlay_Berzerker");

	UScreenOverlay_Berzerker_C_ExecuteUbergraph_ScreenOverlay_Berzerker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
