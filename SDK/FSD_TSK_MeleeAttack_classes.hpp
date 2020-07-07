#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_MeleeAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TSK_MeleeAttack.TSK_MeleeAttack_C
// 0x004C (0x00EC - 0x00A0)
class UTSK_MeleeAttack_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UEnemyMeleeAttack*>                   MeleeAttack;                                              // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UEnemyMeleeAttack*                           SelectedAttack;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00C0(0x0028) (Edit, BlueprintVisible)
	float                                              attackModifier;                                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TSK_MeleeAttack.TSK_MeleeAttack_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void OnMeleeAttack(struct FName* nameValue);
	void ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_TSK_MeleeAttack(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
