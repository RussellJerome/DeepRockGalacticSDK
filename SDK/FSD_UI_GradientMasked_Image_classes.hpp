#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_GradientMasked_Image_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_GradientMasked_Image.UI_GradientMasked_Image_C
// 0x0018 (0x0268 - 0x0250)
class UUI_GradientMasked_Image_C : public UUI_GradientMasked_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      ImageMasked;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTexture2D*                                  Texture;                                                  // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GradientMasked_Image.UI_GradientMasked_Image_C");
		return ptr;
	}


	class UTexture2D* GetTextureOrDefault();
	void SetImage(class UTexture2D** InTexture);
	void OnMaterialRefreshed();
	void ExecuteUbergraph_UI_GradientMasked_Image(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
