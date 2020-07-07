#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ZipLineConnector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ZipLineConnector.BP_ZipLineConnector_C
// 0x0030 (0x0388 - 0x0358)
class ABP_ZipLineConnector_C : public AZipLineConnector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_ZipLine_Connect;                                        // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_ZipLine_MagneticBeam;                                   // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Zipline_Sparks;                                         // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ConnectorMesh;                                            // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZipLineConnector.BP_ZipLineConnector_C");
		return ptr;
	}


	void SetConnectorVisible(bool* inVisible);
	void ReceiveConnected(struct FVector* WorldLocation, struct FVector* Direction);
	void ReceiveDisconnected();
	void ReceiveUpdateZipLinePoint(struct FVector* WorldLocation, struct FVector* Directioy, bool* Speeding);
	void UpdateLocation(struct FVector* Location, struct FVector* Direction);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ZipLineConnector(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
