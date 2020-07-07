#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ModInfoParent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ModInfoParent.ModInfoParent_C
// 0x0038 (0x0060 - 0x0028)
class UModInfoParent_C : public UObject
{
public:
	class FString                                      ModName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      ModDescription;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      ModCreator;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      ModActor;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModInfoParent.ModInfoParent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
