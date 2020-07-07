// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_TwitchOAuth_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UMENU_TwitchOAuth_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.Init");

	UMENU_TwitchOAuth_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMENU_TwitchOAuth_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.Construct");

	UMENU_TwitchOAuth_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.BndEvt__WebBrowser_31_K2Node_ComponentBoundEvent_52_OnUrlChanged__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMENU_TwitchOAuth_C::BndEvt__WebBrowser_31_K2Node_ComponentBoundEvent_52_OnUrlChanged__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.BndEvt__WebBrowser_31_K2Node_ComponentBoundEvent_52_OnUrlChanged__DelegateSignature");

	UMENU_TwitchOAuth_C_BndEvt__WebBrowser_31_K2Node_ComponentBoundEvent_52_OnUrlChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.BndEvt__Close_K2Node_ComponentBoundEvent_87_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_TwitchOAuth_C::BndEvt__Close_K2Node_ComponentBoundEvent_87_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.BndEvt__Close_K2Node_ComponentBoundEvent_87_OnClicked__DelegateSignature");

	UMENU_TwitchOAuth_C_BndEvt__Close_K2Node_ComponentBoundEvent_87_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.ExecuteUbergraph_MENU_TwitchOAuth
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_TwitchOAuth_C::ExecuteUbergraph_MENU_TwitchOAuth(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.ExecuteUbergraph_MENU_TwitchOAuth");

	UMENU_TwitchOAuth_C_ExecuteUbergraph_MENU_TwitchOAuth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
