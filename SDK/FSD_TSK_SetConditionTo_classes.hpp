#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_SetConditionTo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TSK_SetConditionTo.TSK_SetConditionTo_C
// 0x0031 (0x00D1 - 0x00A0)
class UTSK_SetConditionTo_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Condition;                                                // 0x00A8(0x0028) (Edit, BlueprintVisible)
	bool                                               SetConditionTo;                                           // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TSK_SetConditionTo.TSK_SetConditionTo_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_TSK_SetConditionTo(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
