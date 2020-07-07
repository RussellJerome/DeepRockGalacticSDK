#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_DD_AlienEggs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C
// 0x0008 (0x01A8 - 0x01A0)
class UOBJ_DD_AlienEggs_C : public UOBJ_Gather_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C");
		return ptr;
	}


	struct FObjectiveMissionIcon GetMissionIcon();
	void GetNumberOfSpeicalEggs(TArray<class ABP_AlienEgg_C*>* TargetArray, int* count);
	void TurnOnSpecialEggs();
	void Receive_StartTracking();
	void ExecuteUbergraph_OBJ_DD_AlienEggs(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
