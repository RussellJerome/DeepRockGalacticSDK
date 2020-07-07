#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_ResourceCounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetIconSize
struct UITM_UpgGear_ResourceCounter_C_SetIconSize_Params
{
	int*                                               InSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetCanAfford
struct UITM_UpgGear_ResourceCounter_C_SetCanAfford_Params
{
	bool*                                              IsAffordable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetResourceData
struct UITM_UpgGear_ResourceCounter_C_SetResourceData_Params
{
	class UResourceData**                              InResource;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InRequiredAmount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InShowRequiredAmount;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.PreConstruct
struct UITM_UpgGear_ResourceCounter_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.UpdateAmount
struct UITM_UpgGear_ResourceCounter_C_UpdateAmount_Params
{
	float*                                             InAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.ExecuteUbergraph_ITM_UpgGear_ResourceCounter
struct UITM_UpgGear_ResourceCounter_C_ExecuteUbergraph_ITM_UpgGear_ResourceCounter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
