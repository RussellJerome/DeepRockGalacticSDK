#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_RecallableSentryGun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_RecallableSentryGun.WPN_RecallableSentryGun_C
// 0x0000 (0x0510 - 0x0510)
class AWPN_RecallableSentryGun_C : public ARecallableSentryGunItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_RecallableSentryGun.WPN_RecallableSentryGun_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
