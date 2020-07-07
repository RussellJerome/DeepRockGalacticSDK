#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perks_Column_Unlocks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C
// 0x0028 (0x0258 - 0x0230)
class UUI_Perks_Column_Unlocks_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                ArrowBox;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                ArrowCount;                                               // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UnlockedCount;                                            // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UUI_Perks_Column_Unlocks_Arrow_C*>    ArrowWidgets;                                             // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C");
		return ptr;
	}


	void IsUnlocked(bool* Unlocked);
	void PreConstruct(bool* IsDesignTime);
	void Set_Arrow_Count(int* ArrowCount, int* UnlockedCount);
	void Set_Unlocked_Count(int* UnlockedCount);
	void ExecuteUbergraph_UI_Perks_Column_Unlocks(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
