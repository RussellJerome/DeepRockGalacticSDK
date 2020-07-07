// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Chat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Chat.HUD_Chat_C.IsStringNotEmpty
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString*                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsEmpty                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_Chat_C::IsStringNotEmpty(class FString* String, bool* IsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.IsStringNotEmpty");

	UHUD_Chat_C_IsStringNotEmpty_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEmpty != nullptr)
		*IsEmpty = params.IsEmpty;
}


// Function HUD_Chat.HUD_Chat_C.GetSenderType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EChatSenderType                SenderType                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_Chat_C::GetSenderType(EChatSenderType* SenderType)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.GetSenderType");

	UHUD_Chat_C_GetSenderType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SenderType != nullptr)
		*SenderType = params.SenderType;
}


// Function HUD_Chat.HUD_Chat_C.OpenChat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::OpenChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.OpenChat");

	UHUD_Chat_C_OpenChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.BeginChat
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::BeginChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.BeginChat");

	UHUD_Chat_C_BeginChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.OnOpenChat
// (BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::OnOpenChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.OnOpenChat");

	UHUD_Chat_C_OnOpenChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.Update Chat Background
// (BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::Update_Chat_Background()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.Update Chat Background");

	UHUD_Chat_C_Update_Chat_Background_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.Add Chat Message
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFSDChatMessage*        Msg                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_Chat_C::Add_Chat_Message(struct FFSDChatMessage* Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.Add Chat Message");

	UHUD_Chat_C_Add_Chat_Message_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.OnMessageHidden_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::OnMessageHidden_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.OnMessageHidden_Event");

	UHUD_Chat_C_OnMessageHidden_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Chat_C::BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UHUD_Chat_C_BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.NewMesssage
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFSDChatMessage*        Message                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUD_Chat_C::NewMesssage(struct FFSDChatMessage* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.NewMesssage");

	UHUD_Chat_C_NewMesssage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Chat_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.PreConstruct");

	UHUD_Chat_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.CloseChat
// (BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::CloseChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.CloseChat");

	UHUD_Chat_C_CloseChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.OnBackgroundFadeFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_Chat_C::OnBackgroundFadeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.OnBackgroundFadeFinished");

	UHUD_Chat_C_OnBackgroundFadeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Chat_C::BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature");

	UHUD_Chat_C_BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUD_Chat_C::BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	UHUD_Chat_C_BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.SendChatMessage
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Chat_C::SendChatMessage(struct FText* InText, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.SendChatMessage");

	UHUD_Chat_C_SendChatMessage_Params params;
	params.InText = InText;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Chat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.Construct");

	UHUD_Chat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat.HUD_Chat_C.ExecuteUbergraph_HUD_Chat
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Chat_C::ExecuteUbergraph_HUD_Chat(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.ExecuteUbergraph_HUD_Chat");

	UHUD_Chat_C_ExecuteUbergraph_HUD_Chat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
