#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_RumbleFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_RumbleFunctions.LIB_RumbleFunctions_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_RumbleFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_RumbleFunctions.LIB_RumbleFunctions_C");
		return ptr;
	}


	void STATIC_FSD_Rumble_At_Actor(class AActor** Actor, class UForceFeedbackEffect** ForceFeedbackEffect, bool* bLooping, float* IntensityMultiplier, float* StartTime, bool* bAutoDestroy, class UObject** __WorldContext);
	void STATIC_FSD_Rumble_At_Location(class UObject** WorldContextObject, class UForceFeedbackEffect** ForceFeedbackEffect, struct FVector* Location, struct FRotator* Rotation, bool* bLooping, float* IntensityMultiplier, float* StartTime, bool* bAutoDestroy, class UObject** __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
