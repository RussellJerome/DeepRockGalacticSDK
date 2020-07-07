#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SceneNode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SceneNode.BP_SceneNode_C
// 0x0028 (0x0358 - 0x0330)
class ABP_SceneNode_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsVisible;                                                // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInitialized;                                            // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x033A(0x0002) MISSED OFFSET
	struct FName                                       NameID;                                                   // 0x033C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	class ABP_SceneRoot_C*                             SceneRoot;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      ContentNode;                                              // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SceneNode.BP_SceneNode_C");
		return ptr;
	}


	void GetRoot(class ABP_SceneRoot_C** TheRoot);
	void OnSetNodeVisibility(bool* NewVisibility);
	void SetActorVisibilityRecursive(class AActor** Node, bool* NewVisible);
	void SetNodeVisibility(bool* NewVisible);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
