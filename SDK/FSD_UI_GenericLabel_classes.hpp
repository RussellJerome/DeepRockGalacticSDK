#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_GenericLabel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_GenericLabel.UI_GenericLabel_C
// 0x00A1 (0x02D1 - 0x0230)
class UUI_GenericLabel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFSDLabelWidget*                             Label;                                                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       Text;                                                     // 0x0240(0x0028) (Edit, BlueprintVisible)
	bool                                               ToUpper;                                                  // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0260(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<ENUM_MenuColors>                       TextColor;                                                // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x02B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02B2(0x0002) MISSED OFFSET
	float                                              MinDesiredWidth;                                          // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     TextMargin;                                               // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoTextWrap;                                             // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ETextWrappingPolicy                                WrappingPolicy;                                           // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GenericLabel.UI_GenericLabel_C");
		return ptr;
	}


	void GetText(struct FText* Text);
	void SetWrappingPolicy(ETextWrappingPolicy* WrappingPolicy);
	void SetWrapTextAt(float* WrapTextAt);
	void SetAutoWrapText(bool* AutoTextWrap);
	void SetFontSize(int* inFontSize);
	void SetMinDesiredWidth(float* MinDesiredWidth);
	void SetJustification(TEnumAsByte<ETextJustify>* Justification);
	void SetTextColor(TEnumAsByte<ENUM_MenuColors>* TextColor);
	void SetText(struct FText* Text);
	void SetMargin(struct FMargin* New_Margin);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_UI_GenericLabel(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
