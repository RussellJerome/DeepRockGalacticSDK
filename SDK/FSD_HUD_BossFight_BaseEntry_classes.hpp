#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_BossFight_BaseEntry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C
// 0x0018 (0x0248 - 0x0230)
class UHUD_BossFight_BaseEntry_C : public UUserWidget
{
public:
	struct FBossFight                                  BossFight;                                                // 0x0230(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
