#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpacerigSpectator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpacerigSpectator.BP_SpacerigSpectator_C
// 0x0008 (0x03C0 - 0x03B8)
class ABP_SpacerigSpectator_C : public ASpectatorPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpacerigSpectator.BP_SpacerigSpectator_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpacerigSpectator(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
