#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_EnemyTargeting_AfflictionBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C
// 0x0090 (0x02C0 - 0x0230)
class UHUD_EnemyTargeting_AfflictionBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              AfflictionBox;                                            // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              Size;                                                     // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	class UPawnAfflictionComponent*                    AfflictionComponent;                                      // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TMap<class UPawnAffliction*, class UHUD_EnemyTargeting_Affliction_C*> AfflictionWidgets;                                        // 0x0250(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UPawnAffliction*>                     PreviewAfflictions;                                       // 0x02A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UPawnAffliction*>                     IgnoreAfflictions;                                        // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C");
		return ptr;
	}


	void SetAfflictionComponent(class UPawnAfflictionComponent** InAfflictionComponent);
	void ToggleIgnoreAfflictions(bool* ShouldIgnore, TArray<class UPawnAffliction*>* affliction);
	void ToggleIgnoreAffliction(class UPawnAffliction** affliction, bool* ShouldIgnore);
	void ClearAfflictions();
	void ToggleAffliction(class UPawnAffliction** InAffliction, bool* inVisible);
	void SetTarget(class AActor** InAfflictionTarget);
	void OnAfflictionActivatedEvent_Event(class UPawnAffliction** affliction);
	void OnAfflictionDeactivatedEvent_Event(class UPawnAffliction** affliction);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
