#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Revolver_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_Revolver.WPN_Revolver_C
// 0x004C (0x0794 - 0x0748)
class AWPN_Revolver_C : public ARevoler
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0748(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFirstPersonWidgetComponent*                 FirstPersonWidget;                                        // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TP_Drum;                                                  // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FP_Drum;                                                  // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        MuzzlePointLight;                                         // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             Mesh_AmmoCounter;                                         // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHitscanComponent*                           HitScan;                                                  // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LastSpread;                                               // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_Revolver.WPN_Revolver_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void Receive_ReloadBegin();
	void Receive_ReloadEnd();
	void ReceiveBeginPlay();
	void OnSpreadChanged_Event_1(float* HorizontalSpread, float* VerticalSpread, bool* isAtRest);
	void ExecuteUbergraph_WPN_Revolver(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
