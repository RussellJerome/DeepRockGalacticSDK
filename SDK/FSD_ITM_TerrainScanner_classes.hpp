#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TerrainScanner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_TerrainScanner.ITM_TerrainScanner_C
// 0x0030 (0x0508 - 0x04D8)
class AITM_TerrainScanner_C : public ATerrainScannerItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Screen_Rays;                                              // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_HandheldTablet;                                        // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      HUD;                                                      // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ITM_TerrainScanner.ITM_TerrainScanner_C");
		return ptr;
	}


	void AddedToInventory(class APlayerCharacter** ItemOwner);
	void OnTerrainScannerPressed();
	void OnTerrainScannerReleased();
	void ExecuteUbergraph_ITM_TerrainScanner(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
