#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AIC_Flea_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AIC_Flea.AIC_Flea_C.ReceivePossess
struct AAIC_Flea_C_ReceivePossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIC_Flea.AIC_Flea_C.ExecuteUbergraph_AIC_Flea
struct AAIC_Flea_C_ExecuteUbergraph_AIC_Flea_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
