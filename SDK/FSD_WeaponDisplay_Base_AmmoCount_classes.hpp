#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_Base_AmmoCount_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C
// 0x0020 (0x0250 - 0x0230)
class UWeaponDisplay_Base_AmmoCount_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UItemAggregator*                             Aggregator;                                               // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AItem*                                       Item;                                                     // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWidgetComponent*                            WidgComp;                                                 // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C");
		return ptr;
	}


	void SetMaxAmmo(int* Value);
	void RequestRedraw();
	void SetTotalCount(int* Value);
	void SetClipCount(int* Value);
	void OnTotalAmountChanged(int* amount);
	void OnClipEmountChanged(int* amount);
	void OnCarriedAmountChanged(int* amount);
	void OnTotalAmountChange(int* amount);
	void Initialize(class AItem** OwningItem, class UWidgetComponent** WidgetComp);
	void OnReloadStarted();
	void OnReloadComplete();
	void Max_Ammo_Changed(int* amount);
	void Total_Ammo_left_changed(int* amount);
	void Reload_Time_Tick(float* amount);
	void ExecuteUbergraph_WeaponDisplay_Base_AmmoCount(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
