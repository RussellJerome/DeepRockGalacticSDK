#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_Elimination_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_Elimination_Base.OBJ_Elimination_Base_C
// 0x0010 (0x01F8 - 0x01E8)
class UOBJ_Elimination_Base_C : public UEliminationObjective
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UObjectInfoComponent*                        CachedInfo;                                               // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_Elimination_Base.OBJ_Elimination_Base_C");
		return ptr;
	}


	class UObjectInfoComponent* GetEnemyInfo();
	class UTexture2D* GetInMissionCounterIcon();
	struct FText GetInMissionCounterText();
	struct FObjectiveMissionIcon GetMissionIcon();
	class UTexture2D* GetObjectiveIcon();
	int GetObjectiveAmount(float* missionLength);
	struct FText GetInMissionText();
	struct FText GetObjectiveDescription(float* missionLength);
	void ReceiveTargetKilled(class UHealthComponentBase** Health);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_OBJ_Elimination_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
