#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_1st_Salvage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_1st_Salvage.OBJ_1st_Salvage_C
// 0x0008 (0x0268 - 0x0260)
class UOBJ_1st_Salvage_C : public USalvageObjective
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_1st_Salvage.OBJ_1st_Salvage_C");
		return ptr;
	}


	class UTexture2D* GetInMissionCounterIcon();
	struct FText GetInMissionCounterText();
	struct FObjectiveMissionIcon GetMissionIcon();
	int GetObjectiveAmount(float* missionLength);
	struct FText GetInMissionText();
	struct FText GetObjectiveDescription(float* missionLength);
	class UTexture2D* GetObjectiveIcon();
	void ReceiveBeginPlay();
	void AllActorsSalvaged();
	void ExecuteUbergraph_OBJ_1st_Salvage(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
