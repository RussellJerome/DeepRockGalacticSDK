#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PassedOut_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PassedOut.BP_PassedOut_C
// 0x0041 (0x0181 - 0x0140)
class UBP_PassedOut_C : public UPassedOutStateComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0140(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
	struct FTransform                                  Start_Transform;                                          // 0x0150(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               WakeInBed;                                                // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PassedOut.BP_PassedOut_C");
		return ptr;
	}


	void AllPassedOut(bool* AllPassedOut);
	void ReceiveBeginPlay();
	void BeginFadeToBlack();
	void ReceiveStateEnter();
	void ReceiveStateExit();
	void Turn_Off_Juke_Box();
	void Remove_Drinking_Mugs();
	void ReceiveTeamPassedOut();
	void ExecuteUbergraph_BP_PassedOut(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
