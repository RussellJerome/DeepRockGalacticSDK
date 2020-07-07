// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perks_Buy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perks_Buy.UI_Perks_Buy_C.CanBuyPerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can_Buy                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Buy_C::CanBuyPerk(bool* Can_Buy)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.CanBuyPerk");

	UUI_Perks_Buy_C_CanBuyPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_Buy != nullptr)
		*Can_Buy = params.Can_Buy;
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.SetPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             InPerk                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InTier                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Buy_C::SetPerk(class UPerkAsset** InPerk, int* InTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.SetPerk");

	UUI_Perks_Buy_C_SetPerk_Params params;
	params.InPerk = InPerk;
	params.InTier = InTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Buy_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.PreConstruct");

	UUI_Perks_Buy_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBasic_FlatButton_C**    Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Perks_Buy_C::BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_FlatButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUI_Perks_Buy_C_BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Perks_Buy_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.Construct");

	UUI_Perks_Buy_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkPointsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PerkPoints                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Change                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Buy_C::OnPerkPointsChanged(int* PerkPoints, int* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkPointsChanged");

	UUI_Perks_Buy_C_OnPerkPointsChanged_Params params;
	params.PerkPoints = PerkPoints;
	params.Change = Change;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.Buy Selected Perk
// (BlueprintCallable, BlueprintEvent)

void UUI_Perks_Buy_C::Buy_Selected_Perk()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.Buy Selected Perk");

	UUI_Perks_Buy_C_Buy_Selected_Perk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.ExecuteUbergraph_UI_Perks_Buy
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Buy_C::ExecuteUbergraph_UI_Perks_Buy(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.ExecuteUbergraph_UI_Perks_Buy");

	UUI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkClaimed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Perks_Buy_C::OnPerkClaimed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkClaimed__DelegateSignature");

	UUI_Perks_Buy_C_OnPerkClaimed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
