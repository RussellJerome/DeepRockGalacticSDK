#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_GoogleAnalytics_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GoogleAnalytics.GoogleAnalyticsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UGoogleAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GoogleAnalytics.GoogleAnalyticsBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetTrackingId(class FString* TrackingId);
	void STATIC_SetAnonymizeIP(bool* Anonymize);
	void STATIC_RecordGoogleUserTiming(class FString* TimingCategory, int* TimingValue, class FString* TimingName, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics);
	void STATIC_RecordGoogleSocialInteraction(class FString* SocialNetwork, class FString* SocialAction, class FString* SocialTarget, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics);
	void STATIC_RecordGoogleScreen(class FString* ScreenName, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics);
	void STATIC_RecordGoogleEvent(class FString* EventCategory, class FString* EventAction, class FString* EventLabel, int* EventValue, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics);
	class FString STATIC_GetTrackingId();
};


// Class GoogleAnalytics.GoogleAnalyticsSettings
// 0x0008 (0x0030 - 0x0028)
class UGoogleAnalyticsSettings : public UObject
{
public:
	bool                                               bEnableIDFACollection;                                    // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GoogleAnalytics.GoogleAnalyticsSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
