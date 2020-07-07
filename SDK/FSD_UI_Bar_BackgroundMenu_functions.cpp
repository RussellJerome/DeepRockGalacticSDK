// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_BackgroundMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_BackgroundMenu_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.PreConstruct");

	UUI_Bar_BackgroundMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.Set Bartender
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SpaceRig_Bartender_C** InBartender                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_BackgroundMenu_C::Set_Bartender(class ABP_SpaceRig_Bartender_C** InBartender)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.Set Bartender");

	UUI_Bar_BackgroundMenu_C_Set_Bartender_Params params;
	params.InBartender = InBartender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnNewDrinkableSpecial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    Drinkable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_BackgroundMenu_C::OnNewDrinkableSpecial(class UDrinkableDataAsset** Drinkable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnNewDrinkableSpecial");

	UUI_Bar_BackgroundMenu_C_OnNewDrinkableSpecial_Params params;
	params.Drinkable = Drinkable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.ExecuteUbergraph_UI_Bar_BackgroundMenu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_BackgroundMenu_C::ExecuteUbergraph_UI_Bar_BackgroundMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.ExecuteUbergraph_UI_Bar_BackgroundMenu");

	UUI_Bar_BackgroundMenu_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnRoundSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpaceRigBar**           Bar                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDrinkableDataAsset**    RequestedDrink                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_BackgroundMenu_C::OnRoundSelected__DelegateSignature(class ASpaceRigBar** Bar, class UDrinkableDataAsset** RequestedDrink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnRoundSelected__DelegateSignature");

	UUI_Bar_BackgroundMenu_C_OnRoundSelected__DelegateSignature_Params params;
	params.Bar = Bar;
	params.RequestedDrink = RequestedDrink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
