#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ParalyzedState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ParalyzedState.BP_ParalyzedState_C
// 0x0018 (0x0188 - 0x0170)
class UBP_ParalyzedState_C : public UParalyzedStateComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                                    StoredRotation;                                           // 0x0178(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Camera_Arm_Y_Rotation_;                                   // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParalyzedState.BP_ParalyzedState_C");
		return ptr;
	}


	void ReceiveStateEnter();
	void ReceiveStateExit();
	void ExecuteUbergraph_BP_ParalyzedState(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
