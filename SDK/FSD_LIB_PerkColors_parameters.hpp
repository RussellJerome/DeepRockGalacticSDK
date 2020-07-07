#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_PerkColors_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LIB_PerkColors.LIB_PerkColors_C.PerkColorFromType
struct ULIB_PerkColors_C_PerkColorFromType_Params
{
	EPerkUsageType*                                    InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_PerkColors.LIB_PerkColors_C.PerkColorByState
struct ULIB_PerkColors_C_PerkColorByState_Params
{
	EPerkUsageType*                                    InPerkType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPerkTierState*                                    InPerkState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutBackground;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutBorder;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutIcon;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
