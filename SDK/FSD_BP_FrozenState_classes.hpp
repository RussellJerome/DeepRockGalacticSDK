#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_FrozenState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FrozenState.BP_FrozenState_C
// 0x0008 (0x0168 - 0x0160)
class UBP_FrozenState_C : public UFrozenStateComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0160(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrozenState.BP_FrozenState_C");
		return ptr;
	}


	void ReceiveStateEnter();
	void ReceiveStateExit();
	void ReceiveOnDefrosting();
	void ExecuteUbergraph_BP_FrozenState(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
