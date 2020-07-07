#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_GameState_SpaceRig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameState_SpaceRig.BP_GameState_SpaceRig_C
// 0x00B8 (0x0848 - 0x0790)
class ABP_GameState_SpaceRig_C : public ABP_GameState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnMisionSelected;                                         // 0x0798(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              MissionCountdown;                                         // 0x07A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MissionCountdownActive;                                   // 0x07AC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07AD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMissionCountdownChanged;                                // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               HostReady;                                                // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HostCountdownActive;                                      // 0x07C1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x07C2(0x0002) MISSED OFFSET
	float                                              HostCountdown;                                            // 0x07C4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnHostCountdownChanged;                                   // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCountdownCompleted;                                     // 0x07D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHostTimerChanged;                                       // 0x07E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMissionTimerChanged;                                    // 0x07F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               AllReady;                                                 // 0x0808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0809(0x0007) MISSED OFFSET
	TArray<struct FBlueprintSessionResult>             ServerList;                                               // 0x0810(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnServerListChanged;                                      // 0x0820(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               SearchingInProgress;                                      // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceQuickJoinSearch;                                     // 0x0831(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0832(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCountdownChanged;                                       // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameState_SpaceRig.BP_GameState_SpaceRig_C");
		return ptr;
	}


	bool AreDeepDiveRequirementsMet();
	void HandleActiveCountdown();
	void OnRep_HostCountdown();
	void OnRep_HostCountdownActive();
	void OnRep_MissionTimerActive();
	void OnRep_MissionCountdown();
	void OnRefresh_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult>* Results);
	void OnFailure_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult>* Results);
	void OnSuccess_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult>* Results);
	void ReceiveTick(float* DeltaSeconds);
	void StartMissionTimer();
	void StopMissionTimer();
	void StartHostTimer();
	void StopHostTimer();
	void CountDownCompleted();
	void ReceiveBeginPlay();
	void Search();
	void ReceiveGeneratedMissionReplicated();
	void ManualRefreshServerList();
	void Shout_Cooldown_Started();
	void ExecuteUbergraph_BP_GameState_SpaceRig(int* EntryPoint);
	void OnCountdownChanged__DelegateSignature(bool* active);
	void OnServerListChanged__DelegateSignature();
	void OnMissionTimerChanged__DelegateSignature(float* newTime);
	void OnHostTimerChanged__DelegateSignature(float* newTime);
	void OnCountdownCompleted__DelegateSignature();
	void OnHostCountdownChanged__DelegateSignature(bool* IsActive);
	void OnMissionCountdownChanged__DelegateSignature(bool* IsActive);
	void OnMisionSelected__DelegateSignature(class UGeneratedMission** mission);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
