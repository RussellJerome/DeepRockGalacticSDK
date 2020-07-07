#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_UpgIconSingle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C
// 0x008A (0x02BA - 0x0230)
class UITM_UpgGear_UpgIconSingle_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OnPurchased;                                              // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UITM_BaseUpgradeIcon_C*                      UpgradeIcon;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UItemUpgrade*                                Upgrade;                                                  // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EItemUpgradeStatus                                 Status;                                                   // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	class UClass*                                      itemClass;                                                // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFSDPlayerState*                             PlayerState;                                              // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsItemHovered;                                            // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUpgradeHovered;                                         // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpgradeUnhovered;                                       // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpgradeClicked;                                         // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               OverrideStatus;                                           // 0x02A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShowEquippedAsBorder;                                     // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x02A2(0x0006) MISSED OFFSET
	class UPlayerCharacterID*                          CharacerID;                                               // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTOOLTIP_UpgradeIcon_C*                      IconToolTip;                                              // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               ShowStatusOnTooltip;                                      // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TierLocked;                                               // 0x02B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C");
		return ptr;
	}


	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	class UWidget* Get_UpgradeIcon_ToolTip();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void ToggleStatPreview(bool* Preview);
	void GetTierLock(class AFSDPlayerState** InPlayerState, struct FUpgradeTier* InTierUpgrades, int* LockLevel, class UTexture2D** LockIcon, TEnumAsByte<ENUM_MenuColors>* LockBackgroundTint);
	void TryUnequipUpgrade(bool* success);
	void GetUpgradeCategory(class UItemUpgradeCategory** Category);
	class UTexture2D* GetUpgradeIcon();
	void GetGoogleAnalytics(class UItemUpgrade** Upgrade);
	bool IsInteractable();
	void GetTierStatus(struct FUpgradeTier* InTier, int* InTierIndex, class UClass** InCharacter, class UClass** InItem, class AFSDPlayerState** InPlayer, EItemUpgradeStatus* DefaultStatus);
	void IsTierIsAffordable(class UClass** InItemClass, class AFSDPlayerState** InPlayer, class UClass** InCharacter, struct FUpgradeTier* TierUpgrades, bool* Is_Affordable);
	void ShowTier(class UClass** InItemClass, class UClass** InCharacterClass, int* InTierIndex, struct FUpgradeTier* InTier, class AFSDPlayerState** InPlayerState, bool* InShowLockRequirement, bool* ShowToolTip);
	void GetPlayerState(class AFSDPlayerState** PlayerState);
	void GetItemClass(class UClass** itemClass);
	void GetItemUpgrade(class UItemUpgrade** Upgrade);
	void TryEquipUpgrade(bool* Equipped);
	void TryPurchaseUpgrade(bool* Purchased);
	void GetUpgradeStatus(EItemUpgradeStatus* Status);
	void Show(class UItemUpgrade** InUpgrade, class UClass** InItemClass, class UPlayerCharacterID** PlayerCharacterID, class AFSDPlayerState** InPlayerState, bool* ShowEquipAsBorder, bool* InTierLocked);
	void Refresh();
	void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature(class UITM_BaseUpgradeIcon_C** Widget);
	void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature(class UITM_BaseUpgradeIcon_C** Widget);
	void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature(class UITM_BaseUpgradeIcon_C** Widget);
	void Refresh_Tool_Tip();
	void PlayPurchasedAnim();
	void ExecuteUbergraph_ITM_UpgGear_UpgIconSingle(int* EntryPoint);
	void OnUpgradeClicked__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C** Widget);
	void OnUpgradeUnhovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C** Widget);
	void OnUpgradeHovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C** Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
