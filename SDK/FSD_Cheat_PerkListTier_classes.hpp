#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_PerkListTier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Cheat_PerkListTier.Cheat_PerkListTier_C
// 0x005C (0x028C - 0x0230)
class UCheat_PerkListTier_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  TierText;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBox_114;                                          // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FUpgradeTier                                myUpgradeTier;                                            // 0x0248(0x0018) (Edit, BlueprintVisible)
	EItemCategory                                      myCategory;                                               // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnItemActivationStateChange;                              // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UCheat_PerkListItem_C*>               my_PerkList_items;                                        // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                my_Tier_index;                                            // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Cheat_PerkListTier.Cheat_PerkListTier_C");
		return ptr;
	}


	void Initiate_Widget(EItemCategory* input_category, struct FUpgradeTier* Upgrade_struct, int* Tier_Index, class UClass** itemClass);
	void On_State_change(bool* Is_Checked, class UItemUpgrade** Item, EItemCategory* Item_Category);
	void Initiate_Bosco_tier(struct FUpgradeTier* Upgrade_struct, int* Tier_Index, class UClass** Item_Class);
	void On_bosco_state_change(bool* Is_Checked, class UItemUpgrade** Item, EItemCategory* Item_Category);
	void ExecuteUbergraph_Cheat_PerkListTier(int* EntryPoint);
	void OnItemActivationStateChange__DelegateSignature(bool* Is_Checked, class UItemUpgrade** Upgrade_item, EItemCategory* Category);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
