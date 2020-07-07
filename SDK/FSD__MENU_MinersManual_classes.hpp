#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__MENU_MinersManual_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass _MENU_MinersManual._MENU_MinersManual_C
// 0x01A0 (0x03E8 - 0x0248)
class U_MENU_MinersManual_C : public UWindowWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OnMMLoaded;                                               // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            NewSection;                                               // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class ULoreScreen_MinersManual_C*                  LoreScreen_MinersManual;                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollLIst_Category_Window_C*               LoreScrollList;                                           // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UItm_MinersManual_TabsHeader_C*              TabsMenu;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VB_LoreContentHolder;                                     // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class ULoreScreen_Master_C*                        ContentScreen;                                            // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               MinersManualsObject;                                      // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	class UMinersManual*                               MinersManual;                                             // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       OverviewText;                                             // 0x0298(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EMinersManualSection, struct FMM_ButtonInfo>  MainButtons;                                              // 0x02B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<EMinersManualSection>                       MainButtonOrder;                                          // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EMinersManualSection                               SelectedSection;                                          // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0311(0x0007) MISSED OFFSET
	struct FText                                       TempName;                                                 // 0x0318(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                TempButtonIndex;                                          // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	class UTexture2D*                                  TempFrontImage;                                           // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  TempBackgroundImage;                                      // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SelectedIndex;                                            // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	struct FMM_ButtonInfo                              tempButton;                                               // 0x0350(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	EEnemyFamily                                       LastCreatureFamily;                                       // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	class UEnemyID*                                    GruntID;                                                  // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnemyMinersManualData*                      TempEnemy;                                                // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TSoftObjectPtr<class UObject>>              TempSoftRefs;                                             // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass _MENU_MinersManual._MENU_MinersManual_C");
		return ptr;
	}


	void IsCreatureUnlocked(class UEnemyMinersManualData** enemy, bool* IsUnlocked);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void OpenPageInternal(EMinersManualSection* Section, TSoftObjectPtr<class UClass>* Page);
	void GetButtonInfoFromSoftPage(TSoftObjectPtr<class UClass>* Page, struct FMM_ButtonInfo* OutButton);
	struct FEventReply OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void SelectOverview();
	void LoadSinglePage(TSoftObjectPtr<class UClass>* PageRef);
	void SelectResourcesPage(int* Index);
	void SelectBiome(int* Index);
	void SelectCreature(int* Index);
	void SelectCombat(int* Index);
	void SelectBasics(int* Index);
	void SelectMissionType(int* Index);
	void OnLoaded_2761E01142014CAB4B0485B51F0A3566(class UObject** Loaded);
	void OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8(class UObject** Loaded);
	void OnLoaded_E250F66347FD856DD4BCA4BDAF081D51(class UObject** Loaded);
	void OnLoaded_2761E01142014CAB4B0485B52E4010C5(class UObject** Loaded);
	void OnLoaded_E250F66347FD856DD4BCA4BD7D04604B(class UObject** Loaded);
	void OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF(class UObject** Loaded);
	void OnLoaded_268D15ED4E2079C066017E9C56F864BC(class UObject** Loaded);
	void OnLoaded_268D15ED4E2079C066017E9CF15F73D6(class UObject** Loaded);
	void OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6(class UObject** Loaded);
	void OnLoaded_2761E01142014CAB4B0485B59B3DD428(class UObject** Loaded);
	void OnLoaded_268D15ED4E2079C066017E9CDF02186B(class UObject** Loaded);
	void OnLoaded_268D15ED4E2079C066017E9CF666E15C(class UObject** Loaded);
	void OnLoaded_268D15ED4E2079C066017E9C821EC396(class UObject** Loaded);
	void OnLoaded_268D15ED4E2079C066017E9C0BF30CCE(class UObject** Loaded);
	void SetLoreScreenContent(class ULoreScreen_Master_C** InWidget);
	void Construct();
	void PreConstruct(bool* IsDesignTime);
	void ButtonClicked(int* Index);
	void SelectSection(EMinersManualSection* Section, bool* SelectFirst);
	void SelectPageFromObject(class UObject** IdentifyingObject);
	void SelectSinglePage(EMinersManualSinglePage* Page);
	void StepBack();
	void OpenFromSavegameID(EMinersManualSection* Section, struct FGuid* ID);
	void ExecuteUbergraph__MENU_MinersManual(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
