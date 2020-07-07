#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerState_SpaceRig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C
// 0x003F (0x05B8 - 0x0579)
class ABP_PlayerState_SpaceRig_C : public ABP_PlayerState_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UItemUpgradePreviewComponent*                ItemUpgradePreview;                                       // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                HealthInsuranceStatus;                                    // 0x0590(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStatChange;                                             // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FMissionStatItem>                    MissionStats;                                             // 0x05A8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C");
		return ptr;
	}


	void GetMissionStatValue(class UMissionStat** MissionStat, struct FText* StatValue, bool* Valid);
	void SendMissionStatData(class UMissionStat** MissionStat, float* Value);
	void UpdateMissionStat(class UMissionStat** MissionStat, float* Value);
	void IsListeningToMissionStat(class UMissionStat** MissionStat, bool* HasStat);
	void OnRep_MissionStats();
	void GetHealthInsuranceStatus(int* HealthInsuranceStatus);
	void UserConstructionScript();
	void WatchStat(class UMissionStat** MissionStat);
	void ReceiveBeginPlay();
	void CheckCampaign();
	void OnMissionStatChanged(class UMissionStat** MissionStat, float* Value);
	void Server_UpdateStat(class UMissionStat** Mission_Stat, float* Stat_Value);
	void ExecuteUbergraph_BP_PlayerState_SpaceRig(int* EntryPoint);
	void OnStatChange__DelegateSignature(class UMissionStat** MissionStat, struct FText* StatValue);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
