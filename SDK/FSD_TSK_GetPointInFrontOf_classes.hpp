#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_GetPointInFrontOf_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TSK_GetPointInFrontOf.TSK_GetPointInFrontOf_C
// 0x0060 (0x0100 - 0x00A0)
class UTSK_GetPointInFrontOf_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Target;                                                   // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Destination;                                              // 0x00D0(0x0028) (Edit, BlueprintVisible)
	float                                              Range;                                                    // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Forward;                                                  // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TSK_GetPointInFrontOf.TSK_GetPointInFrontOf_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_TSK_GetPointInFrontOf(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
