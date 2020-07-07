#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Salvage_FuelPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C
// 0x001F (0x0360 - 0x0341)
class ABP_Salvage_FuelPoint_C : public ABP_Salvage_Point_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTerrainPlacementComponent*                  terrainPlacement;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_Salvage_FuelPod_C*                       Pod;                                                      // 0x0358(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C");
		return ptr;
	}


	void EnableRepair();
	void OnDefenseStart();
	void OnDefenseComplete();
	void OnDefenseFail();
	void ExecuteUbergraph_BP_Salvage_FuelPoint(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
