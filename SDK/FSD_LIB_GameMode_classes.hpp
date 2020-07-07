#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_GameMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_GameMode.LIB_GameMode_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_GameMode_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_GameMode.LIB_GameMode_C");
		return ptr;
	}


	void STATIC_GetBPGameMode(class UObject** __WorldContext, class ABP_GameMode_C** GameMode);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
