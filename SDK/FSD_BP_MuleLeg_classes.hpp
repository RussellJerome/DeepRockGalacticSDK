#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MuleLeg_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MuleLeg.BP_MuleLeg_C
// 0x001F (0x0420 - 0x0401)
class ABP_MuleLeg_C : public ABP_Gem_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Distress_Sphere;                                          // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MuleLeg.BP_MuleLeg_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnDropped_Leg();
	void OnPickedUpLeg();
	void DisableDistressSphere();
	void ExecuteUbergraph_BP_MuleLeg(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
