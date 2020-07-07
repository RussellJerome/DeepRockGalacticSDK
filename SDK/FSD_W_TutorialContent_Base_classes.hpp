#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_W_TutorialContent_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_TutorialContent_Base.W_TutorialContent_Base_C
// 0x0018 (0x0278 - 0x0260)
class UW_TutorialContent_Base_C : public UTutorialContentWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            MainObjectiveAnim;                                        // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UITM_BasicTutorialWindow_C*                  ITM_BasicTutorialWindow;                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_TutorialContent_Base.W_TutorialContent_Base_C");
		return ptr;
	}


	void CompleteWithAnim();
	void OnShown();
	void SetText(struct FText* TaskHeader, struct FText* TaskText, struct FText* CheckBoxText);
	void SetImage(class UTexture2D** Image);
	void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature();
	void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature();
	void PlayTaskProgress();
	void OnRemoveWidget();
	void SetTaskCounter(int* Counter, int* Denominator);
	void ExecuteUbergraph_W_TutorialContent_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
