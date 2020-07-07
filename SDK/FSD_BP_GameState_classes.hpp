#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_GameState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameState.BP_GameState_C
// 0x0030 (0x0790 - 0x0760)
class ABP_GameState_C : public AFSDGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0760(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              InitialHeroes;                                            // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              InitialHeroesLeft;                                        // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameState.BP_GameState_C");
		return ptr;
	}


	TArray<class UClass*> GetPlayableCharacters();
	void GetRandomIntialHero(class UClass** HeroClass);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void StartGame();
	void HandleSeamlessTravelEvent();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_GameState(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
