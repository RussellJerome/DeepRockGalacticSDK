#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_FindItems_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_FindItems_Base.OBJ_FindItems_Base_C
// 0x0000 (0x01A0 - 0x01A0)
class UOBJ_FindItems_Base_C : public UGatheItemsObjective
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_FindItems_Base.OBJ_FindItems_Base_C");
		return ptr;
	}


	bool IsObjectiveResource(class UResourceData** InResource);
	class UTexture2D* GetInMissionCounterIcon();
	struct FText GetInMissionCounterText();
	class UTexture2D* GetObjectiveIcon();
	int GetObjectiveAmount(float* missionLength);
	struct FText GetInMissionText();
	struct FText GetObjectiveDescription(float* missionLength);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
