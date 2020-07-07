#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_FuelCell_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ABP_FuelCell.ABP_FuelCell_C.SetBuildProgress
struct UABP_FuelCell_C_SetBuildProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_FuelCell.ABP_FuelCell_C.SetDefendProgress
struct UABP_FuelCell_C_SetDefendProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_FuelCell.ABP_FuelCell_C.SetIsDrilling
struct UABP_FuelCell_C_SetIsDrilling_Params
{
	bool*                                              IsDrilling;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_FuelCell.ABP_FuelCell_C.ExecuteUbergraph_ABP_FuelCell
struct UABP_FuelCell_C_ExecuteUbergraph_ABP_FuelCell_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
