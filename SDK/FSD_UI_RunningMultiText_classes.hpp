#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RunningMultiText_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_RunningMultiText.UI_RunningMultiText_C
// 0x0057 (0x0328 - 0x02D1)
class UUI_RunningMultiText_C : public UUI_GenericLabel_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FText>                               Texts;                                                    // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DelayBetweenText;                                         // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TextDuration;                                             // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RandomizeText;                                            // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02F9(0x0003) MISSED OFFSET
	float                                              RunnerProgress;                                           // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RunnerActive;                                             // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0301(0x0003) MISSED OFFSET
	int                                                NextIndex;                                                // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      CurrentLine;                                              // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundCue*                                   AudioBeginLine;                                           // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   AudioEndLine;                                             // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RunningMultiText.UI_RunningMultiText_C");
		return ptr;
	}


	void PlayCue(class USoundCue** InSound);
	void InitRun();
	void SetNextLine();
	void SetRunnerProgress(float* InProgress, bool* Finished);
	void SetTextRunnerActive(bool* Inactive);
	void SetTexts(TArray<struct FText>* InTexts);
	void OnTick_B06C42A944ABEA2C4BF8E7AF24421023(float* DeltaTime, float* NormalizedTime);
	void Completed_B06C42A944ABEA2C4BF8E7AF24421023(float* DeltaTime, float* NormalizedTime);
	void PreConstruct(bool* IsDesignTime);
	void DoRun();
	void Destruct();
	void ExecuteUbergraph_UI_RunningMultiText(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
