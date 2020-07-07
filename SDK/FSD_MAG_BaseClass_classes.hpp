#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MAG_BaseClass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MAG_BaseClass.MAG_BaseClass_C
// 0x0024 (0x036C - 0x0348)
class AMAG_BaseClass_C : public AMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFirstPersonStaticMeshComponent*             Mesh;                                                     // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ChangeFovDelay;                                           // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MAG_BaseClass.MAG_BaseClass_C");
		return ptr;
	}


	bool Attached(class AActor** Parent);
	bool Released();
	void DoRelease();
	void OnItemSkinned(class USkinEffect** Skin);
	void ExecuteUbergraph_MAG_BaseClass(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
