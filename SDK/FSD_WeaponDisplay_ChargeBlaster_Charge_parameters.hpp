#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_ChargeBlaster_Charge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.Construct
struct UWeaponDisplay_ChargeBlaster_Charge_C_Construct_Params
{
};

// Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.SetChargeValue
struct UWeaponDisplay_ChargeBlaster_Charge_C_SetChargeValue_Params
{
	float*                                             ChargeValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Overheated;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ready;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FullCharge;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.PreConstruct
struct UWeaponDisplay_ChargeBlaster_Charge_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge
struct UWeaponDisplay_ChargeBlaster_Charge_C_ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
