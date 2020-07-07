#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DetPack_Charge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DetPack_Charge.BP_DetPack_Charge_C
// 0x0069 (0x0401 - 0x0398)
class ABP_DetPack_Charge_C : public ADetPack
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOutlineComponent*                           Outline;                                                  // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USimpleObjectInfoComponent*                  SimpleObjectInfo;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Useable;                                                  // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio;                                                    // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SphereTimeline_Alpha_B734CAA34EA448BC3B483384E4E415D3;    // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SphereTimeline_Scale_B734CAA34EA448BC3B483384E4E415D3;    // 0x03E4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SphereTimeline__Direction_B734CAA34EA448BC3B483384E4E415D3;// 0x03E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          SphereTimeline;                                           // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SphereMaterial;                                           // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlaced;                                                 // 0x0400(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DetPack_Charge.BP_DetPack_Charge_C");
		return ptr;
	}


	void OnRep_IsPlaced();
	void UserConstructionScript();
	void SphereTimeline__FinishedFunc();
	void SphereTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void RecieveHitObject();
	void OnExploded();
	void Show_Warning_Sphere();
	void ExecuteUbergraph_BP_DetPack_Charge(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
