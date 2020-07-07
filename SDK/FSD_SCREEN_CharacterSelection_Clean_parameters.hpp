#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_SCREEN_CharacterSelection_Clean_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyDown
struct USCREEN_CharacterSelection_Clean_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyUp
struct USCREEN_CharacterSelection_Clean_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnCloseMenuReleased
struct USCREEN_CharacterSelection_Clean_C_OnCloseMenuReleased_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.GetSelectedClass
struct USCREEN_CharacterSelection_Clean_C_GetSelectedClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE
struct USCREEN_CharacterSelection_Clean_C_OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE_Params
{
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE
struct USCREEN_CharacterSelection_Clean_C_OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE_Params
{
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnCharacterSelected__DelegateSignature
struct USCREEN_CharacterSelection_Clean_C_BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnCharacterSelected__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnCharacterHovered__DelegateSignature
struct USCREEN_CharacterSelection_Clean_C_BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnCharacterHovered__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnInputSourceChanged
struct USCREEN_CharacterSelection_Clean_C_OnInputSourceChanged_Params
{
	EInputSource*                                      InputSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSelectedCharacterChanged_Event
struct USCREEN_CharacterSelection_Clean_C_OnSelectedCharacterChanged_Event_Params
{
	class UClass**                                     NewCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.PreConstruct
struct USCREEN_CharacterSelection_Clean_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.UpdateCharacterDescription
struct USCREEN_CharacterSelection_Clean_C_UpdateCharacterDescription_Params
{
	class UClass**                                     CharacterClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveNewVisibility
struct USCREEN_CharacterSelection_Clean_C_ReceiveNewVisibility_Params
{
	ESlateVisibility*                                  NewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnShown
struct USCREEN_CharacterSelection_Clean_C_OnShown_Params
{
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Show
struct USCREEN_CharacterSelection_Clean_C_Show_Params
{
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnClosed
struct USCREEN_CharacterSelection_Clean_C_OnClosed_Params
{
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BackPressed
struct USCREEN_CharacterSelection_Clean_C_BackPressed_Params
{
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CreateMovie
struct USCREEN_CharacterSelection_Clean_C_CreateMovie_Params
{
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Construct
struct USCREEN_CharacterSelection_Clean_C_Construct_Params
{
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.StopMovie
struct USCREEN_CharacterSelection_Clean_C_StopMovie_Params
{
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct USCREEN_CharacterSelection_Clean_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveCloseCommand
struct USCREEN_CharacterSelection_Clean_C_ReceiveCloseCommand_Params
{
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnNewLoadout
struct USCREEN_CharacterSelection_Clean_C_OnNewLoadout_Params
{
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ExecuteUbergraph_SCREEN_CharacterSelection_Clean
struct USCREEN_CharacterSelection_Clean_C_ExecuteUbergraph_SCREEN_CharacterSelection_Clean_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Back__DelegateSignature
struct USCREEN_CharacterSelection_Clean_C_Back__DelegateSignature_Params
{
};

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CharacterSelected__DelegateSignature
struct USCREEN_CharacterSelection_Clean_C_CharacterSelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
