#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_FindRandomPointFrom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C
// 0x0060 (0x0100 - 0x00A0)
class UTSK_FindRandomPointFrom_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              distance;                                                 // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapToCeiling;                                            // 0x00AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FindAtDistance;                                           // 0x00AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET
	struct FBlackboardKeySelector                      FromLocationKey;                                          // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      NewLocationKey;                                           // 0x00D8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C");
		return ptr;
	}


	struct FVector GetLocation();
	void snap(bool* SnapToCeiling, class UDeepPathfinderMovement** Pathfinder, struct FVector* Location);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_TSK_FindRandomPointFrom(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
