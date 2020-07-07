#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BarGlass_Standard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BarGlass_Standard.BP_BarGlass_Standard_C
// 0x0024 (0x0388 - 0x0364)
class ABP_BarGlass_Standard_C : public ABP_BarGlass_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SparkleDrink;                                             // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BarGlass_Standard.BP_BarGlass_Standard_C");
		return ptr;
	}


	void Fill();
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent** Component, bool* bReset);
	void ExecuteUbergraph_BP_BarGlass_Standard(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
