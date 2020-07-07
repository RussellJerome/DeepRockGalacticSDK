#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ActivatablePerks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_ActivatablePerks.HUD_ActivatablePerks_C
// 0x0011 (0x0261 - 0x0250)
class UHUD_ActivatablePerks_C : public UFSDUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              WidgetBox;                                                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	EPerkHUDActivationLocation                         Location;                                                 // 0x0260(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_ActivatablePerks.HUD_ActivatablePerks_C");
		return ptr;
	}


	void SetPerks(TArray<class UPerkAsset*>* Array);
	void Construct();
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_HUD_ActivatablePerks(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
