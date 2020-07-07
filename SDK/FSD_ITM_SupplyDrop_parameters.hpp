#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_SupplyDrop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveCycledItem
struct AITM_SupplyDrop_C_RecieveCycledItem_Params
{
};

// Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveEquipped
struct AITM_SupplyDrop_C_RecieveEquipped_Params
{
};

// Function ITM_SupplyDrop.ITM_SupplyDrop_C.ExecuteUbergraph_ITM_SupplyDrop
struct AITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
