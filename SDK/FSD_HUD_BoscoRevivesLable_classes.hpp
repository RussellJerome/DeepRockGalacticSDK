#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_BoscoRevivesLable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C
// 0x0088 (0x02B8 - 0x0230)
class UHUD_BoscoRevivesLable_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  ReviveCountText;                                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateFontInfo                              Font;                                                     // 0x0240(0x0050) (Edit, BlueprintVisible)
	struct FSlateColor                                 Color;                                                    // 0x0290(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C");
		return ptr;
	}


	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void OnReviveCountChangedEvent(int* ReviveCount);
	void ExecuteUbergraph_HUD_BoscoRevivesLable(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
