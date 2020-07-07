#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_CharSelect_HeroSelect_Clean_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnKeyUp
struct UCharSelect_HeroSelect_Clean_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnKeyDown
struct UCharSelect_HeroSelect_Clean_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.SetSelectedIndex
struct UCharSelect_HeroSelect_Clean_C_SetSelectedIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.GetSelectedIndex
struct UCharSelect_HeroSelect_Clean_C_GetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.HandleKeyEvent
struct UCharSelect_HeroSelect_Clean_C_HandleKeyEvent_Params
{
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              IsDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Select
struct UCharSelect_HeroSelect_Clean_C_Select_Params
{
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Prev
struct UCharSelect_HeroSelect_Clean_C_Prev_Params
{
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Next
struct UCharSelect_HeroSelect_Clean_C_Next_Params
{
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterSelected_Event
struct UCharSelect_HeroSelect_Clean_C_OnCharacterSelected_Event_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Update
struct UCharSelect_HeroSelect_Clean_C_Update_Params
{
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.BndEvt__BTN_Select_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UCharSelect_HeroSelect_Clean_C_BndEvt__BTN_Select_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnHovered_Event_1
struct UCharSelect_HeroSelect_Clean_C_OnHovered_Event_1_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnSelect
struct UCharSelect_HeroSelect_Clean_C_OnSelect_Params
{
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetirementHovered
struct UCharSelect_HeroSelect_Clean_C_RetirementHovered_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetirementUnHovered
struct UCharSelect_HeroSelect_Clean_C_RetirementUnHovered_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetireCharacter
struct UCharSelect_HeroSelect_Clean_C_RetireCharacter_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.ExecuteUbergraph_CharSelect_HeroSelect_Clean
struct UCharSelect_HeroSelect_Clean_C_ExecuteUbergraph_CharSelect_HeroSelect_Clean_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetireCharacter__DelegateSignature
struct UCharSelect_HeroSelect_Clean_C_OnRetireCharacter__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetirementUnhovered__DelegateSignature
struct UCharSelect_HeroSelect_Clean_C_OnRetirementUnhovered__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetirementHovered__DelegateSignature
struct UCharSelect_HeroSelect_Clean_C_OnRetirementHovered__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterHovered__DelegateSignature
struct UCharSelect_HeroSelect_Clean_C_OnCharacterHovered__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterSelected__DelegateSignature
struct UCharSelect_HeroSelect_Clean_C_OnCharacterSelected__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
