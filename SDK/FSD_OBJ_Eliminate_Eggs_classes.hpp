#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_Eliminate_Eggs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_Eliminate_Eggs.OBJ_Eliminate_Eggs_C
// 0x0000 (0x01F8 - 0x01F8)
class UOBJ_Eliminate_Eggs_C : public UOBJ_Elimination_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_Eliminate_Eggs.OBJ_Eliminate_Eggs_C");
		return ptr;
	}


	class UTexture2D* GetInMissionCounterIcon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
