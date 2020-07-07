#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EWC_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EWC_Base.EWC_Base_C
// 0x001C (0x004C - 0x0030)
class UEWC_Base_C : public UEnemyWaveController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class USoundCue*>                           Music;                                                    // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MusicHandle;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EWC_Base.EWC_Base_C");
		return ptr;
	}


	void PlayWaveMusic();
	void PlayEndWaveMusic();
	void StopWaveMusic();
	void ExecuteUbergraph_EWC_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
