// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ChatLine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ChatLine.HUD_ChatLine_C.RemoveTags
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString*                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Result                         (Parm, OutParm, ZeroConstructor)

void UHUD_ChatLine_C::RemoveTags(class FString* Source, class FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.RemoveTags");

	UHUD_ChatLine_C_RemoveTags_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function HUD_ChatLine.HUD_ChatLine_C.EncloseText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString*                 Pre                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString*                 Post                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Result                         (Parm, OutParm)

void UHUD_ChatLine_C::EncloseText(class FString* Pre, struct FText* Text, class FString* Post, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.EncloseText");

	UHUD_ChatLine_C_EncloseText_Params params;
	params.Pre = Pre;
	params.Text = Text;
	params.Post = Post;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function HUD_ChatLine.HUD_ChatLine_C.StyledText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText*                  style_Name                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Result                         (Parm, OutParm)

void UHUD_ChatLine_C::StyledText(struct FText* style_Name, struct FText* Text, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.StyledText");

	UHUD_ChatLine_C_StyledText_Params params;
	params.style_Name = style_Name;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function HUD_ChatLine.HUD_ChatLine_C.UpdateUserIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EChatMessageType*              MessageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EChatSenderType*               SenderType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ChatLine_C::UpdateUserIcon(EChatMessageType* MessageType, EChatSenderType* SenderType)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.UpdateUserIcon");

	UHUD_ChatLine_C_UpdateUserIcon_Params params;
	params.MessageType = MessageType;
	params.SenderType = SenderType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ChatLine.HUD_ChatLine_C.UpdateOpacity
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_ChatLine_C::UpdateOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.UpdateOpacity");

	UHUD_ChatLine_C_UpdateOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ChatLine.HUD_ChatLine_C.SetMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EChatMessageType*              MsgType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 SenderStr                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EChatSenderType*               SenderType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 MsgStr                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UHUD_ChatLine_C::SetMessage(EChatMessageType* MsgType, class FString* SenderStr, EChatSenderType* SenderType, class FString* MsgStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.SetMessage");

	UHUD_ChatLine_C_SetMessage_Params params;
	params.MsgType = MsgType;
	params.SenderStr = SenderStr;
	params.SenderType = SenderType;
	params.MsgStr = MsgStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ChatLine.HUD_ChatLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_ChatLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.Construct");

	UHUD_ChatLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ChatLine.HUD_ChatLine_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ChatLine_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.Tick");

	UHUD_ChatLine_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ChatLine.HUD_ChatLine_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ChatLine_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.PreConstruct");

	UHUD_ChatLine_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ChatLine.HUD_ChatLine_C.ChangeFontSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ChatLine_C::ChangeFontSize(int* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.ChangeFontSize");

	UHUD_ChatLine_C_ChangeFontSize_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ChatLine.HUD_ChatLine_C.ExecuteUbergraph_HUD_ChatLine
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ChatLine_C::ExecuteUbergraph_HUD_ChatLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.ExecuteUbergraph_HUD_ChatLine");

	UHUD_ChatLine_C_ExecuteUbergraph_HUD_ChatLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ChatLine.HUD_ChatLine_C.OnMessageHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHUD_ChatLine_C::OnMessageHidden__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.OnMessageHidden__DelegateSignature");

	UHUD_ChatLine_C_OnMessageHidden__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
