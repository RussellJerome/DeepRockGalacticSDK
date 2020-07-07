#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Chat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Chat.HUD_Chat_C.IsStringNotEmpty
struct UHUD_Chat_C_IsStringNotEmpty_Params
{
	class FString*                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsEmpty;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Chat.HUD_Chat_C.GetSenderType
struct UHUD_Chat_C_GetSenderType_Params
{
	EChatSenderType                                    SenderType;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Chat.HUD_Chat_C.OpenChat
struct UHUD_Chat_C_OpenChat_Params
{
};

// Function HUD_Chat.HUD_Chat_C.BeginChat
struct UHUD_Chat_C_BeginChat_Params
{
};

// Function HUD_Chat.HUD_Chat_C.OnOpenChat
struct UHUD_Chat_C_OnOpenChat_Params
{
};

// Function HUD_Chat.HUD_Chat_C.Update Chat Background
struct UHUD_Chat_C_Update_Chat_Background_Params
{
};

// Function HUD_Chat.HUD_Chat_C.Add Chat Message
struct UHUD_Chat_C_Add_Chat_Message_Params
{
	struct FFSDChatMessage*                            Msg;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HUD_Chat.HUD_Chat_C.OnMessageHidden_Event
struct UHUD_Chat_C_OnMessageHidden_Event_Params
{
};

// Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UHUD_Chat_C_BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Chat.HUD_Chat_C.NewMesssage
struct UHUD_Chat_C_NewMesssage_Params
{
	struct FFSDChatMessage*                            Message;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HUD_Chat.HUD_Chat_C.PreConstruct
struct UHUD_Chat_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Chat.HUD_Chat_C.CloseChat
struct UHUD_Chat_C_CloseChat_Params
{
};

// Function HUD_Chat.HUD_Chat_C.OnBackgroundFadeFinished
struct UHUD_Chat_C_OnBackgroundFadeFinished_Params
{
};

// Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
struct UHUD_Chat_C_BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
struct UHUD_Chat_C_BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HUD_Chat.HUD_Chat_C.SendChatMessage
struct UHUD_Chat_C_SendChatMessage_Params
{
	struct FText*                                      InText;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Chat.HUD_Chat_C.Construct
struct UHUD_Chat_C_Construct_Params
{
};

// Function HUD_Chat.HUD_Chat_C.ExecuteUbergraph_HUD_Chat
struct UHUD_Chat_C_ExecuteUbergraph_HUD_Chat_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
