#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CabinOwnerSign_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CabinOwnerSign.BP_CabinOwnerSign_C
// 0x0030 (0x0360 - 0x0330)
class ABP_CabinOwnerSign_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            NameWidget;                                               // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Lamp;                                                     // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CabinOwnerSign.BP_CabinOwnerSign_C");
		return ptr;
	}


	void SetPlayerName(struct FText* Value);
	void UserConstructionScript();
	void SetCabinOwner(class AFSDPlayerState** PlayerState);
	void ChangeName(class FString* NewName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CabinOwnerSign(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
