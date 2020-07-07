#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DownedState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DownedState.BP_DownedState_C
// 0x0058 (0x01D8 - 0x0180)
class UBP_DownedState_C : public UDownedStateComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class UObject>                      SeeYouInHell_Particles;                                   // 0x0188(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UObject>                      SeeYOuInHell_Charge_Particles;                            // 0x01B0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DownedState.BP_DownedState_C");
		return ptr;
	}


	void OnLoaded_4C0CAFB9405C60A5642DA2A8AFDA785B(class UObject** Loaded);
	void OnLoaded_5277138148709B6872AFA8AE00BD1B01(class UObject** Loaded);
	void OnLoaded_EE490F594C2547CD96CB63943EA06475(class UObject** Loaded);
	void OnLoaded_369215DE4E9E3D75961755AB344B6937(class UObject** Loaded);
	void Receive_TriggerDownedBomb();
	void All_ShowDownedBomb();
	void All_ShowBombIntro();
	void Server_SpawnDBField();
	void ExecuteUbergraph_BP_DownedState(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
