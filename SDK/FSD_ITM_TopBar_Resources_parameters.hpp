#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TopBar_Resources_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.AddResource
struct UITM_TopBar_Resources_C_AddResource_Params
{
	class UResourceData**                              InResource;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InHideWhenZero;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.SetResources
struct UITM_TopBar_Resources_C_SetResources_Params
{
	TArray<class UResourceData*>                       InResources;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.PreConstruct
struct UITM_TopBar_Resources_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.Construct
struct UITM_TopBar_Resources_C_Construct_Params
{
};

// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.OnResourceAmountChanged
struct UITM_TopBar_Resources_C_OnResourceAmountChanged_Params
{
	class UResourceData**                              Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             currentAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.ExecuteUbergraph_ITM_TopBar_Resources
struct UITM_TopBar_Resources_C_ExecuteUbergraph_ITM_TopBar_Resources_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
