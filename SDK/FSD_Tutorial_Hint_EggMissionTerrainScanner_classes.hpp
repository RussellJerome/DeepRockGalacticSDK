#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_EggMissionTerrainScanner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C
// 0x001C (0x01D4 - 0x01B8)
class UTutorial_Hint_EggMissionTerrainScanner_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              First_Time_Delay;                                         // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	class UClass*                                      Target_Objective;                                         // 0x01C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AfterUseDelay;                                            // 0x01D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C");
		return ptr;
	}


	void ReceiveOnInitialized();
	void OnToggleMapTool_Event(bool* Visible);
	void Mark_Ready();
	void ReceiveOnHidden();
	void ExecuteUbergraph_Tutorial_Hint_EggMissionTerrainScanner(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
