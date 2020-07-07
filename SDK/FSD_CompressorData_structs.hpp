#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct CompressorData.CompressorData
// 0x0014
struct FCompressorData
{
	class USubmixEffectSubmixEQPreset*                 Submix_12_AC5923FE4AC29161307B5A8C1511F773;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetFrequency_5_3249A77C4899880D58AE5B8154791C58;       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetBandwith_8_FA12F77E4F70AB0324FC9FBDA4963911;        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetDuckingAmount_10_C8AAF79749C9171120EA35B61290090B;  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
