#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AFL_Gen_Burn_Small_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AFL_Gen_Burn_Small.AFL_Gen_Burn_Small_C
// 0x0000 (0x0030 - 0x0030)
class UAFL_Gen_Burn_Small_C : public UBurningAfflictionEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AFL_Gen_Burn_Small.AFL_Gen_Burn_Small_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
