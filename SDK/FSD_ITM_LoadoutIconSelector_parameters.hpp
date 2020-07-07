#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_LoadoutIconSelector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.FillGrid
struct UITM_LoadoutIconSelector_C_FillGrid_Params
{
};

// Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.SetData
struct UITM_LoadoutIconSelector_C_SetData_Params
{
};

// Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconClicked
struct UITM_LoadoutIconSelector_C_OnIconClicked_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ImageIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.ExecuteUbergraph_ITM_LoadoutIconSelector
struct UITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconSelected__DelegateSignature
struct UITM_LoadoutIconSelector_C_OnIconSelected__DelegateSignature_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ImageIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
