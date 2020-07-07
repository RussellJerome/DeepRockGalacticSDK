#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_IOnDamagedPlayer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IOnDamagedPlayer.IOnDamagedPlayer_C
// 0x0000 (0x0028 - 0x0028)
class UIOnDamagedPlayer_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IOnDamagedPlayer.IOnDamagedPlayer_C");
		return ptr;
	}


	void OnDamagedPlayer(class APlayerCharacter** Player, float* amount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
