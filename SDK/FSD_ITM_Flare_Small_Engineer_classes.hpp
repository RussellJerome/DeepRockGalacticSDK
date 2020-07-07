#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Flare_Small_Engineer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_Flare_Small_Engineer.ITM_Flare_Small_Engineer_C
// 0x0000 (0x0414 - 0x0414)
class AITM_Flare_Small_Engineer_C : public AITM_Flare_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ITM_Flare_Small_Engineer.ITM_Flare_Small_Engineer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
