// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_GoogleAnalytics_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetTrackingId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 TrackingId                     (Parm, ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::STATIC_SetTrackingId(class FString* TrackingId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetTrackingId");

	UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Params params;
	params.TrackingId = TrackingId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetAnonymizeIP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          Anonymize                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGoogleAnalyticsBlueprintLibrary::STATIC_SetAnonymizeIP(bool* Anonymize)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetAnonymizeIP");

	UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Params params;
	params.Anonymize = Anonymize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleUserTiming
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 TimingCategory                 (Parm, ZeroConstructor)
// int*                           TimingValue                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 TimingName                     (Parm, ZeroConstructor)
// TArray<struct FCustomDimension>* CustomDimensions               (ConstParm, Parm, ZeroConstructor)
// TArray<struct FCustomMetric>*  CustomMetrics                  (ConstParm, Parm, ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::STATIC_RecordGoogleUserTiming(class FString* TimingCategory, int* TimingValue, class FString* TimingName, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleUserTiming");

	UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Params params;
	params.TimingCategory = TimingCategory;
	params.TimingValue = TimingValue;
	params.TimingName = TimingName;
	params.CustomDimensions = CustomDimensions;
	params.CustomMetrics = CustomMetrics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleSocialInteraction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 SocialNetwork                  (Parm, ZeroConstructor)
// class FString*                 SocialAction                   (Parm, ZeroConstructor)
// class FString*                 SocialTarget                   (Parm, ZeroConstructor)
// TArray<struct FCustomDimension>* CustomDimensions               (ConstParm, Parm, ZeroConstructor)
// TArray<struct FCustomMetric>*  CustomMetrics                  (ConstParm, Parm, ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::STATIC_RecordGoogleSocialInteraction(class FString* SocialNetwork, class FString* SocialAction, class FString* SocialTarget, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleSocialInteraction");

	UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Params params;
	params.SocialNetwork = SocialNetwork;
	params.SocialAction = SocialAction;
	params.SocialTarget = SocialTarget;
	params.CustomDimensions = CustomDimensions;
	params.CustomMetrics = CustomMetrics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 ScreenName                     (Parm, ZeroConstructor)
// TArray<struct FCustomDimension>* CustomDimensions               (ConstParm, Parm, ZeroConstructor)
// TArray<struct FCustomMetric>*  CustomMetrics                  (ConstParm, Parm, ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::STATIC_RecordGoogleScreen(class FString* ScreenName, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleScreen");

	UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Params params;
	params.ScreenName = ScreenName;
	params.CustomDimensions = CustomDimensions;
	params.CustomMetrics = CustomMetrics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 EventCategory                  (Parm, ZeroConstructor)
// class FString*                 EventAction                    (Parm, ZeroConstructor)
// class FString*                 EventLabel                     (Parm, ZeroConstructor)
// int*                           EventValue                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FCustomDimension>* CustomDimensions               (ConstParm, Parm, ZeroConstructor)
// TArray<struct FCustomMetric>*  CustomMetrics                  (ConstParm, Parm, ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::STATIC_RecordGoogleEvent(class FString* EventCategory, class FString* EventAction, class FString* EventLabel, int* EventValue, TArray<struct FCustomDimension>* CustomDimensions, TArray<struct FCustomMetric>* CustomMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleEvent");

	UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Params params;
	params.EventCategory = EventCategory;
	params.EventAction = EventAction;
	params.EventLabel = EventLabel;
	params.EventValue = EventValue;
	params.CustomDimensions = CustomDimensions;
	params.CustomMetrics = CustomMetrics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.GetTrackingId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UGoogleAnalyticsBlueprintLibrary::STATIC_GetTrackingId()
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.GetTrackingId");

	UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
