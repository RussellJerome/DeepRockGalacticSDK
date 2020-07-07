#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_AdvancedLabel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_AdvancedLabel.UI_AdvancedLabel_C
// 0x00C8 (0x0330 - 0x0268)
class UUI_AdvancedLabel_C : public UFSDAdvancedLabel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                Lines;                                                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateFontInfo                              Font;                                                     // 0x0278(0x0050) (Edit, BlueprintVisible)
	class UHorizontalBox*                              CurrentLine;                                              // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                Icon_Size;                                                // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Text_Tint;                                                // 0x02D4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Key_Name_Tint;                                            // 0x02E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PC__Icon_Tint;                                            // 0x02F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Controller_Icon_Tint;                                     // 0x0304(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Icon_Size_ControllerOverride;                             // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Shadow_Color;                                             // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Shadow_Offset;                                            // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_AdvancedLabel.UI_AdvancedLabel_C");
		return ptr;
	}


	void SetPreviewAs(EInputSource* PreviewAs);
	void SetTints(struct FLinearColor* Text_Tint, struct FLinearColor* Key_Name_Tint, struct FLinearColor* PC__Icon_Tint, struct FLinearColor* Controller_Icon_Tint);
	void SetKeyNameTint(struct FLinearColor* Key_Name_Tint);
	void SetIconTint(struct FLinearColor* PC__Icon_Tint, struct FLinearColor* Controller_Icon_Tint);
	void SetTextTint(struct FLinearColor* Text_Tint);
	void OnNewLine(int* Index);
	void OnAddIcon(class FString* Name, struct FActionIconMapping* Icon);
	void OnAddKeyName(class FString* Name);
	void OnAddString(class FString* Value);
	void OnReset();
	void ExecuteUbergraph_UI_AdvancedLabel(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
