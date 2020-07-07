#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_PatchNotes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MENU_PatchNotes.MENU_PatchNotes_C
// 0x0010 (0x0480 - 0x0470)
class UMENU_PatchNotes_C : public UMENU_EscapeMenu_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  ModBox;                                                   // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MENU_PatchNotes.MENU_PatchNotes_C");
		return ptr;
	}


	void OnClosed();
	void OnShown();
	void EnableMod(class UClass** ModActor);
	void Construct();
	void ExecuteUbergraph_MENU_PatchNotes(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
