#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WebBrowserWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
struct UWebBrowser_OnUrlChanged__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
struct UWebBrowser_OnBeforePopup__DelegateSignature_Params
{
	class FString*                                     URL;                                                      // (Parm, ZeroConstructor)
	class FString*                                     Frame;                                                    // (Parm, ZeroConstructor)
};

// Function WebBrowserWidget.WebBrowser.LoadURL
struct UWebBrowser_LoadURL_Params
{
	class FString*                                     NewURL;                                                   // (Parm, ZeroConstructor)
};

// Function WebBrowserWidget.WebBrowser.LoadString
struct UWebBrowser_LoadString_Params
{
	class FString*                                     Contents;                                                 // (Parm, ZeroConstructor)
	class FString*                                     DummyURL;                                                 // (Parm, ZeroConstructor)
};

// Function WebBrowserWidget.WebBrowser.GetUrl
struct UWebBrowser_GetUrl_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WebBrowserWidget.WebBrowser.GetTitleText
struct UWebBrowser_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
struct UWebBrowser_ExecuteJavascript_Params
{
	class FString*                                     ScriptText;                                               // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
