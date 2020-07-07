#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MAG_Flamethrower_Bottle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MAG_Flamethrower_Bottle.MAG_Flamethrower_Bottle_C
// 0x0020 (0x0368 - 0x0348)
class AMAG_Flamethrower_Bottle_C : public AMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh;                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MAG_Flamethrower_Bottle.MAG_Flamethrower_Bottle_C");
		return ptr;
	}


	bool Attached(class AActor** Parent);
	bool Released();
	void DoRelease();
	void OnItemSkinned(class USkinEffect** Skin);
	void ExecuteUbergraph_MAG_Flamethrower_Bottle(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
