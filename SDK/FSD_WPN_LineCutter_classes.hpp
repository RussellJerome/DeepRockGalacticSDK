#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_LineCutter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_LineCutter.WPN_LineCutter_C
// 0x005C (0x07B4 - 0x0758)
class AWPN_LineCutter_C : public ALineCutter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0758(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFirstPersonWidgetComponent*                 Widget_TotalAmmo;                                         // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonWidgetComponent*                 Widget_CurrentClip;                                       // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonParticleSystemComponent*         FP_P_Plasma_Beam_Right;                                   // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        MuzzleLight;                                              // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Line_Light;                                               // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonParticleSystemComponent*         FP_P_Plasma_Beam;                                         // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileLauncherComponent*                ProjectileLauncher;                                       // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Flicker_Brightness_Intensity_E04C79F0493C5086E3B612961CA53D93;// 0x07A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Flicker_Brightness__Direction_E04C79F0493C5086E3B612961CA53D93;// 0x07A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Flicker_Brightness;                                       // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DamageFrequency;                                          // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_LineCutter.WPN_LineCutter_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void Flicker_Brightness__FinishedFunc();
	void Flicker_Brightness__UpdateFunc();
	void ReceiveBeginPlay();
	void OnFireWhileLastProjectileAlive(class ALineCutterProjectile** Projectile);
	void ExecuteUbergraph_WPN_LineCutter(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
