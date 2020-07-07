#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SimulatePlayerCount_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Cheat_SimulatePlayerCount.Cheat_SimulatePlayerCount_C
// 0x0010 (0x0240 - 0x0230)
class UCheat_SimulatePlayerCount_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UComboBoxString*                             ComboBoxString_160;                                       // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Cheat_SimulatePlayerCount.Cheat_SimulatePlayerCount_C");
		return ptr;
	}


	void BndEvt__ComboBoxString_159_K2Node_ComponentBoundEvent_70_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType);
	void ExecuteUbergraph_Cheat_SimulatePlayerCount(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
