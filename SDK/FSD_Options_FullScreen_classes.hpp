#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_FullScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Options_FullScreen.Options_FullScreen_C
// 0x0010 (0x0240 - 0x0230)
class UOptions_FullScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_OptionSwitcher_C*                     Basic_OptionSwitcher;                                     // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_FullScreen.Options_FullScreen_C");
		return ptr;
	}


	void Construct();
	void UINeedsUpdate();
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_18_OnSelectionChanged__DelegateSignature(struct FText* Value, int* Index);
	void ExecuteUbergraph_Options_FullScreen(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
