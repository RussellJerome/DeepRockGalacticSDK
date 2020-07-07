#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EWC_EggHunt_Ambush_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EWC_EggHunt_Ambush.EWC_EggHunt_Ambush_C
// 0x0018 (0x0064 - 0x004C)
class UEWC_EggHunt_Ambush_C : public UEWC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     SpawnLocation;                                            // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EWC_EggHunt_Ambush.EWC_EggHunt_Ambush_C");
		return ptr;
	}


	void StartWave();
	void ExecuteUbergraph_EWC_EggHunt_Ambush(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
