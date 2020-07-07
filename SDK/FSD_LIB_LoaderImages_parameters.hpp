#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_LoaderImages_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LIB_LoaderImages.LIB_LoaderImages_C.GetRandomSpacerigLoadImagePath
struct ULIB_LoaderImages_C_GetRandomSpacerigLoadImagePath_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UTexture>                     Output;                                                   // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
