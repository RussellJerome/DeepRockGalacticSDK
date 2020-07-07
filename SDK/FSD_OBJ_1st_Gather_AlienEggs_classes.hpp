#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_1st_Gather_AlienEggs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C
// 0x0008 (0x01A8 - 0x01A0)
class UOBJ_1st_Gather_AlienEggs_C : public UOBJ_Gather_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C");
		return ptr;
	}


	struct FObjectiveMissionIcon GetMissionIcon();
	void GetNumberOfSpeicalEggs(TArray<class AActor*>* TargetArray, int* count);
	void TurnOnSpecialEggs();
	void Receive_StartTracking();
	void ExecuteUbergraph_OBJ_1st_Gather_AlienEggs(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
