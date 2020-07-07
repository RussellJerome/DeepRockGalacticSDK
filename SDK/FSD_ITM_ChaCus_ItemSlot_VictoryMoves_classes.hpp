#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ChaCus_ItemSlot_VictoryMoves_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C
// 0x0020 (0x0330 - 0x0310)
class UITM_ChaCus_ItemSlot_VictoryMoves_C : public UITM_ChaCus_ItemSlot_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UVictoryPose*>                        VictoryPoses;                                             // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWidget*                                     SelectedWidget;                                           // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C");
		return ptr;
	}


	void ReceiveEquipItem(int* InIndex, bool* OutSuccess);
	void PreviewItem(class UVictoryPose** Item, bool* Show, bool* OutSuccess);
	void ReceivePreviewItem(int* Index, bool* Show, bool* OutSuccess);
	void ReceiveItemNotificationData(int* Index, TArray<class UObject*>* Array);
	void ReceiveInitialize(int* AvailableItems);
	void ReceiveGetSelectedIndex(int* OutIndex);
	void UpdateOrCreateItemWidget(class UVictoryPose** InVictoryMove, class UWidget** InReuseWidget, bool* InShowToolTip, class UWidget** OutWidget);
	void ReceiveGenerateItems(TArray<class UWidget*>* OutItemWidgets);
	void UpdateEquipped();
	void ReceivePreConstruct();
	void SetHovered(bool* InSlotHovered);
	void ExecuteUbergraph_ITM_ChaCus_ItemSlot_VictoryMoves(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
