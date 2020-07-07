#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EWC_Salvage_Defend_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EWC_Salvage_Defend.EWC_Salvage_Defend_C
// 0x002C (0x0078 - 0x004C)
class UEWC_Salvage_Defend_C : public UEWC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     SpawnLocation;                                            // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class UEnemyGroupDescriptor*                       EnemyGroup;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Wave_Count_Waves;                                         // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Wave_Count_Constant_Pressure;                             // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EWC_Salvage_Defend.EWC_Salvage_Defend_C");
		return ptr;
	}


	void StartWave();
	void ExecuteUbergraph_EWC_Salvage_Defend(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
