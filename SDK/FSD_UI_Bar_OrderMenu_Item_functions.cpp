// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_OrderMenu_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.AreBeersFreee
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_Bar_OrderMenu_Item_C::AreBeersFreee()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.AreBeersFreee");

	UUI_Bar_OrderMenu_Item_C_AreBeersFreee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.HasPlayerRank
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_Bar_OrderMenu_Item_C::HasPlayerRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.HasPlayerRank");

	UUI_Bar_OrderMenu_Item_C_HasPlayerRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetTemporaryBuf
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTemporaryBuff*          buff                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_Item_C::GetTemporaryBuf(class UTemporaryBuff** buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetTemporaryBuf");

	UUI_Bar_OrderMenu_Item_C_GetTemporaryBuf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (buff != nullptr)
		*buff = params.buff;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.UpdateItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::UpdateItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.UpdateItem");

	UUI_Bar_OrderMenu_Item_C_UpdateItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetBorderColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            OutputColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_Item_C::GetBorderColor(struct FLinearColor* OutputColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetBorderColor");

	UUI_Bar_OrderMenu_Item_C_GetBorderColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputColor != nullptr)
		*OutputColor = params.OutputColor;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_Bar_OrderMenu_Item_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.IsInteractable");

	UUI_Bar_OrderMenu_Item_C_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.No_0F2CD82B4BA6006B33BED8B78B16B74B
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::No_0F2CD82B4BA6006B33BED8B78B16B74B()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.No_0F2CD82B4BA6006B33BED8B78B16B74B");

	UUI_Bar_OrderMenu_Item_C_No_0F2CD82B4BA6006B33BED8B78B16B74B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Yes_0F2CD82B4BA6006B33BED8B78B16B74B
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::Yes_0F2CD82B4BA6006B33BED8B78B16B74B()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Yes_0F2CD82B4BA6006B33BED8B78B16B74B");

	UUI_Bar_OrderMenu_Item_C_Yes_0F2CD82B4BA6006B33BED8B78B16B74B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_Item_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.PreConstruct");

	UUI_Bar_OrderMenu_Item_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Construct");

	UUI_Bar_OrderMenu_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnCreditsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Credits                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_Item_C::OnCreditsChanged(int* Credits)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnCreditsChanged");

	UUI_Bar_OrderMenu_Item_C_OnCreditsChanged_Params params;
	params.Credits = Credits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	UUI_Bar_OrderMenu_Item_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature");

	UUI_Bar_OrderMenu_Item_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UUI_Bar_OrderMenu_Item_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnPlayerProgressChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Stars                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_Item_C::OnPlayerProgressChanged(int* Rank, int* Stars)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnPlayerProgressChanged");

	UUI_Bar_OrderMenu_Item_C_OnPlayerProgressChanged_Params params;
	params.Rank = Rank;
	params.Stars = Stars;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Select
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Select");

	UUI_Bar_OrderMenu_Item_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Unselect
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::Unselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Unselect");

	UUI_Bar_OrderMenu_Item_C_Unselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnHoverFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::OnHoverFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnHoverFinished");

	UUI_Bar_OrderMenu_Item_C_OnHoverFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BuyFailed
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::BuyFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BuyFailed");

	UUI_Bar_OrderMenu_Item_C_BuyFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.TryUnlock
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::TryUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.TryUnlock");

	UUI_Bar_OrderMenu_Item_C_TryUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnUnlockAnimFinished_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::OnUnlockAnimFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnUnlockAnimFinished_Event");

	UUI_Bar_OrderMenu_Item_C_OnUnlockAnimFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.ExecuteUbergraph_UI_Bar_OrderMenu_Item
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_Item_C::ExecuteUbergraph_UI_Bar_OrderMenu_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.ExecuteUbergraph_UI_Bar_OrderMenu_Item");

	UUI_Bar_OrderMenu_Item_C_ExecuteUbergraph_UI_Bar_OrderMenu_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinkUnlocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    Drink                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_Item_C::OnDrinkUnlocked__DelegateSignature(class UDrinkableDataAsset** Drink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinkUnlocked__DelegateSignature");

	UUI_Bar_OrderMenu_Item_C_OnDrinkUnlocked__DelegateSignature_Params params;
	params.Drink = Drink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem**   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Bar_OrderMenu_Item_C::OnSelected__DelegateSignature(class USpaceRigBarMenuItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnSelected__DelegateSignature");

	UUI_Bar_OrderMenu_Item_C_OnSelected__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnPurchaseDenied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Bar_OrderMenu_Item_C::OnPurchaseDenied__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnPurchaseDenied__DelegateSignature");

	UUI_Bar_OrderMenu_Item_C_OnPurchaseDenied__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem**   OrderItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Bar_OrderMenu_Item_C::OnUnhover__DelegateSignature(class USpaceRigBarMenuItem** OrderItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnUnhover__DelegateSignature");

	UUI_Bar_OrderMenu_Item_C_OnUnhover__DelegateSignature_Params params;
	params.OrderItem = OrderItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem**   OrderItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Bar_OrderMenu_Item_C::OnHover__DelegateSignature(class USpaceRigBarMenuItem** OrderItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnHover__DelegateSignature");

	UUI_Bar_OrderMenu_Item_C_OnHover__DelegateSignature_Params params;
	params.OrderItem = OrderItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinksPurchased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    Drink                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_OrderMenu_Item_C::OnDrinksPurchased__DelegateSignature(class UDrinkableDataAsset** Drink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinksPurchased__DelegateSignature");

	UUI_Bar_OrderMenu_Item_C_OnDrinksPurchased__DelegateSignature_Params params;
	params.Drink = Drink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
