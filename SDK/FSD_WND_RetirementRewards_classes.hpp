#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_RetirementRewards_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WND_RetirementRewards.WND_RetirementRewards_C
// 0x0000 (0x02E0 - 0x02E0)
class UWND_RetirementRewards_C : public UWND_ClaimableRewards_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_RetirementRewards.WND_RetirementRewards_C");
		return ptr;
	}


	void GetData(struct FClaimableRewardView* OutData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
