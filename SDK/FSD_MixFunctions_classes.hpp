#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MixFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MixFunctions.MixFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UMixFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MixFunctions.MixFunctions_C");
		return ptr;
	}


	void STATIC_PushMixAtDistanceForDuration(class USoundMix** InSoundMixModifier, class AActor** Target, float* MinDistance, float* MaxDistance, float* Duration, class UObject** __WorldContext);
	void STATIC_PopMix(class USoundMix** InSoundMixModifier, class UObject** __WorldContext);
	void STATIC_PopMixAtDistance(class USoundMix** InSoundMixModifier, class AActor** Target, float* MinDistance, float* MaxDistance, class UObject** __WorldContext);
	void STATIC_PushMixAtDistance(class USoundMix** InSoundMixModifier, class AActor** Target, float* MinDistance, float* MaxDistance, class UObject** __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
