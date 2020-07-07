#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_AutoReloadPerkActivation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C
// 0x0020 (0x0050 - 0x0030)
class UBP_AutoReloadPerkActivation_C : public UFloatPerkActivation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInventoryComponent*                         Inventory;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class APlayerCharacter*                            Character;                                                // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C");
		return ptr;
	}


	void Receive_ActivatePerk(class APlayerCharacter** Character, float* Value);
	void OnItemEquipped_Event_1(class AItem** Item);
	void ExecuteUbergraph_BP_AutoReloadPerkActivation(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
