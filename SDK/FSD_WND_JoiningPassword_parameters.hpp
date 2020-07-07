#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_JoiningPassword_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_JoiningPassword.WND_JoiningPassword_C.SetSession
struct UWND_JoiningPassword_C_SetSession_Params
{
	struct FBlueprintSessionResult*                    Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
struct UWND_JoiningPassword_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
struct UWND_JoiningPassword_C_BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WND_JoiningPassword.WND_JoiningPassword_C.PreConstruct
struct UWND_JoiningPassword_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_JoiningPassword.WND_JoiningPassword_C.ExecuteUbergraph_WND_JoiningPassword
struct UWND_JoiningPassword_C_ExecuteUbergraph_WND_JoiningPassword_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_JoiningPassword.WND_JoiningPassword_C.OnCancel__DelegateSignature
struct UWND_JoiningPassword_C_OnCancel__DelegateSignature_Params
{
};

// Function WND_JoiningPassword.WND_JoiningPassword_C.JoinWithPassword__DelegateSignature
struct UWND_JoiningPassword_C_JoinWithPassword__DelegateSignature_Params
{
	struct FBlueprintSessionResult*                    Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class FString*                                     Password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
