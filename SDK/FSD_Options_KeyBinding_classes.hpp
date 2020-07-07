#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_KeyBinding_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Options_KeyBinding.Options_KeyBinding_C
// 0x0051 (0x0281 - 0x0230)
class UOptions_KeyBinding_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Error;                                                    // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBasic_Option_C*                             Basic_Option;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  ErrorLabel;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_KeyCapture_C*                            UI_KeyCapture_Primary;                                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_KeyCapture_C*                            UI_KeyCapture_Secondary;                                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       Description;                                              // 0x0260(0x0028) (Edit, BlueprintVisible)
	struct FName                                       ActionName;                                               // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EKeyBindingAxis                                    ActionAxis;                                               // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_KeyBinding.Options_KeyBinding_C");
		return ptr;
	}


	void PreConstruct(bool* IsDesignTime);
	void BndEvt__UI_KeyCapture_K2Node_ComponentBoundEvent_0_OnKeyCaptureFinished__DelegateSignature();
	void BndEvt__UI_KeyCapture_K2Node_ComponentBoundEvent_0_OnKeyCaptureError__DelegateSignature();
	void BndEvt__UI_KeyCapture_K2Node_ComponentBoundEvent_1_OnKeyCaptureChanged__DelegateSignature();
	void BndEvt__UI_KeyCapture_K2Node_ComponentBoundEvent_2_OnKeyCaptureCancelled__DelegateSignature();
	void BndEvt__UI_KeyCapture_Secondary_K2Node_ComponentBoundEvent_0_OnKeyCaptureFinished__DelegateSignature();
	void BndEvt__UI_KeyCapture_Secondary_K2Node_ComponentBoundEvent_8_OnKeyCaptureError__DelegateSignature();
	void BndEvt__UI_KeyCapture_Secondary_K2Node_ComponentBoundEvent_27_OnKeyCaptureChanged__DelegateSignature();
	void BndEvt__UI_KeyCapture_Secondary_K2Node_ComponentBoundEvent_38_OnKeyCaptureCancelled__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_Options_KeyBinding(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
