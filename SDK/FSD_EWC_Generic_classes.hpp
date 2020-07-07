#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EWC_Generic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EWC_Generic.EWC_Generic_C
// 0x001C (0x0068 - 0x004C)
class UEWC_Generic_C : public UEWC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FVector>                             SpawnLocations;                                           // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EWC_Generic.EWC_Generic_C");
		return ptr;
	}


	void StartWave();
	void StopConstantPreassure();
	void ExecuteUbergraph_EWC_Generic(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
