#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OnScreenIndicator_UsableItem_Simple_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Construct
struct UOnScreenIndicator_UsableItem_Simple_C_Construct_Params
{
};

// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Tick
struct UOnScreenIndicator_UsableItem_Simple_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnItemEquipped
struct UOnScreenIndicator_UsableItem_Simple_C_OnItemEquipped_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnVisibilityChanged
struct UOnScreenIndicator_UsableItem_Simple_C_OnVisibilityChanged_Params
{
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.PreConstruct
struct UOnScreenIndicator_UsableItem_Simple_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple
struct UOnScreenIndicator_UsableItem_Simple_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
