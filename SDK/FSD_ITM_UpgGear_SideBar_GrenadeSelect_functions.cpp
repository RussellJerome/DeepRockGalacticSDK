// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_SideBar_GrenadeSelect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetActiveGrenade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 NewClass                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InEquip                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  itemClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_C::SetActiveGrenade(class UClass** NewClass, bool* InEquip, bool* IsUnlocked, class UClass** itemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetActiveGrenade");

	UITM_UpgGear_SideBar_GrenadeSelect_C_SetActiveGrenade_Params params;
	params.NewClass = NewClass;
	params.InEquip = InEquip;
	params.IsUnlocked = IsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (itemClass != nullptr)
		*itemClass = params.itemClass;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerCharacterID**     characterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_C::SetItem(class UPlayerCharacterID** characterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetItem");

	UITM_UpgGear_SideBar_GrenadeSelect_C_SetItem_Params params;
	params.characterID = characterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnWidgetCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_C::OnWidgetCreated(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnWidgetCreated");

	UITM_UpgGear_SideBar_GrenadeSelect_C_OnWidgetCreated_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetYesNoPrompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasic_Popup_YesNoPrompt_C** YesNoPrompt                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_C::SetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C** YesNoPrompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetYesNoPrompt");

	UITM_UpgGear_SideBar_GrenadeSelect_C_SetYesNoPrompt_Params params;
	params.YesNoPrompt = YesNoPrompt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.RefreshItems
// (BlueprintCallable, BlueprintEvent)

void UITM_UpgGear_SideBar_GrenadeSelect_C::RefreshItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.RefreshItems");

	UITM_UpgGear_SideBar_GrenadeSelect_C_RefreshItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.Reset Grenade Preview
// (BlueprintCallable, BlueprintEvent)

void UITM_UpgGear_SideBar_GrenadeSelect_C::Reset_Grenade_Preview()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.Reset Grenade Preview");

	UITM_UpgGear_SideBar_GrenadeSelect_C_Reset_Grenade_Preview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.ItemEquipped_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 itemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_C::ItemEquipped_Event(class UClass** itemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.ItemEquipped_Event");

	UITM_UpgGear_SideBar_GrenadeSelect_C_ItemEquipped_Event_Params params;
	params.itemClass = itemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnYesNo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_C::OnYesNo(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnYesNo");

	UITM_UpgGear_SideBar_GrenadeSelect_C_OnYesNo_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemTryPurchase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** GrenadeWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_C::OnItemTryPurchase(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** GrenadeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemTryPurchase");

	UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemTryPurchase_Params params;
	params.GrenadeWidget = GrenadeWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_C::OnItemUnhovered(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemUnhovered");

	UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemUnhovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_C::OnItemHovered(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget, bool* IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemHovered");

	UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemHovered_Params params;
	params.Widget = Widget;
	params.IsUnlocked = IsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_C::ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect");

	UITM_UpgGear_SideBar_GrenadeSelect_C_ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 itemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Equip                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_GrenadeSelect_C::OnItemSelected__DelegateSignature(class UClass** itemClass, bool* Equip, bool* IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemSelected__DelegateSignature");

	UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemSelected__DelegateSignature_Params params;
	params.itemClass = itemClass;
	params.Equip = Equip;
	params.IsUnlocked = IsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
