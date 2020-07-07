#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AIC_MiniMule_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIC_MiniMule.AIC_MiniMule_C
// 0x0008 (0x0460 - 0x0458)
class AAIC_MiniMule_C : public AFSDAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIC_MiniMule.AIC_MiniMule_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void CustomEvent_1();
	void ExecuteUbergraph_AIC_MiniMule(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
