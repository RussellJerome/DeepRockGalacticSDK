#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_LockedTemplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.GetIsUnlocked
struct UMENU_LockedTemplate_C_GetIsUnlocked_Params
{
	bool                                               Locked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.GetIsLocked
struct UMENU_LockedTemplate_C_GetIsLocked_Params
{
	bool                                               Locked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.RequireOnePromotedCharacter
struct UMENU_LockedTemplate_C_RequireOnePromotedCharacter_Params
{
	bool                                               Locked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetLockIcon
struct UMENU_LockedTemplate_C_SetLockIcon_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetMessaqe
struct UMENU_LockedTemplate_C_SetMessaqe_Params
{
	struct FText*                                      InText;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetMenuLocked
struct UMENU_LockedTemplate_C_SetMenuLocked_Params
{
	bool*                                              IsLocked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.OnKeyUp
struct UMENU_LockedTemplate_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UMENU_LockedTemplate_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.Close
struct UMENU_LockedTemplate_C_Close_Params
{
};

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.Construct
struct UMENU_LockedTemplate_C_Construct_Params
{
};

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.PreConstruct
struct UMENU_LockedTemplate_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_LockedTemplate.MENU_LockedTemplate_C.ExecuteUbergraph_MENU_LockedTemplate
struct UMENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
