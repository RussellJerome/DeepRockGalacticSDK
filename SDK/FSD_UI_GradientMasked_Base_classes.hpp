#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_GradientMasked_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_GradientMasked_Base.UI_GradientMasked_Base_C
// 0x0020 (0x0250 - 0x0230)
class UUI_GradientMasked_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<ENUM_MaskedGradientTypes>              GradientType;                                             // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Material;                                                 // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          MaterialTemplate;                                         // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GradientMasked_Base.UI_GradientMasked_Base_C");
		return ptr;
	}


	void GetDynamicMaterial(class UMaterialInstanceDynamic** Material);
	void Refresh();
	void GetMaterialTemplate(TEnumAsByte<ENUM_MaskedGradientTypes>* GradientType, class UMaterialInterface** OutTemplate);
	void PreConstruct(bool* IsDesignTime);
	void OnMaterialRefreshed();
	void ExecuteUbergraph_UI_GradientMasked_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
