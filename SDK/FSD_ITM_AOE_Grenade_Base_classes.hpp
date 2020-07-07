#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_AOE_Grenade_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C
// 0x0020 (0x0444 - 0x0424)
class AITM_AOE_Grenade_Base_C : public AITM_Grenade_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      AOEClass;                                                 // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DischargeSound;                                           // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AoESpawnDelay;                                            // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C");
		return ptr;
	}


	void OnExploded();
	void ExecuteUbergraph_ITM_AOE_Grenade_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
