#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_OldSupplyPod_FailSmokeCloud_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OldSupplyPod_FailSmokeCloud.BP_OldSupplyPod_FailSmokeCloud_C
// 0x0024 (0x0398 - 0x0374)
class ABP_OldSupplyPod_FailSmokeCloud_C : public ABP_Damage_Cloud_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStatusEffectsComponent*                     StatusEffects;                                            // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USimpleHealthComponent*                      SimpleHealth;                                             // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OldSupplyPod_FailSmokeCloud.BP_OldSupplyPod_FailSmokeCloud_C");
		return ptr;
	}


	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase** HealthComponent);
	void ExecuteUbergraph_BP_OldSupplyPod_FailSmokeCloud(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
