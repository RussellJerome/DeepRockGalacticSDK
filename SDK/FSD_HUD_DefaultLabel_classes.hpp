#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_DefaultLabel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_DefaultLabel.HUD_DefaultLabel_C
// 0x0055 (0x0285 - 0x0230)
class UHUD_DefaultLabel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Label;                                                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       Text;                                                     // 0x0240(0x0028) (Edit, BlueprintVisible)
	int                                                Font_Size;                                                // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_AcuminCondensedTypeface>          Typeface;                                                 // 0x025C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x025D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x025E(0x0002) MISSED OFFSET
	struct FFontOutlineSettings                        Outline_Settings;                                         // 0x0260(0x0020) (Edit, BlueprintVisible)
	float                                              Min_Desired_Width;                                        // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_MenuColors>                       TextColor;                                                // 0x0284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_DefaultLabel.HUD_DefaultLabel_C");
		return ptr;
	}


	void SetTextColor(TEnumAsByte<ENUM_MenuColors>* ColorSelector);
	void SetOutlineSettings(struct FFontOutlineSettings* InFontInfo_OutlineSettings);
	void SetJustification(TEnumAsByte<ETextJustify>* InJustification);
	void SetTypeFace(TEnumAsByte<ENUM_AcuminCondensedTypeface>* Typeface);
	void SetFontSize(int* inFontSize);
	void SetText(struct FText* NewText);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_HUD_DefaultLabel(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
