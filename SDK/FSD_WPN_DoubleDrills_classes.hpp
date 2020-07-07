#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_DoubleDrills_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_DoubleDrills.WPN_DoubleDrills_C
// 0x0060 (0x0608 - 0x05A8)
class AWPN_DoubleDrills_C : public AAutoMinerItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFirstPersonWidgetComponent*                 Widget_Heat;                                              // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonWidgetComponent*                 Widget_Fuel;                                              // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh1;                                   // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh;                                    // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             OverheatingAudioScene;                                    // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHeatMaterialComponent*                      HeatMaterial;                                             // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              NextSplatTime;                                            // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultFOV;                                               // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWeaponDisplay_Overheat_C*                   OverheatWidget1;                                          // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWeaponDisplay_Overheat_C*                   OverheaWidget2;                                           // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWeaponDisplay_Drill_Heat_C*                 OverheatWidget;                                           // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_DoubleDrills.WPN_DoubleDrills_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	class USceneComponent* GetHeatingAudioSceneComponent();
	void OnTemperatureChanged(float* Temperature, bool* Overheated);
	void Increase_FOV();
	void Decrease_FOV();
	void AddedToInventory(class APlayerCharacter** ItemOwner);
	void BP_OnDrillDamage();
	void OnStartDrilling();
	void OnStopDrilling();
	void Receive_Overheated();
	void ReceiveBeginPlay();
	void Gunsling();
	void RecieveCycledItem();
	void ExecuteUbergraph_WPN_DoubleDrills(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
