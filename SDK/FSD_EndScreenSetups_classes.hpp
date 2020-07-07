#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EndScreenSetups_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndScreenSetups.EndScreenSetups_C
// 0x0048 (0x0140 - 0x00F8)
class UEndScreenSetups_C : public UActorComponent
{
public:
	TArray<struct FEndScreenMoveSet>                   VictorySets;                                              // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEndScreenMoveSet>                   DefeatSets;                                               // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEndScreenMoveSet>                   AvailableVictorySets;                                     // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<struct FEndScreenMoveSet>                   AvailableDefeatSets;                                      // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	struct FRandomStream                               RandStream;                                               // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndScreenSetups.EndScreenSetups_C");
		return ptr;
	}


	void GetRandomWalkAnim(class UVictoryPose** VicPose, struct FRandomStream* RandStream, TSoftObjectPtr<class UAnimSequence>* Walk);
	void LoadVictoryAnims(class UVictoryPose** InputPin, struct FRandomStream* RandStream, struct FEndScreenMove* EndScreenMove);
	void LoadActorClass(TSoftObjectPtr<class UClass>* Soft, class UClass** Hard);
	void LoadAnimSeqArray(TArray<TSoftObjectPtr<class UAnimSequence>>* Soft, TArray<class UAnimSequence*>* Hard);
	void LoadAnimSeq(TSoftObjectPtr<class UAnimSequence>* Soft, class UAnimSequence** Hard);
	void SplitMoveSetAnims(TArray<TSoftObjectPtr<class UAnimSequence>>* TargetArray, class UAnimSequence** Selected1, TArray<TSoftObjectPtr<class UAnimSequence>>* Rest1);
	void ResetMovesets(int* NewSeed);
	void RandomWeightedMoveSet(TArray<struct FEndScreenMoveSet>* Array, struct FEndScreenMove* Selected);
	void GetEndScreenMoveSet(bool* Survived, class UVictoryPose** VictPose, struct FRandomStream* RandStream, struct FEndScreenMove* Selected);
	void RandomAnimElement(TArray<class UAnimSequence*>* Array, class UAnimSequence** Output);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
