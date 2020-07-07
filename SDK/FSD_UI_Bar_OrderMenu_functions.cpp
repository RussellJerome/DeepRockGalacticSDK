// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_OrderMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.GetDrinkables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UDrinkableDataAsset*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UDrinkableDataAsset*> UUI_Bar_OrderMenu_C::GetDrinkables()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.GetDrinkables");

	UUI_Bar_OrderMenu_C_GetDrinkables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetMenu
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    Special                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UDrinkableDataAsset*> Drinks                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_Bar_OrderMenu_C::SetMenu(class UDrinkableDataAsset** Special, TArray<class UDrinkableDataAsset*>* Drinks)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetMenu");

	UUI_Bar_OrderMenu_C_SetMenu_Params params;
	params.Special = Special;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Drinks != nullptr)
		*Drinks = params.Drinks;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Bar_OrderMenu_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UUI_Bar_OrderMenu_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Bar_OrderMenu_Item_C** DrinkWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Bar_OrderMenu_C::OnDrinkAdded(class UUI_Bar_OrderMenu_Item_C** DrinkWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkAdded");

	UUI_Bar_OrderMenu_C_OnDrinkAdded_Params params;
	params.DrinkWidget = DrinkWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinksPurchased_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    Drink                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_C::OnDrinksPurchased_Event(class UDrinkableDataAsset** Drink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinksPurchased_Event");

	UUI_Bar_OrderMenu_C_OnDrinksPurchased_Event_Params params;
	params.Drink = Drink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Cancel Order
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_C::Cancel_Order()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Cancel Order");

	UUI_Bar_OrderMenu_C_Cancel_Order_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnShown
// (Event, Public, BlueprintEvent)

void UUI_Bar_OrderMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnShown");

	UUI_Bar_OrderMenu_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnHover_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem**   OrderItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Bar_OrderMenu_C::OnHover_Event(class USpaceRigBarMenuItem** OrderItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnHover_Event");

	UUI_Bar_OrderMenu_C_OnHover_Event_Params params;
	params.OrderItem = OrderItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem**   Previous_Item                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USpaceRigBarMenuItem**   New_Item                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Bar_OrderMenu_C::BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature(class USpaceRigBarMenuItem** Previous_Item, class USpaceRigBarMenuItem** New_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature");

	UUI_Bar_OrderMenu_C_BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature_Params params;
	params.Previous_Item = Previous_Item;
	params.New_Item = New_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnPurchaseDenied_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_C::OnPurchaseDenied_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnPurchaseDenied_Event");

	UUI_Bar_OrderMenu_C_OnPurchaseDenied_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem**   OrderItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Bar_OrderMenu_C::BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature(class USpaceRigBarMenuItem** OrderItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature");

	UUI_Bar_OrderMenu_C_BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature_Params params;
	params.OrderItem = OrderItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature
// (BlueprintEvent)

void UUI_Bar_OrderMenu_C::BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature");

	UUI_Bar_OrderMenu_C_BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnClosed
// (Event, Public, BlueprintEvent)

void UUI_Bar_OrderMenu_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnClosed");

	UUI_Bar_OrderMenu_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    Drink                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_C::BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature(class UDrinkableDataAsset** Drink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature");

	UUI_Bar_OrderMenu_C_BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature_Params params;
	params.Drink = Drink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetBartender
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpaceRigBar**           BarActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_C::SetBartender(class ASpaceRigBar** BarActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetBartender");

	UUI_Bar_OrderMenu_C_SetBartender_Params params;
	params.BarActor = BarActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnNewDrinkableSpecial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    Drinkable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_C::OnNewDrinkableSpecial(class UDrinkableDataAsset** Drinkable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnNewDrinkableSpecial");

	UUI_Bar_OrderMenu_C_OnNewDrinkableSpecial_Params params;
	params.Drinkable = Drinkable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ReceiveCloseCommand
// (Event, Protected, BlueprintEvent)

void UUI_Bar_OrderMenu_C::ReceiveCloseCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ReceiveCloseCommand");

	UUI_Bar_OrderMenu_C_ReceiveCloseCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Bar_OrderMenu_C::BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature");

	UUI_Bar_OrderMenu_C_BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkUnlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    Drink                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_C::OnDrinkUnlocked(class UDrinkableDataAsset** Drink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkUnlocked");

	UUI_Bar_OrderMenu_C_OnDrinkUnlocked_Params params;
	params.Drink = Drink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Bar_OrderMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Construct");

	UUI_Bar_OrderMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ExecuteUbergraph_UI_Bar_OrderMenu
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_C::ExecuteUbergraph_UI_Bar_OrderMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ExecuteUbergraph_UI_Bar_OrderMenu");

	UUI_Bar_OrderMenu_C_ExecuteUbergraph_UI_Bar_OrderMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnRoundSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpaceRigBar**           Bar                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDrinkableDataAsset**    RequestedDrink                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_C::OnRoundSelected__DelegateSignature(class ASpaceRigBar** Bar, class UDrinkableDataAsset** RequestedDrink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnRoundSelected__DelegateSignature");

	UUI_Bar_OrderMenu_C_OnRoundSelected__DelegateSignature_Params params;
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
