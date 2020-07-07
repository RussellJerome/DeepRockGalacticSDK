// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_UnlockBeerPopup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.SetDrink
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    InDrinkableData                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_UnlockBeerPopup_C::SetDrink(class UDrinkableDataAsset** InDrinkableData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.SetDrink");

	UUI_Bar_UnlockBeerPopup_C_SetDrink_Params params;
	params.InDrinkableData = InDrinkableData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.OnTurnOffTextRunner
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Bar_UnlockBeerPopup_C::OnTurnOffTextRunner()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.OnTurnOffTextRunner");

	UUI_Bar_UnlockBeerPopup_C_OnTurnOffTextRunner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.OnShown
// (Event, Public, BlueprintEvent)

void UUI_Bar_UnlockBeerPopup_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.OnShown");

	UUI_Bar_UnlockBeerPopup_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.OnClosed
// (Event, Public, BlueprintEvent)

void UUI_Bar_UnlockBeerPopup_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.OnClosed");

	UUI_Bar_UnlockBeerPopup_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.ExecuteUbergraph_UI_Bar_UnlockBeerPopup
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_UnlockBeerPopup_C::ExecuteUbergraph_UI_Bar_UnlockBeerPopup(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.ExecuteUbergraph_UI_Bar_UnlockBeerPopup");

	UUI_Bar_UnlockBeerPopup_C_ExecuteUbergraph_UI_Bar_UnlockBeerPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.OnUnlockAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Bar_UnlockBeerPopup_C::OnUnlockAnimFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.OnUnlockAnimFinished__DelegateSignature");

	UUI_Bar_UnlockBeerPopup_C_OnUnlockAnimFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
