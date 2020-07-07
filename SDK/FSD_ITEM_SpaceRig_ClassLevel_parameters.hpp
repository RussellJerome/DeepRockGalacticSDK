#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITEM_SpaceRig_ClassLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.Construct
struct UITEM_SpaceRig_ClassLevel_C_Construct_Params
{
};

// Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.PreConstruct
struct UITEM_SpaceRig_ClassLevel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.SetLevel
struct UITEM_SpaceRig_ClassLevel_C_SetLevel_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.ExecuteUbergraph_ITEM_SpaceRig_ClassLevel
struct UITEM_SpaceRig_ClassLevel_C_ExecuteUbergraph_ITEM_SpaceRig_ClassLevel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
