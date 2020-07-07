#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_LureTarget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LureTarget.BP_LureTarget_C
// 0x0149 (0x0479 - 0x0330)
class ABP_LureTarget_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFakeFallComponent*                          FakeFall;                                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget1;                                                  // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh_Hologram;                                            // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh_Projector;                                           // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Grenade_Lure_HolloStreaks;                              // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObjectAttackerPositioning*                  ObjectAttackerPositioning;                                // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USimpleHealthComponent*                      SimpleHealth;                                             // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              GlitchAnimationRate_Visibility_C039C82E4E9A2669384696BB798667AF;// 0x0398(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GlitchAnimationRate_Animation_Rate_C039C82E4E9A2669384696BB798667AF;// 0x039C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    GlitchAnimationRate__Direction_C039C82E4E9A2669384696BB798667AF;// 0x03A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          GlitchAnimationRate;                                      // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Glitch2_Y_6D7D66B2467FD3C0288C8BA13855B201;               // 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Glitch2_X_6D7D66B2467FD3C0288C8BA13855B201;               // 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Glitch2_Z_6D7D66B2467FD3C0288C8BA13855B201;               // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Glitch2__Direction_6D7D66B2467FD3C0288C8BA13855B201;      // 0x03BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Glitch2;                                                  // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Glitch_Y_96E18DAF461D1987E60A9D86D3431FCD;                // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Glitch_X_96E18DAF461D1987E60A9D86D3431FCD;                // 0x03CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Glitch_Z_96E18DAF461D1987E60A9D86D3431FCD;                // 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Glitch__Direction_96E18DAF461D1987E60A9D86D3431FCD;       // 0x03D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Glitch;                                                   // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Disappear_Y_B748642F45FA83EEDB7F8DB0E524EFA5;             // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Disappear_X_B748642F45FA83EEDB7F8DB0E524EFA5;             // 0x03E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Disappear_Z_B748642F45FA83EEDB7F8DB0E524EFA5;             // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Disappear__Direction_B748642F45FA83EEDB7F8DB0E524EFA5;    // 0x03EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Disappear;                                                // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              GrowHologramZ_Y_F6411B824C449290031E39820C54F8D0;         // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GrowHologramZ_X_F6411B824C449290031E39820C54F8D0;         // 0x03FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GrowHologramZ_Z_F6411B824C449290031E39820C54F8D0;         // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    GrowHologramZ__Direction_F6411B824C449290031E39820C54F8D0;// 0x0404(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	class UTimelineComponent*                          GrowHologramZ;                                            // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Dynamic_Material;                                         // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FinalColour;                                              // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                InitialColour;                                            // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_Animation_C*                             Animation;                                                // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UAnimSequence*>                       Anim;                                                     // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Base_Dynamic_Material;                                    // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomZ;                                                  // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomY;                                                  // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomX;                                                  // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	class UAnimSequence*                               MainAnimation;                                            // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasGlitched;                                              // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LureTarget.BP_LureTarget_C");
		return ptr;
	}


	bool GetIsTargetable();
	struct FVector GetTargetCenterMass();
	class UHealthComponentBase* GetTargetHealthComponent();
	void ShowDamageEffects(class UParticleSystem** particles, struct FVector* Location, struct FRotator* Orientation);
	void UserConstructionScript();
	void GrowHologramZ__FinishedFunc();
	void GrowHologramZ__UpdateFunc();
	void Disappear__FinishedFunc();
	void Disappear__UpdateFunc();
	void Glitch__FinishedFunc();
	void Glitch__UpdateFunc();
	void Glitch2__FinishedFunc();
	void Glitch2__UpdateFunc();
	void GlitchAnimationRate__FinishedFunc();
	void GlitchAnimationRate__UpdateFunc();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float* Health);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase** HealthComponent);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LureTarget(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
