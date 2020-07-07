#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_RestoreSave_Resources_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C
// 0x0079 (0x02A9 - 0x0230)
class UITM_RestoreSave_Resources_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              ParentBox;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              ParentBox2;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UResourceData*>                       Resources;                                                // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class UResourceData*, class UITM_TopBar_ResourceCounter_C*> ResourceWidgets;                                          // 0x0258(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsDesignTime;                                             // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_RestoreSave_Resources.ITM_RestoreSave_Resources_C");
		return ptr;
	}


	void AddResource(class UResourceData** InResource, bool* InHideWhenZero, int* Index);
	void SetResources(TArray<class UResourceData*>* InResources);
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void OnResourceAmountChanged(class UResourceData** Resource, float* currentAmount);
	void ExecuteUbergraph_ITM_RestoreSave_Resources(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
