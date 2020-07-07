#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_WeaponInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_WeaponInfo.ITM_WeaponInfo_C.Construct
struct UITM_WeaponInfo_C_Construct_Params
{
};

// Function ITM_WeaponInfo.ITM_WeaponInfo_C.PreConstruct
struct UITM_WeaponInfo_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_WeaponInfo.ITM_WeaponInfo_C.Update
struct UITM_WeaponInfo_C_Update_Params
{
};

// Function ITM_WeaponInfo.ITM_WeaponInfo_C.ExecuteUbergraph_ITM_WeaponInfo
struct UITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
