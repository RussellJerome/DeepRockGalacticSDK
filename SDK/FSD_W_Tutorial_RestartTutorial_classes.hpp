#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_W_Tutorial_RestartTutorial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C
// 0x0010 (0x0288 - 0x0278)
class UW_Tutorial_RestartTutorial_C : public UW_TutorialContent_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                                TimerHandle;                                              // 0x0280(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C");
		return ptr;
	}


	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void OnCloseTutorial();
	void ExecuteUbergraph_W_Tutorial_RestartTutorial(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
