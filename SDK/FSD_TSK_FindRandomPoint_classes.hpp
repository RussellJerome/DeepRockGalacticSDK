#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_FindRandomPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TSK_FindRandomPoint.TSK_FindRandomPoint_C
// 0x0044 (0x00E4 - 0x00A0)
class UTSK_FindRandomPoint_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      LocationKey;                                              // 0x00A8(0x0028) (Edit, BlueprintVisible)
	float                                              distance;                                                 // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapToCeiling;                                            // 0x00D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FindAtDistance;                                           // 0x00D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00D6(0x0002) MISSED OFFSET
	struct FVector                                     Destination;                                              // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TSK_FindRandomPoint.TSK_FindRandomPoint_C");
		return ptr;
	}


	void snap(bool* SnapToCeiling, class UDeepPathfinderMovement** Pathfinder, struct FVector* Location);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_TSK_FindRandomPoint(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
