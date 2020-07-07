#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ShieldGenerator_LoadoutProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShieldGenerator_LoadoutProxy.BP_ShieldGenerator_LoadoutProxy_C
// 0x0018 (0x0450 - 0x0438)
class ABP_ShieldGenerator_LoadoutProxy_C : public ALoadoutItemProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShieldGenerator_LoadoutProxy.BP_ShieldGenerator_LoadoutProxy_C");
		return ptr;
	}


	void RecieveEquipped();
	void RecieveUnequipped();
	void ExecuteUbergraph_BP_ShieldGenerator_LoadoutProxy(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
