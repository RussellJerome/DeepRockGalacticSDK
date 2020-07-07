#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_BarGlass_Item_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_BarGlass_Item.ITM_BarGlass_Item_C
// 0x0050 (0x04C0 - 0x0470)
class AITM_BarGlass_Item_C : public ADrinkableItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    TPParticleSystem;                                         // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SparkleDrink;                                             // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsFull;                                                   // 0x0490(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	class UClass*                                      PhysicsActor;                                             // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TPMontage;                                                // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FPMontage;                                                // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Visible;                                                  // 0x04B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04B1(0x0007) MISSED OFFSET
	class ABar_Glass_Physics_C*                        ThrownGlass;                                              // 0x04B8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ITM_BarGlass_Item.ITM_BarGlass_Item_C");
		return ptr;
	}


	void OnRep_ThrownGlass();
	void OnRep_Visible();
	void OnRep_IsFull();
	bool CheckCanSalute();
	void IsDrinking(bool* IsDrinking);
	float PlayThrow();
	float PlayDrink();
	void UserConstructionScript();
	void RecieveStartUsing();
	void Server_Use();
	void All_Drink();
	void All_Throw();
	void DropItem();
	void SetEmpty();
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent** Component, bool* bReset);
	void ReceiveBeginPlay();
	void SkinThrownGlass();
	void ExecuteUbergraph_ITM_BarGlass_Item(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
