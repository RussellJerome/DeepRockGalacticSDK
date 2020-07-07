#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Phys_Newsstand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Phys_Newsstand.BP_Phys_Newsstand_C
// 0x0008 (0x0378 - 0x0370)
class ABP_Phys_Newsstand_C : public ABP_Kickable_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Phys_Newsstand.BP_Phys_Newsstand_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Phys_Newsstand(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
