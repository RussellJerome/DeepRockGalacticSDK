#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LVL_Loading_DeepDive_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C
// 0x0010 (0x0348 - 0x0338)
class ALVL_Loading_DeepDive_B_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULevelSequencePlayer*                        Player;                                                   // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C");
		return ptr;
	}


	void StopPlayer();
	void StartPlayer(class ULevelSequence** LevelSequence);
	void ReceiveBeginPlay();
	void PlayerStart(class ULevelSequence** LoaderLevelSequence);
	void PlayerStop();
	void ExecuteUbergraph_LVL_Loading_DeepDive_B(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
