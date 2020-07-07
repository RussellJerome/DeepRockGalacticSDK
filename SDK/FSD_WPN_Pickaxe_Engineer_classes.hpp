#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Pickaxe_Engineer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_Pickaxe_Engineer.WPN_Pickaxe_Engineer_C
// 0x0000 (0x07A4 - 0x07A4)
class AWPN_Pickaxe_Engineer_C : public AWPN_Pickaxe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_Pickaxe_Engineer.WPN_Pickaxe_Engineer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
