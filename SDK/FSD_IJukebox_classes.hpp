#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_IJukebox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IJukebox.IJukebox_C
// 0x0000 (0x0028 - 0x0028)
class UIJukebox_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IJukebox.IJukebox_C");
		return ptr;
	}


	void StopJukebox();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
