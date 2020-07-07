#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Gear_Bar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetStageStatus
struct UITM_Gear_Bar_C_SetStageStatus_Params
{
	class UITM_DeepDive_StageIcon_C**                  Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Claimed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetDeepDiveProgress
struct UITM_Gear_Bar_C_SetDeepDiveProgress_Params
{
	class UDeepDive**                                  Deep_Dive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetActiveProgress
struct UITM_Gear_Bar_C_SetActiveProgress_Params
{
};

// Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetCustomProgress
struct UITM_Gear_Bar_C_SetCustomProgress_Params
{
	bool*                                              Stage1Complete;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Stage2Complete;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Stage3Complete;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Gear_Bar.ITM_Gear_Bar_C.PreConstruct
struct UITM_Gear_Bar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Gear_Bar.ITM_Gear_Bar_C.ExecuteUbergraph_ITM_Gear_Bar
struct UITM_Gear_Bar_C_ExecuteUbergraph_ITM_Gear_Bar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
