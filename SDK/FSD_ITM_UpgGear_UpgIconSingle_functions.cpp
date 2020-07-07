// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_UpgIconSingle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UITM_UpgGear_UpgIconSingle_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnMouseButtonDown");

	UITM_UpgGear_UpgIconSingle_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Get_UpgradeIcon_ToolTip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_UpgGear_UpgIconSingle_C::Get_UpgradeIcon_ToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Get_UpgradeIcon_ToolTip");

	UITM_UpgGear_UpgIconSingle_C_Get_UpgradeIcon_ToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UITM_UpgGear_UpgIconSingle_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnKeyDown");

	UITM_UpgGear_UpgIconSingle_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ToggleStatPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Preview                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::ToggleStatPreview(bool* Preview)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ToggleStatPreview");

	UITM_UpgGear_UpgIconSingle_C_ToggleStatPreview_Params params;
	params.Preview = Preview;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierLock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFSDPlayerState**        InPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUpgradeTier*           InTierUpgrades                 (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            LockLevel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              LockIcon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>   LockBackgroundTint             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetTierLock(class AFSDPlayerState** InPlayerState, struct FUpgradeTier* InTierUpgrades, int* LockLevel, class UTexture2D** LockIcon, TEnumAsByte<ENUM_MenuColors>* LockBackgroundTint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierLock");

	UITM_UpgGear_UpgIconSingle_C_GetTierLock_Params params;
	params.InPlayerState = InPlayerState;
	params.InTierUpgrades = InTierUpgrades;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LockLevel != nullptr)
		*LockLevel = params.LockLevel;
	if (LockIcon != nullptr)
		*LockIcon = params.LockIcon;
	if (LockBackgroundTint != nullptr)
		*LockBackgroundTint = params.LockBackgroundTint;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryUnequipUpgrade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::TryUnequipUpgrade(bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryUnequipUpgrade");

	UITM_UpgGear_UpgIconSingle_C_TryUnequipUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (success != nullptr)
		*success = params.success;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItemUpgradeCategory*    Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetUpgradeCategory(class UItemUpgradeCategory** Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeCategory");

	UITM_UpgGear_UpgIconSingle_C_GetUpgradeCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UITM_UpgGear_UpgIconSingle_C::GetUpgradeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeIcon");

	UITM_UpgGear_UpgIconSingle_C_GetUpgradeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetGoogleAnalytics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemUpgrade**           Upgrade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetGoogleAnalytics(class UItemUpgrade** Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetGoogleAnalytics");

	UITM_UpgGear_UpgIconSingle_C_GetGoogleAnalytics_Params params;
	params.Upgrade = Upgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UITM_UpgGear_UpgIconSingle_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsInteractable");

	UITM_UpgGear_UpgIconSingle_C_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierStatus
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUpgradeTier*           InTier                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           InTierIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 InCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 InItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        InPlayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemUpgradeStatus             DefaultStatus                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetTierStatus(struct FUpgradeTier* InTier, int* InTierIndex, class UClass** InCharacter, class UClass** InItem, class AFSDPlayerState** InPlayer, EItemUpgradeStatus* DefaultStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierStatus");

	UITM_UpgGear_UpgIconSingle_C_GetTierStatus_Params params;
	params.InTier = InTier;
	params.InTierIndex = InTierIndex;
	params.InCharacter = InCharacter;
	params.InItem = InItem;
	params.InPlayer = InPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultStatus != nullptr)
		*DefaultStatus = params.DefaultStatus;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsTierIsAffordable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUpgradeTier            TierUpgrades                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UClass**                 InItemClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        InPlayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 InCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Affordable                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::IsTierIsAffordable(class UClass** InItemClass, class AFSDPlayerState** InPlayer, class UClass** InCharacter, struct FUpgradeTier* TierUpgrades, bool* Is_Affordable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsTierIsAffordable");

	UITM_UpgGear_UpgIconSingle_C_IsTierIsAffordable_Params params;
	params.InItemClass = InItemClass;
	params.InPlayer = InPlayer;
	params.InCharacter = InCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TierUpgrades != nullptr)
		*TierUpgrades = params.TierUpgrades;
	if (Is_Affordable != nullptr)
		*Is_Affordable = params.Is_Affordable;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ShowTier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 InItemClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 InCharacterClass               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InTierIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUpgradeTier*           InTier                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class AFSDPlayerState**        InPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InShowLockRequirement          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowToolTip                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::ShowTier(class UClass** InItemClass, class UClass** InCharacterClass, int* InTierIndex, struct FUpgradeTier* InTier, class AFSDPlayerState** InPlayerState, bool* InShowLockRequirement, bool* ShowToolTip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ShowTier");

	UITM_UpgGear_UpgIconSingle_C_ShowTier_Params params;
	params.InItemClass = InItemClass;
	params.InCharacterClass = InCharacterClass;
	params.InTierIndex = InTierIndex;
	params.InTier = InTier;
	params.InPlayerState = InPlayerState;
	params.InShowLockRequirement = InShowLockRequirement;
	params.ShowToolTip = ShowToolTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetPlayerState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetPlayerState(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetPlayerState");

	UITM_UpgGear_UpgIconSingle_C_GetPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  itemClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetItemClass(class UClass** itemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemClass");

	UITM_UpgGear_UpgIconSingle_C_GetItemClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (itemClass != nullptr)
		*itemClass = params.itemClass;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemUpgrade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItemUpgrade*            Upgrade                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetItemUpgrade(class UItemUpgrade** Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemUpgrade");

	UITM_UpgGear_UpgIconSingle_C_GetItemUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Upgrade != nullptr)
		*Upgrade = params.Upgrade;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryEquipUpgrade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Equipped                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::TryEquipUpgrade(bool* Equipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryEquipUpgrade");

	UITM_UpgGear_UpgIconSingle_C_TryEquipUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Equipped != nullptr)
		*Equipped = params.Equipped;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryPurchaseUpgrade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Purchased                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::TryPurchaseUpgrade(bool* Purchased)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryPurchaseUpgrade");

	UITM_UpgGear_UpgIconSingle_C_TryPurchaseUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Purchased != nullptr)
		*Purchased = params.Purchased;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EItemUpgradeStatus             Status                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetUpgradeStatus(EItemUpgradeStatus* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeStatus");

	UITM_UpgGear_UpgIconSingle_C_GetUpgradeStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemUpgrade**           InUpgrade                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 InItemClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerCharacterID**     PlayerCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        InPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowEquipAsBorder              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InTierLocked                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::Show(class UItemUpgrade** InUpgrade, class UClass** InItemClass, class UPlayerCharacterID** PlayerCharacterID, class AFSDPlayerState** InPlayerState, bool* ShowEquipAsBorder, bool* InTierLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Show");

	UITM_UpgGear_UpgIconSingle_C_Show_Params params;
	params.InUpgrade = InUpgrade;
	params.InItemClass = InItemClass;
	params.PlayerCharacterID = PlayerCharacterID;
	params.InPlayerState = InPlayerState;
	params.ShowEquipAsBorder = ShowEquipAsBorder;
	params.InTierLocked = InTierLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh
// (Private, BlueprintCallable, BlueprintEvent)

void UITM_UpgGear_UpgIconSingle_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh");

	UITM_UpgGear_UpgIconSingle_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UITM_BaseUpgradeIcon_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature(class UITM_BaseUpgradeIcon_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature");

	UITM_UpgGear_UpgIconSingle_C_BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UITM_BaseUpgradeIcon_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature(class UITM_BaseUpgradeIcon_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature");

	UITM_UpgGear_UpgIconSingle_C_BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UITM_BaseUpgradeIcon_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature(class UITM_BaseUpgradeIcon_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature");

	UITM_UpgGear_UpgIconSingle_C_BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh Tool Tip
// (BlueprintCallable, BlueprintEvent)

void UITM_UpgGear_UpgIconSingle_C::Refresh_Tool_Tip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh Tool Tip");

	UITM_UpgGear_UpgIconSingle_C_Refresh_Tool_Tip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.PlayPurchasedAnim
// (BlueprintCallable, BlueprintEvent)

void UITM_UpgGear_UpgIconSingle_C::PlayPurchasedAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.PlayPurchasedAnim");

	UITM_UpgGear_UpgIconSingle_C_PlayPurchasedAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ExecuteUbergraph_ITM_UpgGear_UpgIconSingle
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::ExecuteUbergraph_ITM_UpgGear_UpgIconSingle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ExecuteUbergraph_ITM_UpgGear_UpgIconSingle");

	UITM_UpgGear_UpgIconSingle_C_ExecuteUbergraph_ITM_UpgGear_UpgIconSingle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::OnUpgradeClicked__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeClicked__DelegateSignature");

	UITM_UpgGear_UpgIconSingle_C_OnUpgradeClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::OnUpgradeUnhovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeUnhovered__DelegateSignature");

	UITM_UpgGear_UpgIconSingle_C_OnUpgradeUnhovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::OnUpgradeHovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeHovered__DelegateSignature");

	UITM_UpgGear_UpgIconSingle_C_OnUpgradeHovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
