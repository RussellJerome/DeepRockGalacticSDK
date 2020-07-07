#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DrinksBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DrinksBox.BP_DrinksBox_C
// 0x0060 (0x0390 - 0x0330)
class ABP_DrinksBox_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             BartenderLocation;                                        // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      State;                                                    // 0x0350(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAvailableForNewDrink;                                   // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDrinkReady;                                             // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ADrinkableActor*                             DrinkableActor;                                           // 0x0378(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnStateChanged;                                           // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DrinksBox.BP_DrinksBox_C");
		return ptr;
	}


	void OnRep_DrinkableActor();
	void IsAvailable(bool* IsAvailable);
	void OnRep_State();
	void Spawn_Drink(class UDrinkableDataAsset** Drinkable);
	void OnDrinkableDestroyed(class AActor** DestroyedActor);
	void Fill_DrinkableActor();
	void ExecuteUbergraph_BP_DrinksBox(int* EntryPoint);
	void OnStateChanged__DelegateSignature(unsigned char* State);
	void OnDrinkReady__DelegateSignature(class ABP_DrinksBox_C** DrinkBox);
	void OnAvailableForNewDrink__DelegateSignature(class ABP_DrinksBox_C** DrinkBox);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
