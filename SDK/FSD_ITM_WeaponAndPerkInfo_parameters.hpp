#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_WeaponAndPerkInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.Update
struct UITM_WeaponAndPerkInfo_C_Update_Params
{
};

// Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.PlayEnter
struct UITM_WeaponAndPerkInfo_C_PlayEnter_Params
{
};

// Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.PlayLeave
struct UITM_WeaponAndPerkInfo_C_PlayLeave_Params
{
};

// Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.EnterFinished
struct UITM_WeaponAndPerkInfo_C_EnterFinished_Params
{
};

// Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.ExecuteUbergraph_ITM_WeaponAndPerkInfo
struct UITM_WeaponAndPerkInfo_C_ExecuteUbergraph_ITM_WeaponAndPerkInfo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
