// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_JoiningPassword_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_JoiningPassword.WND_JoiningPassword_C.SetSession
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult* Session                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWND_JoiningPassword_C::SetSession(struct FBlueprintSessionResult* Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.SetSession");

	UWND_JoiningPassword_C_SetSession_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWND_JoiningPassword_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");

	UWND_JoiningPassword_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWND_JoiningPassword_C::BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");

	UWND_JoiningPassword_C_BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JoiningPassword.WND_JoiningPassword_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JoiningPassword_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.PreConstruct");

	UWND_JoiningPassword_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JoiningPassword.WND_JoiningPassword_C.ExecuteUbergraph_WND_JoiningPassword
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_JoiningPassword_C::ExecuteUbergraph_WND_JoiningPassword(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.ExecuteUbergraph_WND_JoiningPassword");

	UWND_JoiningPassword_C_ExecuteUbergraph_WND_JoiningPassword_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JoiningPassword.WND_JoiningPassword_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWND_JoiningPassword_C::OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.OnCancel__DelegateSignature");

	UWND_JoiningPassword_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_JoiningPassword.WND_JoiningPassword_C.JoinWithPassword__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult* Session                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString*                 Password                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWND_JoiningPassword_C::JoinWithPassword__DelegateSignature(struct FBlueprintSessionResult* Session, class FString* Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.JoinWithPassword__DelegateSignature");

	UWND_JoiningPassword_C_JoinWithPassword__DelegateSignature_Params params;
	params.Session = Session;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
