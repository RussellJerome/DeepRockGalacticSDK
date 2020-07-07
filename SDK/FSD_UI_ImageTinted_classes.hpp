#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_ImageTinted_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_ImageTinted.UI_ImageTinted_C
// 0x00A0 (0x02D0 - 0x0230)
class UUI_ImageTinted_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      ImageWidget;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                                 Brush;                                                    // 0x0240(0x0088) (Edit, BlueprintVisible)
	TEnumAsByte<ENUM_MenuColors>                       Tint;                                                     // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	float                                              Tint_Opacity;                                             // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ImageTinted.UI_ImageTinted_C");
		return ptr;
	}


	void SetBrushFromTexture(class UTexture2D** Texture, bool* MatchSize);
	void SetTint(TEnumAsByte<ENUM_MenuColors>* InTint, float* InOpacity);
	void SetBrush(struct FSlateBrush* InBrush);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_UI_ImageTinted(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
