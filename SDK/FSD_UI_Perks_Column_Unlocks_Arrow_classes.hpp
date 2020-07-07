#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perks_Column_Unlocks_Arrow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C
// 0x0011 (0x0241 - 0x0230)
class UUI_Perks_Column_Unlocks_Arrow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Arrow01;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               IsUnlocked;                                               // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C");
		return ptr;
	}


	void PreConstruct(bool* IsDesignTime);
	void SetIsUnlocked(bool* IsUnlocked);
	void ExecuteUbergraph_UI_Perks_Column_Unlocks_Arrow(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
