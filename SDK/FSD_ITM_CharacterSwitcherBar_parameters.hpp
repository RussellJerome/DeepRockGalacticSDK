#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CharacterSwitcherBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.CheckArmorUnlocks
struct UITM_CharacterSwitcherBar_C_CheckArmorUnlocks_Params
{
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GotoNext
struct UITM_CharacterSwitcherBar_C_GotoNext_Params
{
	bool*                                              Next;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              PlaySound;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetSwitchButtonState
struct UITM_CharacterSwitcherBar_C_SetSwitchButtonState_Params
{
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetPrevCharacter
struct UITM_CharacterSwitcherBar_C_GetPrevCharacter_Params
{
	class UClass*                                      Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetNextCharacter
struct UITM_CharacterSwitcherBar_C_GetNextCharacter_Params
{
	class UClass*                                      Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetBPGameState
struct UITM_CharacterSwitcherBar_C_GetBPGameState_Params
{
	class ABP_GameState_C*                             GameState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetCharacterInfo
struct UITM_CharacterSwitcherBar_C_SetCharacterInfo_Params
{
	class UClass**                                     playerClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SelectPrev
struct UITM_CharacterSwitcherBar_C_SelectPrev_Params
{
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SelectNext
struct UITM_CharacterSwitcherBar_C_SelectNext_Params
{
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SwitchToCharacter
struct UITM_CharacterSwitcherBar_C_SwitchToCharacter_Params
{
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.Construct
struct UITM_CharacterSwitcherBar_C_Construct_Params
{
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.CharacterChanged
struct UITM_CharacterSwitcherBar_C_CharacterChanged_Params
{
	class UClass**                                     NewCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UITM_CharacterSwitcherBar_C_BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UITM_CharacterSwitcherBar_C_BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UITM_CharacterSwitcherBar_C_BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.UpdateNotification
struct UITM_CharacterSwitcherBar_C_UpdateNotification_Params
{
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetData
struct UITM_CharacterSwitcherBar_C_SetData_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.PreConstruct
struct UITM_CharacterSwitcherBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.ExecuteUbergraph_ITM_CharacterSwitcherBar
struct UITM_CharacterSwitcherBar_C_ExecuteUbergraph_ITM_CharacterSwitcherBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.OnCharacterChanged__DelegateSignature
struct UITM_CharacterSwitcherBar_C_OnCharacterChanged__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
