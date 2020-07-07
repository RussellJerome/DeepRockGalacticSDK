#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CoreInfuser_Rewards_Selector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C
// 0x0038 (0x0368 - 0x0330)
class ABP_CoreInfuser_Rewards_Selector_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget_Rewards;                                           // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget_Bg;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsVisible;                                                // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRewardSelected;                                         // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CoreInfuser_Rewards_Selector.BP_CoreInfuser_Rewards_Selector_C");
		return ptr;
	}


	void GetBackgroundsWidget(class UUI_CoreInfuser_Rewards_Background_C** Widget);
	void GetRewardsWidget(class UUI_CoreInfuser_Rewards_Selector_C** Widget);
	void ReceiveBeginPlay();
	void SetVisible(bool* inVisible);
	void OnRewardSelectedEvent(class USchematic** Reward);
	void SetSelectedReward(class USchematic** InReward);
	void SetDispenser(class AEventRewardDispenser** InDispenser);
	void Set_Selectable_Rewards(TArray<class USchematic*>* InRewards);
	void ExecuteUbergraph_BP_CoreInfuser_Rewards_Selector(int* EntryPoint);
	void OnRewardSelected__DelegateSignature(class USchematic** SchematicReward);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
