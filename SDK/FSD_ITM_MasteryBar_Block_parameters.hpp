#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MasteryBar_Block_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.SetUnlocked
struct UITM_MasteryBar_Block_C_SetUnlocked_Params
{
	bool*                                              IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.PreConstruct
struct UITM_MasteryBar_Block_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ReceiveUnlocked
struct UITM_MasteryBar_Block_C_ReceiveUnlocked_Params
{
};

// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ExecuteUbergraph_ITM_MasteryBar_Block
struct UITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
