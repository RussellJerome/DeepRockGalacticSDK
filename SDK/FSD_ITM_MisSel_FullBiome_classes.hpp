#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_FullBiome_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C
// 0x0020 (0x0250 - 0x0230)
class UITM_MisSel_FullBiome_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                                    Overlay_1;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBiome*                                      Biome;                                                    // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UITM_MisSel_BiomeBase_C*                     BiomeMapWidget;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C");
		return ptr;
	}


	void UpdateMapPan(struct FVector2D* InPosition);
	void GetRandomFreeMissionSlot(class UITM_MisSel_MissionMapIcon_C** Output);
	void ClearMissions();
	void GetAllAllMissionSlots(TArray<class UITM_MisSel_MissionMapIcon_C*>* Items1);
	void Construct();
	void SetData(TArray<class UGeneratedMission*>* missions, class UBiome** Biome);
	void BndEvt__Button_BG_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_MisSel_FullBiome(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
