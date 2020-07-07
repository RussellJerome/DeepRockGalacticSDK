#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_FleeFrom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TSK_FleeFrom.TSK_FleeFrom_C
// 0x003C (0x00DC - 0x00A0)
class UTSK_FleeFrom_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      DangerKey;                                                // 0x00A8(0x0028) (Edit, BlueprintVisible)
	float                                              distance;                                                 // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaitAfterFleeing;                                         // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomWaitTime;                                           // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TSK_FleeFrom.TSK_FleeFrom_C");
		return ptr;
	}


	void SetFleeFalse(class AController** Controller);
	void OutsideDanger(class AActor** Pawn, bool* res);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void PathDone(bool* success);
	void RefreshDest();
	void ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_TSK_FleeFrom(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
