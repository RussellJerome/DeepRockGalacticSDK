#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_BeerBuff_SpaceRig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.Construct
struct UUI_BeerBuff_Spacerig_C_Construct_Params
{
};

// Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.PreConstruct
struct UUI_BeerBuff_Spacerig_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.On Buff Changed
struct UUI_BeerBuff_Spacerig_C_On_Buff_Changed_Params
{
	class UTemporaryBuff**                             buff;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.ExecuteUbergraph_UI_BeerBuff_Spacerig
struct UUI_BeerBuff_Spacerig_C_ExecuteUbergraph_UI_BeerBuff_Spacerig_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
