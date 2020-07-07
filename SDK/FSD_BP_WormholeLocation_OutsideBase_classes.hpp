#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_WormholeLocation_OutsideBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C
// 0x0008 (0x0348 - 0x0340)
class ABP_WormholeLocation_OutsideBase_C : public ABP_WormholeLocation_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C");
		return ptr;
	}


	void OnPlayerEnterLocation(class APlayerCharacter** Character);
	void OnPlayerLeaveLocation(class APlayerCharacter** Character);
	void ExecuteUbergraph_BP_WormholeLocation_OutsideBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
