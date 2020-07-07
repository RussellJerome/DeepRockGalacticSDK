#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SimulateLateJoin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Cheat_SimulateLateJoin.Cheat_SimulateLateJoin_C
// 0x0038 (0x0268 - 0x0230)
class UCheat_SimulateLateJoin_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button_1;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UClass>                       podClass;                                                 // 0x0240(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Cheat_SimulateLateJoin.Cheat_SimulateLateJoin_C");
		return ptr;
	}


	void OnLoaded_61EEE6104D62AB076A753A97DCFEB1FE(class UClass** Loaded);
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	void Spawn_pod_and_test(class APlayerCharacter** Character);
	void ExecuteUbergraph_Cheat_SimulateLateJoin(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
