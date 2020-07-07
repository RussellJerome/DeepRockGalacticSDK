#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_FlareGun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_FlareGun.WPN_FlareGun_C
// 0x0028 (0x0758 - 0x0730)
class AWPN_FlareGun_C : public AFlareGun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFirstPersonWidgetComponent*                 FirstPersonWidget;                                        // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh;                                    // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileLauncherComponent*                ProjectileLauncher;                                       // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_FlareGun.WPN_FlareGun_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_FlareGun(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
