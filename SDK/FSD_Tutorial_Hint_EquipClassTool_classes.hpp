#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_EquipClassTool_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_EquipClassTool.Tutorial_Hint_EquipClassTool_C
// 0x0000 (0x01CA - 0x01CA)
class UTutorial_Hint_EquipClassTool_C : public UTutorial_Hint_EquipItem_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_EquipClassTool.Tutorial_Hint_EquipClassTool_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
