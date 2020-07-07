#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_CoreInfuser_Reward_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.ToggleActivateAudio
struct UUI_CoreInfuser_Reward_Icon_C_ToggleActivateAudio_Params
{
	bool*                                              AudioActive;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.GetReward
struct UUI_CoreInfuser_Reward_Icon_C_GetReward_Params
{
	class USchematic*                                  SchematicReward;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetSchematicReward
struct UUI_CoreInfuser_Reward_Icon_C_SetSchematicReward_Params
{
	class USchematic**                                 InSchematic;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.GetIsRewardSelected
struct UUI_CoreInfuser_Reward_Icon_C_GetIsRewardSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.TrySelectReward
struct UUI_CoreInfuser_Reward_Icon_C_TrySelectReward_Params
{
	bool                                               Reward_Given;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.GetUseProgress
struct UUI_CoreInfuser_Reward_Icon_C_GetUseProgress_Params
{
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetUseProgress
struct UUI_CoreInfuser_Reward_Icon_C_SetUseProgress_Params
{
	float*                                             InProgress;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Finished;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.IsInteractable
struct UUI_CoreInfuser_Reward_Icon_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetFaded
struct UUI_CoreInfuser_Reward_Icon_C_SetFaded_Params
{
	bool*                                              InFade;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetHover
struct UUI_CoreInfuser_Reward_Icon_C_SetHover_Params
{
	bool*                                              InHovering;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UUI_CoreInfuser_Reward_Icon_C_BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UUI_CoreInfuser_Reward_Icon_C_BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
struct UUI_CoreInfuser_Reward_Icon_C_BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnProgressTick
struct UUI_CoreInfuser_Reward_Icon_C_OnProgressTick_Params
{
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.Construct
struct UUI_CoreInfuser_Reward_Icon_C_Construct_Params
{
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UUI_CoreInfuser_Reward_Icon_C_BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetDispenser
struct UUI_CoreInfuser_Reward_Icon_C_SetDispenser_Params
{
	class AEventRewardDispenser**                      InDispenser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.ExecuteUbergraph_UI_CoreInfuser_Reward_Icon
struct UUI_CoreInfuser_Reward_Icon_C_ExecuteUbergraph_UI_CoreInfuser_Reward_Icon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnRewardSelected__DelegateSignature
struct UUI_CoreInfuser_Reward_Icon_C_OnRewardSelected__DelegateSignature_Params
{
	class UUI_CoreInfuser_Reward_Icon_C**              IconWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnUnhovered__DelegateSignature
struct UUI_CoreInfuser_Reward_Icon_C_OnUnhovered__DelegateSignature_Params
{
	class UUI_CoreInfuser_Reward_Icon_C**              IconWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnHovered__DelegateSignature
struct UUI_CoreInfuser_Reward_Icon_C_OnHovered__DelegateSignature_Params
{
	class UUI_CoreInfuser_Reward_Icon_C**              IconWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
