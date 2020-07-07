#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_ITM_MissionStep_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct ULore_ITM_MissionStep_C_BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct ULore_ITM_MissionStep_C_BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.SetData
struct ULore_ITM_MissionStep_C_SetData_Params
{
	struct FMissionStepDescription*                    step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               StepNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepsInRow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.PreConstruct
struct ULore_ITM_MissionStep_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.ExecuteUbergraph_Lore_ITM_MissionStep
struct ULore_ITM_MissionStep_C_ExecuteUbergraph_Lore_ITM_MissionStep_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.OnUnhovered__DelegateSignature
struct ULore_ITM_MissionStep_C_OnUnhovered__DelegateSignature_Params
{
};

// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.OnHovered__DelegateSignature
struct ULore_ITM_MissionStep_C_OnHovered__DelegateSignature_Params
{
	struct FMissionStepDescription*                    step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepsInRow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
