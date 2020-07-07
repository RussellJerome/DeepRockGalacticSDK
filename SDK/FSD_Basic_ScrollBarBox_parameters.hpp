#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ScrollBarBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.PreConstruct
struct UBasic_ScrollBarBox_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.ScrollToChild
struct UBasic_ScrollBarBox_C_ScrollToChild_Params
{
	class UWidget**                                    WidgetToFind;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              AnimateScroll;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDescendantScrollDestination*                      ScrollDestination;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.ExecuteUbergraph_Basic_ScrollBarBox
struct UBasic_ScrollBarBox_C_ExecuteUbergraph_Basic_ScrollBarBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
