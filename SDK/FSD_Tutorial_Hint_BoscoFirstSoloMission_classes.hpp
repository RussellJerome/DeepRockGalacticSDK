#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_BoscoFirstSoloMission_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C
// 0x0080 (0x0238 - 0x01B8)
class UTutorial_Hint_BoscoFirstSoloMission_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FirstTimeDelay;                                           // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	struct FTutorialHint                               ReminderHint;                                             // 0x01C8(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C");
		return ptr;
	}


	void ReceiveOnInitialized();
	void OnLaserPointerEvent(struct FLaserPointerTarget* HitInfo);
	void ExecuteUbergraph_Tutorial_Hint_BoscoFirstSoloMission(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
