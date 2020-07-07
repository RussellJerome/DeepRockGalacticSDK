#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_IAlienEgg_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IAlienEgg.IAlienEgg_C
// 0x0000 (0x0028 - 0x0028)
class UIAlienEgg_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IAlienEgg.IAlienEgg_C");
		return ptr;
	}


	void SetSpecialEgg();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
