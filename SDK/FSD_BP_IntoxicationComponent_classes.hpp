#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_IntoxicationComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IntoxicationComponent.BP_IntoxicationComponent_C
// 0x0048 (0x0190 - 0x0148)
class UBP_IntoxicationComponent_C : public UCharacterIntoxicationComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Seed;                                                     // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrunkEffectCoolDown;                                      // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrunkenMovementNoiseStrength;                             // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrunkenYawNoiseStrength;                                  // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrunkenPitchNoiseStrength;                                // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoreMovement;                                           // 0x0164(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoreYaw;                                                // 0x0165(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnorePitch;                                              // 0x0166(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0167(0x0001) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DrunkenEffect;                                            // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EffectId;                                                 // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntoxicationVisualStrength;                               // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntoxicationMovementStrength;                             // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrunkenShoutCoolDown;                                     // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShoutCooldownMax;                                         // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShoutCooldownMin;                                         // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeginShoutIntoxicationLimit;                              // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IntoxicationComponent.BP_IntoxicationComponent_C");
		return ptr;
	}


	void ToPercentStr(float* Progress, class FString* PercentString);
	void MyLerp(float* Current_Value, float* Target_Value, float* Delta_Time, float* Result);
	void SetPostProcessStrength(float* NewStrength);
	int GetAlcoholPct(EDrinkableAlcoholStrength* Strength);
	void Lerp_Movement_Stength(float* DeltaTime);
	void Push_Effects();
	void Pop_Effects(class FString* DebugReason);
	void ReceiveDrunkTick(float* DeltaTime, float* DrunkTime);
	void ReceivePassOutDrunk();
	void Lerp_Post_Process_Strength(float* DeltaTime);
	void ReceiveDrunkEnd();
	void ReceiveDrunkBegin();
	void ExecuteUbergraph_BP_IntoxicationComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
