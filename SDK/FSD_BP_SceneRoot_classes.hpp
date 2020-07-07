#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SceneRoot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SceneRoot.BP_SceneRoot_C
// 0x0160 (0x0490 - 0x0330)
class ABP_SceneRoot_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<class FString, struct FArrayOfSwitch>         SwitchMap;                                                // 0x0340(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDebug;                                                   // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	TMap<class FString, class UMaterialInterface*>     MaterialMap;                                              // 0x0398(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FName, struct FArrayOfActor>           Name2Node;                                                // 0x03E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class ABP_SceneNode_C*, struct FName>         Node2Name;                                                // 0x0438(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UDataTable*                                  ActorsTable;                                              // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SceneRoot.BP_SceneRoot_C");
		return ptr;
	}


	void InitializeMaps();
	void GetAllActiveActors(TArray<class AActor*>* Actors);
	void RegisterSceneNode(class ABP_SceneNode_C** Node, struct FName* NameID);
	void SetSwitch(class FString* Name, int* Value);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SceneRoot(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
