#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_Menu_ColorBar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Basic_Menu_ColorBar.Basic_Menu_ColorBar_C
// 0x0028 (0x0258 - 0x0230)
class UBasic_Menu_ColorBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     ColorBar;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    ColorBar_Sizer;                                           // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<ENUM_PixelWidths>                      Colorbar_Thickness;                                       // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_MenuColors>                       Colorbar_Tint;                                            // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x024A(0x0002) MISSED OFFSET
	float                                              Colorbar_Opacity;                                         // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_Menu_ColorBar.Basic_Menu_ColorBar_C");
		return ptr;
	}


	void SetOpacity(float* Opacity);
	void SetThickness(TEnumAsByte<ENUM_PixelWidths>* Index);
	void SetColor(TEnumAsByte<ENUM_MenuColors>* Brush_Color);
	void PreConstruct(bool* IsDesignTime);
	void SetData(TEnumAsByte<ENUM_PixelWidths>* Colorbar_Thickness, TEnumAsByte<ENUM_MenuColors>* Colorbar_Tint, float* Colorbar_Opacity, class UMaterialInterface** Material);
	void ExecuteUbergraph_Basic_Menu_ColorBar(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
