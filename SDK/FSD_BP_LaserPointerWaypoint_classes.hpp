#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_LaserPointerWaypoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C
// 0x0050 (0x03A0 - 0x0350)
class ABP_LaserPointerWaypoint_C : public ALaserPointerWaypoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ShowOnScanner;                                            // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RotatorNode;                                              // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorTrackingComponent*                     ActorTracking;                                            // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ShowInGame;                                               // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USimpleObjectInfoComponent*                  SimpleObjectInfo;                                         // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Scanner_Object_Timeline_Time_EC07CDDA40AC89EA6875FCB53F3F2A41;// 0x0390(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Scanner_Object_Timeline__Direction_EC07CDDA40AC89EA6875FCB53F3F2A41;// 0x0394(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Scanner_Object_Timeline;                                  // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C");
		return ptr;
	}


	void Scanner_Object_Timeline__FinishedFunc();
	void Scanner_Object_Timeline__UpdateFunc();
	void OnShow();
	void OnHide();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LaserPointerWaypoint(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
