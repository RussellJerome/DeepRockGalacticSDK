#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DEC_ShowOutline_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DEC_ShowOutline.DEC_ShowOutline_C
// 0x0010 (0x00B0 - 0x00A0)
class UDEC_ShowOutline_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOutlineComponent*                           Outline;                                                  // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DEC_ShowOutline.DEC_ShowOutline_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveExecutionStartAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveExecutionFinishAI(class AAIController** OwnerController, class APawn** ControlledPawn, TEnumAsByte<EBTNodeResult>* NodeResult);
	void ExecuteUbergraph_DEC_ShowOutline(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
