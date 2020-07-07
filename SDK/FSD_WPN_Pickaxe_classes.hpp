#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Pickaxe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_Pickaxe.WPN_Pickaxe_C
// 0x0014 (0x07A4 - 0x0790)
class AWPN_Pickaxe_C : public AManualMiningItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              NextHitTime;                                              // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_Pickaxe.WPN_Pickaxe_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void SpecialTargetDamageEffects(struct FVector* ImpactPoint, struct FVector* ImpactNormal);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_Pickaxe(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
