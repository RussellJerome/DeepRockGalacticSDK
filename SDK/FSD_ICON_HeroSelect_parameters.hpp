#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ICON_HeroSelect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ICON_HeroSelect.ICON_HeroSelect_C.IsInteractable
struct UICON_HeroSelect_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.GetSelectedClass
struct UICON_HeroSelect_C_GetSelectedClass_Params
{
	class UClass*                                      DesiredCharacterClass;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseButtonUp
struct UICON_HeroSelect_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.SetScale
struct UICON_HeroSelect_C_SetScale_Params
{
	float*                                             Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.UpdateSelected
struct UICON_HeroSelect_C_UpdateSelected_Params
{
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.IsSelected
struct UICON_HeroSelect_C_IsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.SetCharacterClass
struct UICON_HeroSelect_C_SetCharacterClass_Params
{
	class UClass**                                     Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseEnter
struct UICON_HeroSelect_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseLeave
struct UICON_HeroSelect_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.On Click
struct UICON_HeroSelect_C_On_Click_Params
{
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.SelectedCharacterChanged
struct UICON_HeroSelect_C_SelectedCharacterChanged_Params
{
	class UClass**                                     NewCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterStatsChanged_Event
struct UICON_HeroSelect_C_OnCharacterStatsChanged_Event_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.Init
struct UICON_HeroSelect_C_Init_Params
{
	class UClass**                                     CharacterClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.PreConstruct
struct UICON_HeroSelect_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature
struct UICON_HeroSelect_C_BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature_Params
{
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature
struct UICON_HeroSelect_C_BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature_Params
{
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature
struct UICON_HeroSelect_C_BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature_Params
{
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.Update Retirement Button
struct UICON_HeroSelect_C_Update_Retirement_Button_Params
{
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.Tick
struct UICON_HeroSelect_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.ExecuteUbergraph_ICON_HeroSelect
struct UICON_HeroSelect_C_ExecuteUbergraph_ICON_HeroSelect_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetireClicked__DelegateSignature
struct UICON_HeroSelect_C_OnRetireClicked__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementUnhovered__DelegateSignature
struct UICON_HeroSelect_C_OnRetirementUnhovered__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementHovered__DelegateSignature
struct UICON_HeroSelect_C_OnRetirementHovered__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.OnHovered__DelegateSignature
struct UICON_HeroSelect_C_OnHovered__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterSelected__DelegateSignature
struct UICON_HeroSelect_C_OnCharacterSelected__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
