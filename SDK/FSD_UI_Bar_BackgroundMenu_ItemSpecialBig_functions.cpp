// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_BackgroundMenu_ItemSpecialBig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.Set Drinkable shown price
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::Set_Drinkable_shown_price()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.Set Drinkable shown price");

	UUI_Bar_BackgroundMenu_ItemSpecialBig_C_Set_Drinkable_shown_price_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.SetDrinkable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    InDrinkable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::SetDrinkable(class UDrinkableDataAsset** InDrinkable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.SetDrinkable");

	UUI_Bar_BackgroundMenu_ItemSpecialBig_C_SetDrinkable_Params params;
	params.InDrinkable = InDrinkable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.Construct");

	UUI_Bar_BackgroundMenu_ItemSpecialBig_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.PreConstruct");

	UUI_Bar_BackgroundMenu_ItemSpecialBig_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig");

	UUI_Bar_BackgroundMenu_ItemSpecialBig_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
