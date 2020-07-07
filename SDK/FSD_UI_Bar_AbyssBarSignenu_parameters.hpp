#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_AbyssBarSignenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.PreConstruct
struct UUI_Bar_AbyssBarSignenu_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.ExecuteUbergraph_UI_Bar_AbyssBarSignenu
struct UUI_Bar_AbyssBarSignenu_C_ExecuteUbergraph_UI_Bar_AbyssBarSignenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.OnRoundSelected__DelegateSignature
struct UUI_Bar_AbyssBarSignenu_C_OnRoundSelected__DelegateSignature_Params
{
	class ASpaceRigBar**                               Bar;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDrinkableDataAsset**                        RequestedDrink;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
