#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Drop_CamShake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Drop_CamShake.BP_Drop_CamShake_C
// 0x0010 (0x0340 - 0x0330)
class ABP_Drop_CamShake_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Drop_CamShake.BP_Drop_CamShake_C");
		return ptr;
	}


	void SetStandingDown(bool* IsStandingDown);
	void TriggerShakeSequence();
	void ExecuteUbergraph_BP_Drop_CamShake(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
