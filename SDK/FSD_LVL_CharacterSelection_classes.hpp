#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LVL_CharacterSelection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LVL_CharacterSelection.LVL_CharacterSelection_C
// 0x0038 (0x0370 - 0x0338)
class ALVL_CharacterSelection_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULevelSequencePlayer*                        Player;                                                   // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ACharacterSelectionSwitcher_C*               switcher;                                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCharacterViewInfo>                  CharViewerList;                                           // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ACharacterSelectionSwitcher_C*               CharacterSelectionSwitcher_186_ExecuteUbergraph_LVL_CharacterSelection_RefProperty;// 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                CameraActor_1_ExecuteUbergraph_LVL_CharacterSelection_RefProperty;// 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LVL_CharacterSelection.LVL_CharacterSelection_C");
		return ptr;
	}


	void PlaySpecificSequence(class ULevelSequence** LevelSequence);
	void StopPlayer();
	void StartPlayer(ECharselectionCameraLocation* CamSetting);
	void StopPlay();
	void StartLevelSeq(class ULevelSequence** CharacterLevelSequence);
	void StartPlay(ECharselectionCameraLocation* selectionLocation);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_LVL_CharacterSelection(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
