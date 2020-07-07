#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MAG_Flamethrower_BottleTP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.Attached
struct AMAG_Flamethrower_BottleTP_C_Attached_Params
{
	class AActor**                                     Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.Released
struct AMAG_Flamethrower_BottleTP_C_Released_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.DoRelease
struct AMAG_Flamethrower_BottleTP_C_DoRelease_Params
{
};

// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.OnItemSkinned
struct AMAG_Flamethrower_BottleTP_C_OnItemSkinned_Params
{
	class USkinEffect**                                Skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.ExecuteUbergraph_MAG_Flamethrower_BottleTP
struct AMAG_Flamethrower_BottleTP_C_ExecuteUbergraph_MAG_Flamethrower_BottleTP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
