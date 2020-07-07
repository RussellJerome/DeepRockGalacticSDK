#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_LoaderImages_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_LoaderImages.LIB_LoaderImages_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_LoaderImages_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_LoaderImages.LIB_LoaderImages_C");
		return ptr;
	}


	void STATIC_GetRandomSpacerigLoadImagePath(class UObject** __WorldContext, TSoftObjectPtr<class UTexture>* Output);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
