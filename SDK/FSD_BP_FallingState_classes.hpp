#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_FallingState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FallingState.BP_FallingState_C
// 0x0048 (0x0218 - 0x01D0)
class UBP_FallingState_C : public UFallingStateComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                                  JumpBootsActivated_Cue;                                   // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             JumpBootsActivated_Particles;                             // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ImpactCompensation_Impact_Cue;                            // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Impactcompensation_Impact_Particles;                      // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ImpactCompensation_Activate_Cue;                          // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ImpactCompensationDeactivateCue;                          // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IC_WasActivated;                                          // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0209(0x0003) MISSED OFFSET
	float                                              HoverBootsBreakingSpeed;                                  // 0x020C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             JumpBootsActivated_Particles_FirstPerson;                 // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FallingState.BP_FallingState_C");
		return ptr;
	}


	void HoverBootsTick(float* DeltaSeconds, bool* Enter, bool* Exit);
	void ShowJumpBootsActivation();
	void ReceiveHoverBootsTick(float* DeltaSeconds);
	void ReceiveHoverBootsActiveChanged(bool* IsActive);
	void ExecuteUbergraph_BP_FallingState(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
