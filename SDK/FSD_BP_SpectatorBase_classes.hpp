#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpectatorBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpectatorBase.BP_SpectatorBase_C
// 0x0018 (0x03D0 - 0x03B8)
class ABP_SpectatorBase_C : public ASpectatorPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Menu_Music;                                               // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Menu_StaticRadio;                                         // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpectatorBase.BP_SpectatorBase_C");
		return ptr;
	}


	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpectatorBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
