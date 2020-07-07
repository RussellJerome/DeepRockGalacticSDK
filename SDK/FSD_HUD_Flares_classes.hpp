#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Flares_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_Flares.HUD_Flares_C
// 0x0079 (0x02C9 - 0x0250)
class UHUD_Flares_C : public UFSDUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              FlareBox;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_AdvancedLabel_C*                         InputLabel;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UHUD_FlareIcon_C*>                    Icons;                                                    // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0278(0x0050) UNKNOWN PROPERTY: SetProperty HUD_Flares.HUD_Flares_C.Reasons
	bool                                               LaserpointerPressed;                                      // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Flares.HUD_Flares_C");
		return ptr;
	}


	void CreateIcons(int* IconCount);
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void OnItemsLoaded();
	void OnFlareProduction(int* NextIndex, float* Progress);
	void Setup_Dynamic_HUD();
	void OnFlareThrown_Event();
	void OnFlareCountChanged(int* CurrentCount, class UInventoryComponent** Inventory);
	void UpdateVisibility();
	void OnLaserPointerPressed();
	void OnLaserPointerReleased_Event();
	void ExecuteUbergraph_HUD_Flares(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
