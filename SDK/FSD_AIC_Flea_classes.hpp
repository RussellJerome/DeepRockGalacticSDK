#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AIC_Flea_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIC_Flea.AIC_Flea_C
// 0x0010 (0x0468 - 0x0458)
class AAIC_Flea_C : public AEnemyAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBehaviorTree*                               BehaviourTree;                                            // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIC_Flea.AIC_Flea_C");
		return ptr;
	}


	void ReceivePossess(class APawn** PossessedPawn);
	void ExecuteUbergraph_AIC_Flea(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
