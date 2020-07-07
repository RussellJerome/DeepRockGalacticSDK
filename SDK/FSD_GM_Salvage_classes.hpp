#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_GM_Salvage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GM_Salvage.GM_Salvage_C
// 0x0078 (0x0650 - 0x05D8)
class AGM_Salvage_C : public ABP_NetworkPlayGameMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             UplinkComplete_Cue;                                       // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             DroppodMuleReady_Cue;                                     // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AMiningPod*                                  DropPod;                                                  // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AEVENT_DropPodDefense_Base_C*                DefenseEvent;                                             // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              MulesSalvaged;                                            // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_Salvage_Point_C*>                 RepairPoints;                                             // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UOBJ_1st_Salvage_C*                          Objective;                                                // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              SalvagePoints;                                            // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              RepairEvents;                                             // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MollyFailsafeCounter;                                     // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MollyCloseCounter;                                        // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GM_Salvage.GM_Salvage_C");
		return ptr;
	}


	void UpdateFailsafeMollyCounters(struct FVector* v2);
	void SpawnRepairPoints();
	void EnableNextRepairPoint();
	void AllMulesSalvaged(TArray<class AActor*>* Mules);
	void OnLevelGenerationComplete(int* pass);
	void Call_DropPod();
	void DonkeyButtonPressed();
	void ReachedDropShip();
	void RepairPoint_Repaired(class AActor** RepairPoint);
	void DefendFail();
	void DefendDone();
	void SetObjective(class UOBJ_1st_Salvage_C** Objective);
	void OnCountdownFinished();
	void Countdowncomplete();
	void ActivateDonkeyButton();
	void ExecuteUbergraph_GM_Salvage(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
