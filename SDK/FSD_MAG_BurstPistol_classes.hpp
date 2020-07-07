#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MAG_BurstPistol_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MAG_BurstPistol.MAG_BurstPistol_C
// 0x0018 (0x0348 - 0x0330)
class AMAG_BurstPistol_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh;                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MAG_BurstPistol.MAG_BurstPistol_C");
		return ptr;
	}


	bool Attached(class AActor** Parent);
	bool Released();
	void DoRelease();
	void ExecuteUbergraph_MAG_BurstPistol(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
