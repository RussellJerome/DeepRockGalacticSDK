#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_ChargeBlaster_Heat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponDisplay_ChargeBlaster_Heat.WeaponDisplay_ChargeBlaster_Heat_C.SetHeatValue
struct UWeaponDisplay_ChargeBlaster_Heat_C_SetHeatValue_Params
{
	float*                                             HeatPercentage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Overheated;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_ChargeBlaster_Heat.WeaponDisplay_ChargeBlaster_Heat_C.Construct
struct UWeaponDisplay_ChargeBlaster_Heat_C_Construct_Params
{
};

// Function WeaponDisplay_ChargeBlaster_Heat.WeaponDisplay_ChargeBlaster_Heat_C.ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Heat
struct UWeaponDisplay_ChargeBlaster_Heat_C_ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Heat_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
