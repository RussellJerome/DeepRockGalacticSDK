#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TopBar_ResourceCounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.SetResourceData
struct UITM_TopBar_ResourceCounter_C_SetResourceData_Params
{
	class UResourceData**                              InResource;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InRequiredAmount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.PreConstruct
struct UITM_TopBar_ResourceCounter_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateAmount
struct UITM_TopBar_ResourceCounter_C_UpdateAmount_Params
{
	float*                                             InAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.Construct
struct UITM_TopBar_ResourceCounter_C_Construct_Params
{
};

// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.OnResourceAmountChanged_Event
struct UITM_TopBar_ResourceCounter_C_OnResourceAmountChanged_Event_Params
{
	class UResourceData**                              Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             currentAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateFromSave
struct UITM_TopBar_ResourceCounter_C_UpdateFromSave_Params
{
};

// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.ExecuteUbergraph_ITM_TopBar_ResourceCounter
struct UITM_TopBar_ResourceCounter_C_ExecuteUbergraph_ITM_TopBar_ResourceCounter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
