// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetUpgradeToolTip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::GetUpgradeToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetUpgradeToolTip");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_GetUpgradeToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetIsHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::SetIsHovered(bool* InHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetIsHovered");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_SetIsHovered_Params params;
	params.InHovered = InHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.EquipItem
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::EquipItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.EquipItem");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_EquipItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.TryPurchaseItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::TryPurchaseItem(bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.TryPurchaseItem");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_TryPurchaseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (success != nullptr)
		*success = params.success;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetGrenadeInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Name                           (Parm, OutParm)
// struct FText                   Description                    (Parm, OutParm)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::GetGrenadeInfo(struct FText* Name, struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetGrenadeInfo");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_GetGrenadeInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (Description != nullptr)
		*Description = params.Description;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetCraftingCost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FCraftingCost>   Cost                           (Parm, OutParm, ZeroConstructor)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::GetCraftingCost(TArray<struct FCraftingCost>* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetCraftingCost");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_GetCraftingCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.OnKeyDown");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.UpdateToolTip
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::UpdateToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.UpdateToolTip");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_UpdateToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.IsInteractable");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetCurrentState
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EItemUpgradeStatus             Item_State                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::GetCurrentState(EItemUpgradeStatus* Item_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetCurrentState");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item_State != nullptr)
		*Item_State = params.Item_State;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemUpgradeStatus*            InItemStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InRequiredCharacterLevel       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::SetState(EItemUpgradeStatus* InItemStatus, int* InRequiredCharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetState");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_SetState_Params params;
	params.InItemStatus = InItemStatus;
	params.InRequiredCharacterLevel = InRequiredCharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.Refresh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemUpgradeStatus             OutState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::Refresh(EItemUpgradeStatus* OutState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.Refresh");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutState != nullptr)
		*OutState = params.OutState;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 GrenadeClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerCharacterID**     characterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemUpgradeStatus             OutState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::SetItem(class UClass** GrenadeClass, class UPlayerCharacterID** characterID, EItemUpgradeStatus* OutState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetItem");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_SetItem_Params params;
	params.GrenadeClass = GrenadeClass;
	params.characterID = characterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutState != nullptr)
		*OutState = params.OutState;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.PreConstruct");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemTryPurchase__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** GrenadeWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::ItemTryPurchase__DelegateSignature(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** GrenadeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemTryPurchase__DelegateSignature");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ItemTryPurchase__DelegateSignature_Params params;
	params.GrenadeWidget = GrenadeWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::ItemUnhovered__DelegateSignature(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemUnhovered__DelegateSignature");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ItemUnhovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::ItemHovered__DelegateSignature(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget, bool* IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemHovered__DelegateSignature");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ItemHovered__DelegateSignature_Params params;
	params.Widget = Widget;
	params.IsUnlocked = IsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 itemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C::ItemEquipped__DelegateSignature(class UClass** itemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemEquipped__DelegateSignature");

	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ItemEquipped__DelegateSignature_Params params;
	params.itemClass = itemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
