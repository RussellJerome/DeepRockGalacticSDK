#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TeamDisplay_Bosco_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.SetVisibilityIfVisibleMode
struct UHUD_TeamDisplay_Bosco_C_SetVisibilityIfVisibleMode_Params
{
	ESlateVisibility*                                  InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateReviveCharges
struct UHUD_TeamDisplay_Bosco_C_UpdateReviveCharges_Params
{
	int*                                               CurrentCharges;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxCharges;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.PreConstruct
struct UHUD_TeamDisplay_Bosco_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Construct
struct UHUD_TeamDisplay_Bosco_C_Construct_Params
{
};

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnBoscoChanged
struct UHUD_TeamDisplay_Bosco_C_OnBoscoChanged_Params
{
	class ABosco**                                     Bosco;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnStateChanged
struct UHUD_TeamDisplay_Bosco_C_OnStateChanged_Params
{
	EDroneAIState*                                     aCurrentState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Update State Icon
struct UHUD_TeamDisplay_Bosco_C_Update_State_Icon_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               InColorAndOpacity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnReviveused
struct UHUD_TeamDisplay_Bosco_C_OnReviveused_Params
{
	int*                                               ReviveCount;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateHUDVisibility
struct UHUD_TeamDisplay_Bosco_C_UpdateHUDVisibility_Params
{
};

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnLaserPointerPressed
struct UHUD_TeamDisplay_Bosco_C_OnLaserPointerPressed_Params
{
};

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnLaserPointerReleased
struct UHUD_TeamDisplay_Bosco_C_OnLaserPointerReleased_Params
{
};

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature
struct UHUD_TeamDisplay_Bosco_C_BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature_Params
{
	class UHUDVisibilityGroup**                        Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EHUDVisibilityMode*                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.ExecuteUbergraph_HUD_TeamDisplay_Bosco
struct UHUD_TeamDisplay_Bosco_C_ExecuteUbergraph_HUD_TeamDisplay_Bosco_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
