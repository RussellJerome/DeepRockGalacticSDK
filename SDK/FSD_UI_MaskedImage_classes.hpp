#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MaskedImage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_MaskedImage.UI_MaskedImage_C
// 0x0078 (0x02A8 - 0x0230)
class UUI_MaskedImage_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      MaskedImage;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTexture2D*                                  Image;                                                    // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ImageSize;                                                // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoSize;                                                 // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	struct FSlateColor                                 ImageTint;                                                // 0x0258(0x0028) (Edit, BlueprintVisible)
	class UTexture*                                    Mask;                                                     // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Invert_Mask;                                              // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                   // 0x0289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x028A(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Material;                                                 // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Mask_Black;                                               // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	class UObject*                                     BrushImage;                                               // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MaskedImage.UI_MaskedImage_C");
		return ptr;
	}


	void SetMaskBlack(bool* Index);
	void UpdateMaterial();
	void SetDrawAs(TEnumAsByte<ESlateBrushDrawType>* InBrush_DrawAs);
	void SetMaskInverted(bool* Invert);
	void SetMask(class UTexture** Value);
	void SetImageTint(struct FSlateColor* TintColor);
	void SetImageSize(struct FVector2D* DesiredSize);
	void SetImage(class UTexture2D** Value, bool* Match_Size);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_UI_MaskedImage(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
