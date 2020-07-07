#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SupplyPod_Marker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SupplyPod_Marker.BP_SupplyPod_Marker_C
// 0x0048 (0x0378 - 0x0330)
class ABP_SupplyPod_Marker_C : public AItemMarker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SupplyPod_SingleMesh;                                     // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                StartColor;                                               // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ColorName;                                                // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SupplyPod_Marker.BP_SupplyPod_Marker_C");
		return ptr;
	}


	void SetMaterials(class UMaterial** ParentMaterial, class UMeshComponent** Mesh, class UMaterialInstanceDynamic** DynamicMaterial);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMarkerValidChanged(bool* Valid);
	void OnMarkerVisibilityChanged(bool* Visible);
	void ExecuteUbergraph_BP_SupplyPod_Marker(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
