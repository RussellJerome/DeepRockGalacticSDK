#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TOOLTIP_ServerEntry_Team_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C
// 0x006C (0x029C - 0x0230)
class UTOOLTIP_ServerEntry_Team_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Menu_MinimalWindow_C*                 Basic_Menu_MinimalWindow;                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                ContentBox;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateFontInfo                              ResourceFont;                                             // 0x0248(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MaxIcons;                                                 // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C");
		return ptr;
	}


	void SetData(class UITM_ServerList_Entry_PlayerIcons_C** TeamWidget, bool* IsClassLocked, TArray<class UClass*>* Players);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_TOOLTIP_ServerEntry_Team(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
