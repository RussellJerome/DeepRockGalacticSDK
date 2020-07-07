#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_LaserPointer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C
// 0x0080 (0x0238 - 0x01B8)
class UTutorial_Hint_LaserPointer_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FirstTimeDelay;                                           // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AfterUseDelay;                                            // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTutorialHint                               ReminderHint;                                             // 0x01C8(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C");
		return ptr;
	}


	void ReceiveOnInitialized();
	void OnMarkerPlaced_Event(struct FVector* Location, struct FText* Name, struct FLinearColor* Color, class AActor** Target, ELaserPointerTargetType* TypeOfTarget);
	void ExecuteUbergraph_Tutorial_Hint_LaserPointer(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
