#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AnalyticsBlueprintLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
struct UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params
{
	TArray<struct FAnalyticsEventAttr>*                Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
struct UAnalyticsBlueprintLibrary_StartSession_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
struct UAnalyticsBlueprintLibrary_SetUserId_Params
{
	class FString*                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
struct UAnalyticsBlueprintLibrary_SetSessionId_Params
{
	class FString*                                     sessionId;                                                // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
struct UAnalyticsBlueprintLibrary_SetLocation_Params
{
	class FString*                                     Location;                                                 // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
struct UAnalyticsBlueprintLibrary_SetGender_Params
{
	class FString*                                     Gender;                                                   // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
struct UAnalyticsBlueprintLibrary_SetBuildInfo_Params
{
	class FString*                                     BuildInfo;                                                // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
struct UAnalyticsBlueprintLibrary_SetAge_Params
{
	int*                                               Age;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
struct UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params
{
	class FString*                                     ItemID;                                                   // (Parm, ZeroConstructor)
	int*                                               ItemQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnalyticsEventAttr>*                Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
struct UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params
{
	class FString*                                     ItemID;                                                   // (Parm, ZeroConstructor)
	int*                                               ItemQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
struct UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params
{
	class FString*                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int*                                               GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnalyticsEventAttr>*                Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
struct UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params
{
	class FString*                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int*                                               GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
struct UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params
{
	class FString*                                     ProgressType;                                             // (Parm, ZeroConstructor)
	TArray<class FString>*                             ProgressNames;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FAnalyticsEventAttr>*                Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
struct UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params
{
	class FString*                                     ProgressType;                                             // (Parm, ZeroConstructor)
	class FString*                                     ProgressName;                                             // (Parm, ZeroConstructor)
	TArray<struct FAnalyticsEventAttr>*                Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
struct UAnalyticsBlueprintLibrary_RecordProgress_Params
{
	class FString*                                     ProgressType;                                             // (Parm, ZeroConstructor)
	class FString*                                     ProgressName;                                             // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
struct UAnalyticsBlueprintLibrary_RecordItemPurchase_Params
{
	class FString*                                     ItemID;                                                   // (Parm, ZeroConstructor)
	class FString*                                     Currency;                                                 // (Parm, ZeroConstructor)
	int*                                               PerItemCost;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
struct UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params
{
	class FString*                                     EventName;                                                // (Parm, ZeroConstructor)
	TArray<struct FAnalyticsEventAttr>*                Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
struct UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params
{
	class FString*                                     EventName;                                                // (Parm, ZeroConstructor)
	class FString*                                     AttributeName;                                            // (Parm, ZeroConstructor)
	class FString*                                     AttributeValue;                                           // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
struct UAnalyticsBlueprintLibrary_RecordEvent_Params
{
	class FString*                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
struct UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params
{
	class FString*                                     Error;                                                    // (Parm, ZeroConstructor)
	TArray<struct FAnalyticsEventAttr>*                Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
struct UAnalyticsBlueprintLibrary_RecordError_Params
{
	class FString*                                     Error;                                                    // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
struct UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params
{
	class FString*                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int*                                               GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     RealCurrencyType;                                         // (Parm, ZeroConstructor)
	float*                                             RealMoneyCost;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     PaymentProvider;                                          // (Parm, ZeroConstructor)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
struct UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params
{
	class FString*                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int*                                               GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnalyticsEventAttr>*                Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
struct UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params
{
	class FString*                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int*                                               GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
struct UAnalyticsBlueprintLibrary_MakeEventAttribute_Params
{
	class FString*                                     AttributeName;                                            // (Parm, ZeroConstructor)
	class FString*                                     AttributeValue;                                           // (Parm, ZeroConstructor)
	struct FAnalyticsEventAttr                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
struct UAnalyticsBlueprintLibrary_GetUserId_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
struct UAnalyticsBlueprintLibrary_GetSessionId_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
struct UAnalyticsBlueprintLibrary_FlushEvents_Params
{
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
struct UAnalyticsBlueprintLibrary_EndSession_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
