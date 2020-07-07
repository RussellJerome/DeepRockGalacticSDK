#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LVL_Loading_StartMission01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LVL_Loading_StartMission01.LVL_Loading_StartMission01_C
// 0x0018 (0x0350 - 0x0338)
class ALVL_Loading_StartMission01_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULevelSequencePlayer*                        Player;                                                   // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AEmitter*                                    P_E3trailer_DropPod_Exhaust_4_ExecuteUbergraph_LVL_Loading_StartMission01_RefProperty;// 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LVL_Loading_StartMission01.LVL_Loading_StartMission01_C");
		return ptr;
	}


	void OnFinshed();
	void StopPlayer();
	void StartPlayer(class ULevelSequence** LevelSequence);
	void ReceiveBeginPlay();
	void PlayerStart(class ULevelSequence** LoaderLevelSequence);
	void PlayerStop();
	void ExecuteUbergraph_LVL_Loading_StartMission01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
