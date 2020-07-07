#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_GoogleAnalytics_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetTrackingId
struct UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Params
{
	class FString*                                     TrackingId;                                               // (Parm, ZeroConstructor)
};

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetAnonymizeIP
struct UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Params
{
	bool*                                              Anonymize;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleUserTiming
struct UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Params
{
	class FString*                                     TimingCategory;                                           // (Parm, ZeroConstructor)
	int*                                               TimingValue;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     TimingName;                                               // (Parm, ZeroConstructor)
	TArray<struct FCustomDimension>*                   CustomDimensions;                                         // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FCustomMetric>*                      CustomMetrics;                                            // (ConstParm, Parm, ZeroConstructor)
};

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleSocialInteraction
struct UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Params
{
	class FString*                                     SocialNetwork;                                            // (Parm, ZeroConstructor)
	class FString*                                     SocialAction;                                             // (Parm, ZeroConstructor)
	class FString*                                     SocialTarget;                                             // (Parm, ZeroConstructor)
	TArray<struct FCustomDimension>*                   CustomDimensions;                                         // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FCustomMetric>*                      CustomMetrics;                                            // (ConstParm, Parm, ZeroConstructor)
};

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleScreen
struct UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Params
{
	class FString*                                     ScreenName;                                               // (Parm, ZeroConstructor)
	TArray<struct FCustomDimension>*                   CustomDimensions;                                         // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FCustomMetric>*                      CustomMetrics;                                            // (ConstParm, Parm, ZeroConstructor)
};

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleEvent
struct UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Params
{
	class FString*                                     EventCategory;                                            // (Parm, ZeroConstructor)
	class FString*                                     EventAction;                                              // (Parm, ZeroConstructor)
	class FString*                                     EventLabel;                                               // (Parm, ZeroConstructor)
	int*                                               EventValue;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCustomDimension>*                   CustomDimensions;                                         // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FCustomMetric>*                      CustomMetrics;                                            // (ConstParm, Parm, ZeroConstructor)
};

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.GetTrackingId
struct UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
