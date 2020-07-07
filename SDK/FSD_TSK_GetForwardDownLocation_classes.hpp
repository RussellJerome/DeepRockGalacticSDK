#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_GetForwardDownLocation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C
// 0x0066 (0x0106 - 0x00A0)
class UTSK_GetForwardDownLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      LocationKey;                                              // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     targetloc;                                                // 0x00F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ToTarget;                                                 // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Continue;                                                 // 0x0105(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C");
		return ptr;
	}


	void GetEnd(struct FVector* PawnLocation, struct FVector* TargetLocation, struct FVector* PawnForward);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_TSK_GetForwardDownLocation(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
