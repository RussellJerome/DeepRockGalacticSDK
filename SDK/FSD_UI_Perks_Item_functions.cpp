// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perks_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perks_Item.UI_Perks_Item_C.SetIconSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Item_C::SetIconSize(int* InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.SetIconSize");

	UUI_Perks_Item_C_SetIconSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.Set Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Item_C::Set_Selected(bool* InSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.Set Selected");

	UUI_Perks_Item_C_Set_Selected_Params params;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.ShowAs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             InPerkAsset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InRank                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPerkTierState*                InState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InPerkHighlighted              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Item_C::ShowAs(class UPerkAsset** InPerkAsset, int* InRank, EPerkTierState* InState, bool* InHovered, bool* InPerkHighlighted, bool* InSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.ShowAs");

	UUI_Perks_Item_C_ShowAs_Params params;
	params.InPerkAsset = InPerkAsset;
	params.InRank = InRank;
	params.InState = InState;
	params.InHovered = InHovered;
	params.InPerkHighlighted = InPerkHighlighted;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.CreateToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UUI_Perks_Item_C::CreateToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.CreateToolTipWidget");

	UUI_Perks_Item_C_CreateToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Perks_Item.UI_Perks_Item_C.GetPerkAsset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPerkAsset*              PerkAsset                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EPerkTierState                 State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Tier                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Item_C::GetPerkAsset(class UPerkAsset** PerkAsset, EPerkTierState* State, int* Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.GetPerkAsset");

	UUI_Perks_Item_C_GetPerkAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerkAsset != nullptr)
		*PerkAsset = params.PerkAsset;
	if (State != nullptr)
		*State = params.State;
	if (Tier != nullptr)
		*Tier = params.Tier;
}


// Function UI_Perks_Item.UI_Perks_Item_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UUI_Perks_Item_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.Refresh");

	UUI_Perks_Item_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnPerkClaimed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             Perk                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClaimedTier                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Item_C::OnPerkClaimed(class UPerkAsset** Perk, int* ClaimedTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnPerkClaimed");

	UUI_Perks_Item_C_OnPerkClaimed_Params params;
	params.Perk = Perk;
	params.ClaimedTier = ClaimedTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Perks_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.Construct");

	UUI_Perks_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.Set Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Hovered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Item_C::Set_Hovered(bool* Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.Set Hovered");

	UUI_Perks_Item_C_Set_Hovered_Params params;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnPerkHighlighted_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             Perk                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsHighlighted                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Item_C::OnPerkHighlighted_Event(class UPerkAsset** Perk, bool* IsHighlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnPerkHighlighted_Event");

	UUI_Perks_Item_C_OnPerkHighlighted_Event_Params params;
	params.Perk = Perk;
	params.IsHighlighted = IsHighlighted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnPerkPointsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PerkPoints                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Change                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Item_C::OnPerkPointsChanged(int* PerkPoints, int* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnPerkPointsChanged");

	UUI_Perks_Item_C_OnPerkPointsChanged_Params params;
	params.PerkPoints = PerkPoints;
	params.Change = Change;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnPingFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_Perks_Item_C::OnPingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnPingFinished");

	UUI_Perks_Item_C_OnPingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Perks_Item_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_Perks_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Perks_Item_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_Perks_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Perks_Item_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_Perks_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Item_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.PreConstruct");

	UUI_Perks_Item_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.ExecuteUbergraph_UI_Perks_Item
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Item_C::ExecuteUbergraph_UI_Perks_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.ExecuteUbergraph_UI_Perks_Item");

	UUI_Perks_Item_C_ExecuteUbergraph_UI_Perks_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C**       Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Perks_Item_C::OnClick__DelegateSignature(class UUI_Perks_Item_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnClick__DelegateSignature");

	UUI_Perks_Item_C_OnClick__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnHoverLeave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C**       Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Perks_Item_C::OnHoverLeave__DelegateSignature(class UUI_Perks_Item_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnHoverLeave__DelegateSignature");

	UUI_Perks_Item_C_OnHoverLeave__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnHoverEnter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C**       Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Perks_Item_C::OnHoverEnter__DelegateSignature(class UUI_Perks_Item_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnHoverEnter__DelegateSignature");

	UUI_Perks_Item_C_OnHoverEnter__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
