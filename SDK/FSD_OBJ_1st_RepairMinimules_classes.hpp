#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_1st_RepairMinimules_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_1st_RepairMinimules.OBJ_1st_RepairMinimules_C
// 0x0000 (0x01F0 - 0x01F0)
class UOBJ_1st_RepairMinimules_C : public URepairObjective
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_1st_RepairMinimules.OBJ_1st_RepairMinimules_C");
		return ptr;
	}


	class UTexture2D* GetInMissionCounterIcon();
	struct FText GetInMissionCounterText();
	struct FObjectiveMissionIcon GetMissionIcon();
	int GetObjectiveAmount(float* missionLength);
	struct FText GetInMissionText();
	struct FText GetObjectiveDescription(float* missionLength);
	class UTexture2D* GetObjectiveIcon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
