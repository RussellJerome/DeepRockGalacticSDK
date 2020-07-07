#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LureTarget_HealthReadout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LureTarget_HealthReadout.LureTarget_HealthReadout_C.SetText
struct ULureTarget_HealthReadout_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LureTarget_HealthReadout.LureTarget_HealthReadout_C.PreConstruct
struct ULureTarget_HealthReadout_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LureTarget_HealthReadout.LureTarget_HealthReadout_C.ExecuteUbergraph_LureTarget_HealthReadout
struct ULureTarget_HealthReadout_C_ExecuteUbergraph_LureTarget_HealthReadout_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
