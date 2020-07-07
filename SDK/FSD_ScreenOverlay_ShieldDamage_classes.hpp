#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_ShieldDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C
// 0x0040 (0x0270 - 0x0230)
class UScreenOverlay_ShieldDamage_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      SplatImage;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              Duration;                                                 // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time;                                                     // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                StartColor;                                               // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class APlayerCharacter*                            Player;                                                   // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C");
		return ptr;
	}


	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void OnArmorDamaged(float* amount);
	void Begin_Splat(float* Duration, struct FLinearColor* Color);
	void Construct();
	void OnCharacterStateChanged(ECharacterState* NewState);
	void End_Splat();
	void OnCameraModeChanged(ECharacterCameraMode* NewCameraMode, ECharacterCameraMode* OldCameraMode);
	void ExecuteUbergraph_ScreenOverlay_ShieldDamage(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
