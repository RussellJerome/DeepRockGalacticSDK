#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_BarGlass_Item_GlyphidSlammer_Support_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C
// 0x0000 (0x04C0 - 0x04C0)
class AITM_BarGlass_Item_GlyphidSlammer_Support_C : public AITM_BarGlass_Item_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C");
		return ptr;
	}


	float PlayDrink();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
