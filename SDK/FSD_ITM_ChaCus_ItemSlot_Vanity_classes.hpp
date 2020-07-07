#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ChaCus_ItemSlot_Vanity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C
// 0x0050 (0x0360 - 0x0310)
class UITM_ChaCus_ItemSlot_Vanity_C : public UITM_ChaCus_ItemSlot_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	EVanitySlot                                        VanitySlot;                                               // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0319(0x0007) MISSED OFFSET
	class UITM_GeneratedIcon_Item_C*                   SelectedIcon;                                             // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UVanityItem*>                         vanityItems;                                              // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UVanityItem*                                 DefaultItem;                                              // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  DefaultItemIcon;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       DefaultItemName;                                          // 0x0348(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C");
		return ptr;
	}


	struct FText GetItemName(class UCraftableObject** InVanityItem);
	void UpdateItemWidget(class UITM_GeneratedIcon_Item_C** InWidget, class UVanityItem** InVanityItem, bool* In_Show_Tool_Tip);
	void ReceiveEquipItem(int* InIndex, bool* OutSuccess);
	void ReceivePreviewItem(int* Index, bool* Show, bool* OutSuccess);
	void ReceiveItemNotificationData(int* Index, TArray<class UObject*>* Array);
	void ReceiveInitialize(int* AvailableItems);
	void ReceiveGetSelectedIndex(int* OutIndex);
	void CreateItemWidget(class UVanityItem** InVanityItem, bool* InBackgroundVisible, bool* InShowToolTip, class UITM_GeneratedIcon_Item_C** OutItemWidget);
	void SetSelectedItem(class UVanityItem** Item, bool* Equip);
	void ReceiveGenerateItems(TArray<class UWidget*>* OutItemWidgets);
	void ReceiveReleaseResource(class UWidget** InWidget);
	void ReceivePreConstruct();
	void On_Initialized();
	void ExecuteUbergraph_ITM_ChaCus_ItemSlot_Vanity(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
