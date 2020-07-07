#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_NetInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_NetInfo.UI_NetInfo_C
// 0x0061 (0x0291 - 0x0230)
class UUI_NetInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  TextBlock_FPS;                                            // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateFontInfo                              Font;                                                     // 0x0240(0x0050) (Edit, BlueprintVisible)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_NetInfo.UI_NetInfo_C");
		return ptr;
	}


	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void OnShowNetInfoChanged(bool* NewValue);
	void SlowTick();
	void ExecuteUbergraph_UI_NetInfo(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
