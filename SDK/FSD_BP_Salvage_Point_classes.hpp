#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Salvage_Point_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Salvage_Point.BP_Salvage_Point_C
// 0x0011 (0x0341 - 0x0330)
class ABP_Salvage_Point_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      SalvageState;                                             // 0x0340(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Salvage_Point.BP_Salvage_Point_C");
		return ptr;
	}


	void SetSalvagePointState(unsigned char* State);
	void OnRep_State();
	void OnDefenseComplete();
	void OnDefenseStart();
	void EnableRepair();
	void OnDefenseFail();
	void ExecuteUbergraph_BP_Salvage_Point(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
