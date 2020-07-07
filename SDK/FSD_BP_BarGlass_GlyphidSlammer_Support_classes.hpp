#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BarGlass_GlyphidSlammer_Support_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BarGlass_GlyphidSlammer_Support.BP_BarGlass_GlyphidSlammer_Support_C
// 0x0000 (0x0388 - 0x0388)
class ABP_BarGlass_GlyphidSlammer_Support_C : public ABP_BarGlass_Standard_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BarGlass_GlyphidSlammer_Support.BP_BarGlass_GlyphidSlammer_Support_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
