#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_ShieldRegeneratorItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C
// 0x0018 (0x0568 - 0x0550)
class AWPN_ShieldRegeneratorItem_C : public AArmorRegeneratorItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             RechargeAudio;                                            // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          RechargedMaterial;                                        // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C");
		return ptr;
	}


	void UpdateMaterial();
	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void RecieveStartUsing();
	void ReceiveItemThrown(class AThrowableActor** thrownActor);
	void ReceiveGeneratorRecharged();
	void ReceiveGeneratorRechargeProgress(float* Progress);
	void BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int* amount);
	void BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature(int* amount);
	void ReceiveGeneratorReturned();
	void ExecuteUbergraph_WPN_ShieldRegeneratorItem(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
