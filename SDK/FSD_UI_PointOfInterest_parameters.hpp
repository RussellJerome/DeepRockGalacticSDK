#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_PointOfInterest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_PointOfInterest.UI_PointOfInterest_C.Init
struct UUI_PointOfInterest_C_Init_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PointOfInterest.UI_PointOfInterest_C.Construct
struct UUI_PointOfInterest_C_Construct_Params
{
};

// Function UI_PointOfInterest.UI_PointOfInterest_C.OnIntroFinished
struct UUI_PointOfInterest_C_OnIntroFinished_Params
{
};

// Function UI_PointOfInterest.UI_PointOfInterest_C.OnOutroFinished
struct UUI_PointOfInterest_C_OnOutroFinished_Params
{
};

// Function UI_PointOfInterest.UI_PointOfInterest_C.ExecuteUbergraph_UI_PointOfInterest
struct UUI_PointOfInterest_C_ExecuteUbergraph_UI_PointOfInterest_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PointOfInterest.UI_PointOfInterest_C.Finished__DelegateSignature
struct UUI_PointOfInterest_C_Finished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
