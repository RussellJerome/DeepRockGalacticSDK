#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PLS_CaveGenerator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PLS_CaveGenerator.PLS_CaveGenerator_C
// 0x0008 (0x06C0 - 0x06B8)
class APLS_CaveGenerator_C : public APLS_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PLS_CaveGenerator.PLS_CaveGenerator_C");
		return ptr;
	}


	void CreateCaveGraph();
	void SpawnDropPod();
	void ExecuteUbergraph_PLS_CaveGenerator(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
