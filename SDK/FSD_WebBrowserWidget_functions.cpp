// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WebBrowserWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UWebBrowser::OnUrlChanged__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature");

	UWebBrowser_OnUrlChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString*                 URL                            (Parm, ZeroConstructor)
// class FString*                 Frame                          (Parm, ZeroConstructor)

void UWebBrowser::OnBeforePopup__DelegateSignature(class FString* URL, class FString* Frame)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature");

	UWebBrowser_OnBeforePopup__DelegateSignature_Params params;
	params.URL = URL;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebBrowserWidget.WebBrowser.LoadURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString*                 NewURL                         (Parm, ZeroConstructor)

void UWebBrowser::LoadURL(class FString* NewURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadURL");

	UWebBrowser_LoadURL_Params params;
	params.NewURL = NewURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebBrowserWidget.WebBrowser.LoadString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString*                 Contents                       (Parm, ZeroConstructor)
// class FString*                 DummyURL                       (Parm, ZeroConstructor)

void UWebBrowser::LoadString(class FString* Contents, class FString* DummyURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadString");

	UWebBrowser_LoadString_Params params;
	params.Contents = Contents;
	params.DummyURL = DummyURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebBrowserWidget.WebBrowser.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UWebBrowser::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetUrl");

	UWebBrowser_GetUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WebBrowserWidget.WebBrowser.GetTitleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWebBrowser::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetTitleText");

	UWebBrowser_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString*                 ScriptText                     (Parm, ZeroConstructor)

void UWebBrowser::ExecuteJavascript(class FString* ScriptText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.ExecuteJavascript");

	UWebBrowser_ExecuteJavascript_Params params;
	params.ScriptText = ScriptText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
