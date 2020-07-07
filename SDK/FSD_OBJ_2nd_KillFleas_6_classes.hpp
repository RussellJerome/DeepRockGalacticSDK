#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_2nd_KillFleas_6_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C
// 0x0000 (0x01F0 - 0x01F0)
class UOBJ_2nd_KillFleas_5_C : public UKillEnemiesObjective
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C");
		return ptr;
	}


	class UTexture2D* GetInMissionCounterIcon();
	struct FText GetInMissionCounterText();
	struct FObjectiveMissionIcon GetMissionIcon();
	class UTexture2D* GetObjectiveIcon();
	int GetObjectiveAmount(float* missionLength);
	struct FText GetInMissionText();
	struct FText GetObjectiveDescription(float* missionLength);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
