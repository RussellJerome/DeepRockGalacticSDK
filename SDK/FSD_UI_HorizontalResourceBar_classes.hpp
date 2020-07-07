#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_HorizontalResourceBar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HorizontalResourceBar.UI_HorizontalResourceBar_C
// 0x0138 (0x0368 - 0x0230)
class UUI_HorizontalResourceBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  NoResourcesLabel;                                         // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              ResourcesBox;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               IconsOnRight;                                             // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	int                                                IconSize;                                                 // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowRequiredAmount;                                       // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	struct FText                                       No_Resources_Text;                                        // 0x0258(0x0028) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              NoResourcesFont;                                          // 0x0270(0x0050) (Edit, BlueprintVisible)
	TEnumAsByte<ENUM_MenuColors>                       NoResourcesColor;                                         // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	TMap<class UResourceData*, class UITM_UpgGear_ResourceCounter_C*> ResourceWidgets;                                          // 0x02C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UResourceData*, int>                    PreviewDict;                                              // 0x0318(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HorizontalResourceBar.UI_HorizontalResourceBar_C");
		return ptr;
	}


	void SetFromDict(TMap<class UResourceData*, int>* InResources);
	void SetCraftingCost(TArray<struct FCraftingCost>* Cost, bool* OutCanAfford);
	void AddResource(class UResourceData** InResource, float* InAmount, float* InRequiredAmount);
	void Clear();
	void AddResourceCustom(class UResourceData** InResource, float* InAmount, float* InRequiredAmount, bool* IconOnRight, bool* ShowRequiredAmount);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_UI_HorizontalResourceBar(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
