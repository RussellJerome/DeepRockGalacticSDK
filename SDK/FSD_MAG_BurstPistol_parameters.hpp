#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MAG_BurstPistol_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MAG_BurstPistol.MAG_BurstPistol_C.Attached
struct AMAG_BurstPistol_C_Attached_Params
{
	class AActor**                                     Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MAG_BurstPistol.MAG_BurstPistol_C.Released
struct AMAG_BurstPistol_C_Released_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MAG_BurstPistol.MAG_BurstPistol_C.DoRelease
struct AMAG_BurstPistol_C_DoRelease_Params
{
};

// Function MAG_BurstPistol.MAG_BurstPistol_C.ExecuteUbergraph_MAG_BurstPistol
struct AMAG_BurstPistol_C_ExecuteUbergraph_MAG_BurstPistol_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
