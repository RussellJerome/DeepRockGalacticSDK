#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DeadState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DeadState.BP_DeadState_C
// 0x0054 (0x018C - 0x0138)
class UBP_DeadState_C : public UDeadStateComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0138(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTransform                                  Start_Transform;                                          // 0x0140(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DeathEffect;                                              // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DeathMontage;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Active_DeathParticle_system;                              // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Effect_start_delay;                                       // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeadState.BP_DeadState_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveStateExit();
	void ReceiveStateEnter();
	void Set_Death_parameters(float* Respawn_delay, float* Effect_Delay, class UAnimMontage** Death_montage, class UParticleSystem** Death_Effect, bool* Use_animtime_as_respawn_time);
	void ExecuteUbergraph_BP_DeadState(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
