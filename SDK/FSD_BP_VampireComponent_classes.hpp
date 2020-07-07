#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_VampireComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VampireComponent.BP_VampireComponent_C
// 0x0058 (0x0160 - 0x0108)
class UBP_VampireComponent_C : public UFloatPerkComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                                  VampireHealCue;                                           // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagQuery                           Query;                                                    // 0x0118(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VampireComponent.BP_VampireComponent_C");
		return ptr;
	}


	void OnEnemyKilled(struct FGameplayTagContainer* enemyTags, class AActor** enemy, class UDamageClass** DamageClass);
	void Receive_OnInitialized();
	void Client_VampireTriggered();
	void ExecuteUbergraph_BP_VampireComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
