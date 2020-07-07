#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AFL_InsectSwarm_Frozen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AFL_InsectSwarm_Frozen.AFL_InsectSwarm_Frozen_C
// 0x0000 (0x0058 - 0x0058)
class UAFL_InsectSwarm_Frozen_C : public UFrozenAfflictionEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AFL_InsectSwarm_Frozen.AFL_InsectSwarm_Frozen_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
