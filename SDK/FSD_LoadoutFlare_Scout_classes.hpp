#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LoadoutFlare_Scout_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LoadoutFlare_Scout.LoadoutFlare_Scout_C
// 0x0008 (0x0440 - 0x0438)
class ALoadoutFlare_Scout_C : public ALoadoutItemProxy
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LoadoutFlare_Scout.LoadoutFlare_Scout_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
