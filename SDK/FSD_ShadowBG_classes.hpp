#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ShadowBG_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ShadowBG.ShadowBG_C
// 0x0024 (0x0254 - 0x0230)
class UShadowBG_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_63;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                Color;                                                    // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeSharpness;                                            // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShadowBG.ShadowBG_C");
		return ptr;
	}


	void SetEdgeSharpness(float* EdgeSharpness1);
	void SetColor(struct FLinearColor* Color);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_ShadowBG(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
