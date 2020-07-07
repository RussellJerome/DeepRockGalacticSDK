#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WebBrowserWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WebBrowserWidget.WebBrowser
// 0x0048 (0x0150 - 0x0108)
class UWebBrowser : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnUrlChanged;                                             // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeforePopup;                                            // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class FString                                      InitialURL;                                               // 0x0128(0x0010) (Edit, ZeroConstructor)
	bool                                               bSupportsTransparency;                                    // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0139(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WebBrowserWidget.WebBrowser");
		return ptr;
	}


	void OnUrlChanged__DelegateSignature(struct FText* Text);
	void OnBeforePopup__DelegateSignature(class FString* URL, class FString* Frame);
	void LoadURL(class FString* NewURL);
	void LoadString(class FString* Contents, class FString* DummyURL);
	class FString GetUrl();
	struct FText GetTitleText();
	void ExecuteJavascript(class FString* ScriptText);
};


// Class WebBrowserWidget.WebBrowserAssetManager
// 0x0050 (0x0078 - 0x0028)
class UWebBrowserAssetManager : public UObject
{
public:
	TSoftObjectPtr<class UMaterial>                    DefaultMaterial;                                          // 0x0028(0x0028)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WebBrowserWidget.WebBrowserAssetManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
