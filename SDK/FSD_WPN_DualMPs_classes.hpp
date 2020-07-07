#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_DualMPs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_DualMPs.WPN_DualMPs_C
// 0x0048 (0x07B0 - 0x0768)
class AWPN_DualMPs_C : public ADualMachinePistols
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0768(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFirstPersonWidgetComponent*                 FirstPersonWidgetLeft;                                    // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh1;                                   // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonWidgetComponent*                 FirstPersonWidget;                                        // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh;                                    // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHitscanComponent*                           HitScan;                                                  // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        MuzzleFlash;                                              // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_DualMPs.WPN_DualMPs_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_DualMPs(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
