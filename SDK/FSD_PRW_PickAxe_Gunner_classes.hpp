#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRW_PickAxe_Gunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PRW_PickAxe_Gunner.PRW_PickAxe_Gunner_C
// 0x0000 (0x03A0 - 0x03A0)
class APRW_PickAxe_Gunner_C : public APRW_PickAxe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PRW_PickAxe_Gunner.PRW_PickAxe_Gunner_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
