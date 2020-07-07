#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MatrixCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MatrixCore.ITM_MatrixCore_C.GetMatrixCoreToolTip
struct UITM_MatrixCore_C_GetMatrixCoreToolTip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ITM_MatrixCore.ITM_MatrixCore_C.FromReward
struct UITM_MatrixCore_C_FromReward_Params
{
	class USchematic**                                 InReward;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESchematicType*                                    InRewardType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MatrixCore.ITM_MatrixCore_C.FromDeepDiveStage
struct UITM_MatrixCore_C_FromDeepDiveStage_Params
{
	int*                                               StageIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MatrixCore.ITM_MatrixCore_C.SetIconSize
struct UITM_MatrixCore_C_SetIconSize_Params
{
	float*                                             IconSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MatrixCore.ITM_MatrixCore_C.PreConstruct
struct UITM_MatrixCore_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MatrixCore.ITM_MatrixCore_C.ExecuteUbergraph_ITM_MatrixCore
struct UITM_MatrixCore_C_ExecuteUbergraph_ITM_MatrixCore_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
