#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDives_Start_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ITM_DeepDives_Start.ITM_DeepDives_Start_C
// 0x0048 (0x0278 - 0x0230)
class UITM_DeepDives_Start_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UITM_DeepDives_Launcher_C*                   Hard_Launcher;                                            // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UITM_DeepDives_Launcher_C*                   Normal_Launcher;                                          // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBasic_RadioButton_C*                        OptionPrivate;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBasic_RadioButton_C*                        OptionPublic;                                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBasic_RadioButton_C*                        OptionSolo;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBasic_PasswordField_C*                      PasswordField;                                            // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnJoinMission;                                            // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_DeepDives_Start.ITM_DeepDives_Start_C");
		return ptr;
	}


	void UpdateOptions();
	void OnFailure_00D4455F48B21EAE6492C6AB27B0D8F5();
	void OnSuccess_00D4455F48B21EAE6492C6AB27B0D8F5();
	void OnFailure_14795847495E51F942775B86C1C4BCCF();
	void OnSuccess_14795847495E51F942775B86C1C4BCCF();
	void BndEvt__OptionPublic_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool* IsChecked);
	void BndEvt__OptionPrivate_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool* IsChecked);
	void BndEvt__OptionSolo_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool* IsChecked);
	void Start_Mission(class UDeepDive** mission);
	void BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_5_OnStartMission__DelegateSignature(class UDeepDive** DeepDive);
	void BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_6_OnStartMission__DelegateSignature(class UDeepDive** DeepDive);
	void Open();
	void BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_3_OnJoinMission__DelegateSignature(bool* EliteDeepDive);
	void BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_4_OnJoinMission__DelegateSignature(bool* EliteDeepDive);
	void ExecuteUbergraph_ITM_DeepDives_Start(int* EntryPoint);
	void OnJoinMission__DelegateSignature(bool* EliteDeepDive);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
