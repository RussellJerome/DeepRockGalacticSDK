#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Bar_Glass_Physics_GlyphidSlammer_Support_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bar_Glass_Physics_GlyphidSlammer_Support.Bar_Glass_Physics_GlyphidSlammer_Support_C
// 0x0000 (0x0390 - 0x0390)
class ABar_Glass_Physics_GlyphidSlammer_Support_C : public ABar_Glass_Physics_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bar_Glass_Physics_GlyphidSlammer_Support.Bar_Glass_Physics_GlyphidSlammer_Support_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
