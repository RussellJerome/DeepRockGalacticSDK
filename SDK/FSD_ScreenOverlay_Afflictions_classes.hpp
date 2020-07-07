#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_Afflictions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C
// 0x0070 (0x02A0 - 0x0230)
class UScreenOverlay_Afflictions_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                RootCanvas;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class APlayerCharacter*                            Player;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UHealthComponent*                            HealthComponent;                                          // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TMap<class UPlayerAfflictionOverlay*, class UPlayerAfflictionOverlayWidget*> ActiveOverlays;                                           // 0x0250(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C");
		return ptr;
	}


	void FindOverlayWidget(class UPlayerAfflictionOverlay** OverlayData, bool* CreateIfNew, class UPlayerAfflictionOverlayWidget** OutWidget);
	void Construct();
	void OnShowOverlay_Event(class UPlayerAfflictionOverlay** Overlay);
	void OnHideOverlay_Event(class UPlayerAfflictionOverlay** Overlay);
	void ExecuteUbergraph_ScreenOverlay_Afflictions(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
