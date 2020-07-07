#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CaveLeechCarver_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CaveLeechCarver.BP_CaveLeechCarver_C
// 0x0008 (0x0368 - 0x0360)
class ABP_CaveLeechCarver_C : public AInstantMeshCarver
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CaveLeechCarver.BP_CaveLeechCarver_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CaveLeechCarver(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
