// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_TierRow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.UpdateBackBar
// (Private, BlueprintCallable, BlueprintEvent)

void UITM_UpgGear_TierRow_C::UpdateBackBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.UpdateBackBar");

	UITM_UpgGear_TierRow_C_UpdateBackBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.SetPurchasedShout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogDataAsset**       InShout                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_TierRow_C::SetPurchasedShout(class UDialogDataAsset** InShout)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.SetPurchasedShout");

	UITM_UpgGear_TierRow_C_SetPurchasedShout_Params params;
	params.InShout = InShout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.GetIsRowLocked
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UITM_UpgGear_TierRow_C::GetIsRowLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.GetIsRowLocked");

	UITM_UpgGear_TierRow_C_GetIsRowLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_TierRow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PreConstruct");

	UITM_UpgGear_TierRow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_UpgGear_TierRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Construct");

	UITM_UpgGear_TierRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Initialize Upgrade Widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_TierRow_C::Initialize_Upgrade_Widget(class UITM_UpgGear_UpgIconSingle_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Initialize Upgrade Widget");

	UITM_UpgGear_TierRow_C_Initialize_Upgrade_Widget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UITM_UpgGear_TierRow_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh");

	UITM_UpgGear_TierRow_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.EquipUpgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C** UpgradeWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_TierRow_C::EquipUpgrade(class UITM_UpgGear_UpgIconSingle_C** UpgradeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.EquipUpgrade");

	UITM_UpgGear_TierRow_C_EquipUpgrade_Params params;
	params.UpgradeWidget = UpgradeWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PurchaseUpgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C** UpgradeWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_TierRow_C::PurchaseUpgrade(class UITM_UpgGear_UpgIconSingle_C** UpgradeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PurchaseUpgrade");

	UITM_UpgGear_TierRow_C_PurchaseUpgrade_Params params;
	params.UpgradeWidget = UpgradeWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnPurchaseConfirmation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_TierRow_C::OnPurchaseConfirmation(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnPurchaseConfirmation");

	UITM_UpgGear_TierRow_C_OnPurchaseConfirmation_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh Tier Icon
// (BlueprintCallable, BlueprintEvent)

void UITM_UpgGear_TierRow_C::Refresh_Tier_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh Tier Icon");

	UITM_UpgGear_TierRow_C_Refresh_Tier_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Unequip Upgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C** Upgrade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_TierRow_C::Unequip_Upgrade(class UITM_UpgGear_UpgIconSingle_C** Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Unequip Upgrade");

	UITM_UpgGear_TierRow_C_Unequip_Upgrade_Params params;
	params.Upgrade = Upgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_TierRow_C::OnUpgradeHovered(class UITM_UpgGear_UpgIconSingle_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeHovered");

	UITM_UpgGear_TierRow_C_OnUpgradeHovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_TierRow_C::OnUpgradeUnhovered(class UITM_UpgGear_UpgIconSingle_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeUnhovered");

	UITM_UpgGear_TierRow_C_OnUpgradeUnhovered_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgrade Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_TierRow_C::OnUpgrade_Clicked(class UITM_UpgGear_UpgIconSingle_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgrade Clicked");

	UITM_UpgGear_TierRow_C_OnUpgrade_Clicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.ExecuteUbergraph_ITM_UpgGear_TierRow
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_TierRow_C::ExecuteUbergraph_ITM_UpgGear_TierRow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.ExecuteUbergraph_ITM_UpgGear_TierRow");

	UITM_UpgGear_TierRow_C_ExecuteUbergraph_ITM_UpgGear_TierRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
