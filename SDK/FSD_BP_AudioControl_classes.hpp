#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_AudioControl_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AudioControl.BP_AudioControl_C
// 0x0108 (0x0200 - 0x00F8)
class UBP_AudioControl_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USoundSubmix*                                ExplosionsSubmix;                                         // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundSubmix*                                WeaponFireSubmix;                                         // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentAttack;                                            // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentRelease;                                           // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               wasAbove;                                                 // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          Blend;                                                    // 0x0120(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BlendProgress;                                            // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DuckingPower;                                             // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCompressorData>                     Compressors;                                              // 0x01B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAudioComponent*                             IronWillIsSpawned;                                        // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               LowHealthFade;                                            // 0x01C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	class USubmixEffectSubmixEQPreset*                 LowHealthEq;                                              // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DuckingLowHealthAmount;                                   // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DuckingDownStateAmount;                                   // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DuckingIronWillAmount;                                    // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Off;                                                      // 0x01E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DownStateFade;                                            // 0x01E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IronWillFade;                                             // 0x01E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x01E7(0x0001) MISSED OFFSET
	class USubmixEffectSubmixEQPreset*                 DownStateEq;                                              // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             LowHealthIsSpawned;                                       // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USubmixEffectSubmixEQPreset*                 IronWillEq;                                               // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AudioControl.BP_AudioControl_C");
		return ptr;
	}


	void DoFadeIronWill(bool* ShouldFade);
	void DoFadeDownState(bool* DoFade);
	void DoFadeLowHealth(bool* ShouldFade);
	void HealthAudio(class USubmixEffectSubmixEQPreset** EQPreset, float* HealthPercentage);
	bool ShouldSetTimestamp(bool* IsActivate);
	void SubmixCompressor(float* Volume, class USoundSubmix** Master_Listen_Submix, float* Threshold, float* Attack, float* Release, TArray<struct FCompressorData>* CompressorData);
	void SubmixDucking(class USoundSubmix** ListenSubmix, int* ListenAttack_Max_200, int* ListenRelease_Max_1000, float* ListenDuckMultiply, class USubmixEffectSubmixEQPreset** TargetDuckingEQ, bool* Multiply_Value_Print, class UCurveFloat** DuckingCurve, class UCurveFloat** AttackCurve, class UCurveFloat** ReleaseCurve, float* ListenArrayElement);
	void ReceiveTick(float* DeltaSeconds);
	void DamageTaken(float* amount);
	void ExplosionsEnvelopeFollower(TArray<float>* Envelope);
	void ReceiveBeginPlay();
	void CustomEvent_3(float* amount);
	void ExecuteUbergraph_BP_AudioControl(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
