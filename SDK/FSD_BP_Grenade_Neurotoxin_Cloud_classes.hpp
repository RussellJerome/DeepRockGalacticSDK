#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Grenade_Neurotoxin_Cloud_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Grenade_Neurotoxin_Cloud.BP_Grenade_Neurotoxin_Cloud_C
// 0x001C (0x0390 - 0x0374)
class ABP_Grenade_Neurotoxin_Cloud_C : public ABP_Damage_Cloud_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDamageComponent*                            Damage;                                                   // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USimpleHealthComponent*                      SimpleHealth;                                             // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_Neurotoxin_Cloud.BP_Grenade_Neurotoxin_Cloud_C");
		return ptr;
	}


	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase** HealthComponent);
	void ExecuteUbergraph_BP_Grenade_Neurotoxin_Cloud(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
