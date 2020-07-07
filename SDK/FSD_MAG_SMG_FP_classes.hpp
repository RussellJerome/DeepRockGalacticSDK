#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MAG_SMG_FP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MAG_SMG_FP.MAG_SMG_FP_C
// 0x0000 (0x036C - 0x036C)
class AMAG_SMG_FP_C : public AMAG_BaseClass_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MAG_SMG_FP.MAG_SMG_FP_C");
		return ptr;
	}


	bool Attached(class AActor** Parent);
	bool Released();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
