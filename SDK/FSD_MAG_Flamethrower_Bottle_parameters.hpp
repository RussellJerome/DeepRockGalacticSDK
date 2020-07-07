#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MAG_Flamethrower_Bottle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MAG_Flamethrower_Bottle.MAG_Flamethrower_Bottle_C.Attached
struct AMAG_Flamethrower_Bottle_C_Attached_Params
{
	class AActor**                                     Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MAG_Flamethrower_Bottle.MAG_Flamethrower_Bottle_C.Released
struct AMAG_Flamethrower_Bottle_C_Released_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MAG_Flamethrower_Bottle.MAG_Flamethrower_Bottle_C.DoRelease
struct AMAG_Flamethrower_Bottle_C_DoRelease_Params
{
};

// Function MAG_Flamethrower_Bottle.MAG_Flamethrower_Bottle_C.OnItemSkinned
struct AMAG_Flamethrower_Bottle_C_OnItemSkinned_Params
{
	class USkinEffect**                                Skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MAG_Flamethrower_Bottle.MAG_Flamethrower_Bottle_C.ExecuteUbergraph_MAG_Flamethrower_Bottle
struct AMAG_Flamethrower_Bottle_C_ExecuteUbergraph_MAG_Flamethrower_Bottle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
