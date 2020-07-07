// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ItemWheel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ItemWheel.HUD_ItemWheel_C.SwapUpperItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Unselected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_ItemWheel_C::SwapUpperItems(class UWidget** Unselected, class UWidget** Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.SwapUpperItems");

	UHUD_ItemWheel_C_SwapUpperItems_Params params;
	params.Unselected = Unselected;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemAdded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UItemsBarIcon**          ItemIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_ItemWheel_C::OnItemAdded(class UItemsBarIcon** ItemIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemAdded");

	UHUD_ItemWheel_C_OnItemAdded_Params params;
	params.ItemIcon = ItemIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ItemWheel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.PreConstruct");

	UHUD_ItemWheel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemEquipped
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UItemsBarIcon**          ItemIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_ItemWheel_C::OnItemEquipped(class UItemsBarIcon** ItemIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemEquipped");

	UHUD_ItemWheel_C_OnItemEquipped_Params params;
	params.ItemIcon = ItemIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.AddIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemsBarIcon**          Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ItemWheel_C::AddIcon(class UItemsBarIcon** Icon, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.AddIcon");

	UHUD_ItemWheel_C_AddIcon_Params params;
	params.Icon = Icon;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnClear
// (Event, Protected, BlueprintEvent)

void UHUD_ItemWheel_C::OnClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnClear");

	UHUD_ItemWheel_C_OnClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_ItemWheel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.Construct");

	UHUD_ItemWheel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnInputSourceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputSource*                  InputSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ItemWheel_C::OnInputSourceChanged(EInputSource* InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnInputSourceChanged");

	UHUD_ItemWheel_C_OnInputSourceChanged_Params params;
	params.InputSource = InputSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.Show
// (BlueprintCallable, BlueprintEvent)

void UHUD_ItemWheel_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.Show");

	UHUD_ItemWheel_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemClicked
// (Event, Protected, BlueprintEvent)

void UHUD_ItemWheel_C::OnItemClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemClicked");

	UHUD_ItemWheel_C_OnItemClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemAdded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UItemsBarIcon**          ItemIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_ItemWheel_C::OnSupplyItemAdded(class UItemsBarIcon** ItemIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemAdded");

	UHUD_ItemWheel_C_OnSupplyItemAdded_Params params;
	params.ItemIcon = ItemIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemUnequipped
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UItemsBarIcon**          ItemIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_ItemWheel_C::OnSupplyItemUnequipped(class UItemsBarIcon** ItemIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemUnequipped");

	UHUD_ItemWheel_C_OnSupplyItemUnequipped_Params params;
	params.ItemIcon = ItemIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemEquipped
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UItemsBarIcon**          ItemIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_ItemWheel_C::OnSupplyItemEquipped(class UItemsBarIcon** ItemIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemEquipped");

	UHUD_ItemWheel_C_OnSupplyItemEquipped_Params params;
	params.ItemIcon = ItemIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnFadeInOutFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_ItemWheel_C::OnFadeInOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnFadeInOutFinished");

	UHUD_ItemWheel_C_OnFadeInOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnFadeInOutStarted
// (BlueprintCallable, BlueprintEvent)

void UHUD_ItemWheel_C::OnFadeInOutStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnFadeInOutStarted");

	UHUD_ItemWheel_C_OnFadeInOutStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.ExecuteUbergraph_HUD_ItemWheel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ItemWheel_C::ExecuteUbergraph_HUD_ItemWheel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.ExecuteUbergraph_HUD_ItemWheel");

	UHUD_ItemWheel_C_ExecuteUbergraph_HUD_ItemWheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
