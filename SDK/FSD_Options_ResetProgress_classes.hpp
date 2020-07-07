#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_ResetProgress_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Options_ResetProgress.Options_ResetProgress_C
// 0x0010 (0x0240 - 0x0230)
class UOptions_ResetProgress_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_ButtonWithControls_C*                 Basic_ButtonWithControls;                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_ResetProgress.Options_ResetProgress_C");
		return ptr;
	}


	void OnFailure_E60EC8DB4E80DB2E20AA1A9F09A53224();
	void OnSuccess_E60EC8DB4E80DB2E20AA1A9F09A53224();
	void BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature();
	void Answer(bool* Yes);
	void ExecuteUbergraph_Options_ResetProgress(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
