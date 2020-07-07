#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Filter_ServerWorkEnvironment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C
// 0x0038 (0x0268 - 0x0230)
class UFilter_ServerWorkEnvironment_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                EntryBox;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBasic_ExpandableMenu_C*                     MenuWorkEnvironment;                                      // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UCheck_ServerWorkEnvironment_C*>      Entries;                                                  // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C");
		return ptr;
	}


	void OpenMenu(bool* Open);
	void GetSelectedDifficulties(TArray<class UDifficultySetting*>* Difficulties);
	void IsDifficultySelected(class UDifficultySetting** InDifficulty, bool* Selected);
	void UpdateSubheader();
	void Add_Work_Environment(class UDifficultySetting** Difficulty, class UCheck_ServerWorkEnvironment_C** OutWidget, bool* OutIsChecked);
	void PreConstruct(bool* IsDesignTime);
	void OnCheckedChanged(class UCheck_ServerWorkEnvironment_C** CheckBox, class UDifficultySetting** Difficulty, bool* IsChecked);
	void Reset();
	void ExecuteUbergraph_Filter_ServerWorkEnvironment(int* EntryPoint);
	void OnSelectionChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
