#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_SideBar_GrenadeSelect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C
// 0x0078 (0x02A8 - 0x0230)
class UITM_UpgGear_SideBar_GrenadeSelect_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                ItemBox;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             UpgradeBuySwitcher;                                       // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                      CharacterClass;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      itemClass;                                                // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUpgradableGearComponent*                    Upgradable;                                               // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBasic_Popup_YesNoPrompt_C*                  YesNoPrompt;                                              // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	EItemCategory                                      Category;                                                 // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	TArray<class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C*> Grenades;                                                 // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnItemSelected;                                           // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* PurchaseWidget;                                           // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPlayerCharacterID*                          PlayerId;                                                 // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ActiveClass;                                              // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C");
		return ptr;
	}


	void SetActiveGrenade(class UClass** NewClass, bool* InEquip, bool* IsUnlocked, class UClass** itemClass);
	void SetItem(class UPlayerCharacterID** characterID);
	void OnWidgetCreated(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget);
	void SetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C** YesNoPrompt);
	void RefreshItems();
	void Reset_Grenade_Preview();
	void ItemEquipped_Event(class UClass** itemClass);
	void OnYesNo(bool* Yes);
	void OnItemTryPurchase(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** GrenadeWidget);
	void OnItemUnhovered(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget);
	void OnItemHovered(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C** Widget, bool* IsUnlocked);
	void ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect(int* EntryPoint);
	void OnItemSelected__DelegateSignature(class UClass** itemClass, bool* Equip, bool* IsUnlocked);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
