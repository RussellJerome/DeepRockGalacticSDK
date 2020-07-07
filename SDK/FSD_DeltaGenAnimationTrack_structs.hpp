#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic.hpp"
#include "FSD_DeltaGenAnimationTrackType_classes.hpp"
#include "FSD_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DeltaGenAnimationTrack.DeltaGenAnimationTrack
// 0x0031
struct FDeltaGenAnimationTrack
{
	TEnumAsByte<EDeltaGenAnimationTrackType>           Type_2_BCE5A39E43BEF444AB80E99B8AF1FCCC;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UCurveVector*                                Curve_6_5DCAD8034B260012E13103AB425C6DAA;                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Keys_10_A8B28B3746829091BCF2538A9FCAAD15;                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector4>                            Values_13_CD00D0384F2532B18A0CE887CB5316AD;               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Zeroed_15_3F93A2B14F577C2114390E892D44C6E7;               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
