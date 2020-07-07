// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_BackgroundMenu_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C.Set Drinkable shown price
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Bar_BackgroundMenu_Item_C::Set_Drinkable_shown_price()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C.Set Drinkable shown price");

	UUI_Bar_BackgroundMenu_Item_C_Set_Drinkable_shown_price_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_BackgroundMenu_Item_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C.PreConstruct");

	UUI_Bar_BackgroundMenu_Item_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_Item
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_BackgroundMenu_Item_C::ExecuteUbergraph_UI_Bar_BackgroundMenu_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_Item");

	UUI_Bar_BackgroundMenu_Item_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
