#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic.hpp"
#include "FSD_DeltaGenAnimationTrack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DeltaGenTimelineAnimation.DeltaGenTimelineAnimation
// 0x0018
struct FDeltaGenTimelineAnimation
{
	struct FName                                       TargetNode_7_9A43B89D4194CE33552481A515F81F34;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FDeltaGenAnimationTrack>             Tracks_6_00AA258140D1E35DF1130C8811CB9502;                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
