#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MAG_RevolverDrumFP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MAG_RevolverDrumFP.MAG_RevolverDrumFP_C
// 0x0000 (0x036C - 0x036C)
class AMAG_RevolverDrumFP_C : public AMAG_BaseClass_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MAG_RevolverDrumFP.MAG_RevolverDrumFP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
