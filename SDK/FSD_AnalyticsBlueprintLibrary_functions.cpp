// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AnalyticsBlueprintLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAnalyticsEventAttr>* Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnalyticsBlueprintLibrary::STATIC_StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes");

	UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnalyticsBlueprintLibrary::STATIC_StartSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession");

	UAnalyticsBlueprintLibrary_StartSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 userId                         (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_SetUserId(class FString* userId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId");

	UAnalyticsBlueprintLibrary_SetUserId_Params params;
	params.userId = userId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sessionId                      (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_SetSessionId(class FString* sessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId");

	UAnalyticsBlueprintLibrary_SetSessionId_Params params;
	params.sessionId = sessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 Location                       (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_SetLocation(class FString* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation");

	UAnalyticsBlueprintLibrary_SetLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 Gender                         (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_SetGender(class FString* Gender)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender");

	UAnalyticsBlueprintLibrary_SetGender_Params params;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 BuildInfo                      (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_SetBuildInfo(class FString* BuildInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo");

	UAnalyticsBlueprintLibrary_SetBuildInfo_Params params;
	params.BuildInfo = BuildInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           Age                            (Parm, ZeroConstructor, IsPlainOldData)

void UAnalyticsBlueprintLibrary::STATIC_SetAge(int* Age)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge");

	UAnalyticsBlueprintLibrary_SetAge_Params params;
	params.Age = Age;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 ItemID                         (Parm, ZeroConstructor)
// int*                           ItemQuantity                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAnalyticsEventAttr>* Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAnalyticsBlueprintLibrary::STATIC_RecordSimpleItemPurchaseWithAttributes(class FString* ItemID, int* ItemQuantity, TArray<struct FAnalyticsEventAttr>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes");

	UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params params;
	params.ItemID = ItemID;
	params.ItemQuantity = ItemQuantity;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 ItemID                         (Parm, ZeroConstructor)
// int*                           ItemQuantity                   (Parm, ZeroConstructor, IsPlainOldData)

void UAnalyticsBlueprintLibrary::STATIC_RecordSimpleItemPurchase(class FString* ItemID, int* ItemQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase");

	UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params params;
	params.ItemID = ItemID;
	params.ItemQuantity = ItemQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 GameCurrencyType               (Parm, ZeroConstructor)
// int*                           GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAnalyticsEventAttr>* Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAnalyticsBlueprintLibrary::STATIC_RecordSimpleCurrencyPurchaseWithAttributes(class FString* GameCurrencyType, int* GameCurrencyAmount, TArray<struct FAnalyticsEventAttr>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes");

	UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 GameCurrencyType               (Parm, ZeroConstructor)
// int*                           GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData)

void UAnalyticsBlueprintLibrary::STATIC_RecordSimpleCurrencyPurchase(class FString* GameCurrencyType, int* GameCurrencyAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase");

	UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 ProgressType                   (Parm, ZeroConstructor)
// TArray<class FString>*         ProgressNames                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FAnalyticsEventAttr>* Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAnalyticsBlueprintLibrary::STATIC_RecordProgressWithFullHierarchyAndAttributes(class FString* ProgressType, TArray<class FString>* ProgressNames, TArray<struct FAnalyticsEventAttr>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes");

	UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params params;
	params.ProgressType = ProgressType;
	params.ProgressNames = ProgressNames;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 ProgressType                   (Parm, ZeroConstructor)
// class FString*                 ProgressName                   (Parm, ZeroConstructor)
// TArray<struct FAnalyticsEventAttr>* Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAnalyticsBlueprintLibrary::STATIC_RecordProgressWithAttributes(class FString* ProgressType, class FString* ProgressName, TArray<struct FAnalyticsEventAttr>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes");

	UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params params;
	params.ProgressType = ProgressType;
	params.ProgressName = ProgressName;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 ProgressType                   (Parm, ZeroConstructor)
// class FString*                 ProgressName                   (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_RecordProgress(class FString* ProgressType, class FString* ProgressName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress");

	UAnalyticsBlueprintLibrary_RecordProgress_Params params;
	params.ProgressType = ProgressType;
	params.ProgressName = ProgressName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 ItemID                         (Parm, ZeroConstructor)
// class FString*                 Currency                       (Parm, ZeroConstructor)
// int*                           PerItemCost                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ItemQuantity                   (Parm, ZeroConstructor, IsPlainOldData)

void UAnalyticsBlueprintLibrary::STATIC_RecordItemPurchase(class FString* ItemID, class FString* Currency, int* PerItemCost, int* ItemQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase");

	UAnalyticsBlueprintLibrary_RecordItemPurchase_Params params;
	params.ItemID = ItemID;
	params.Currency = Currency;
	params.PerItemCost = PerItemCost;
	params.ItemQuantity = ItemQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 EventName                      (Parm, ZeroConstructor)
// TArray<struct FAnalyticsEventAttr>* Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAnalyticsBlueprintLibrary::STATIC_RecordEventWithAttributes(class FString* EventName, TArray<struct FAnalyticsEventAttr>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes");

	UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params params;
	params.EventName = EventName;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 EventName                      (Parm, ZeroConstructor)
// class FString*                 AttributeName                  (Parm, ZeroConstructor)
// class FString*                 AttributeValue                 (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_RecordEventWithAttribute(class FString* EventName, class FString* AttributeName, class FString* AttributeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute");

	UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params params;
	params.EventName = EventName;
	params.AttributeName = AttributeName;
	params.AttributeValue = AttributeValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 EventName                      (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_RecordEvent(class FString* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent");

	UAnalyticsBlueprintLibrary_RecordEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 Error                          (Parm, ZeroConstructor)
// TArray<struct FAnalyticsEventAttr>* Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAnalyticsBlueprintLibrary::STATIC_RecordErrorWithAttributes(class FString* Error, TArray<struct FAnalyticsEventAttr>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes");

	UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params params;
	params.Error = Error;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 Error                          (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_RecordError(class FString* Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError");

	UAnalyticsBlueprintLibrary_RecordError_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 GameCurrencyType               (Parm, ZeroConstructor)
// int*                           GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 RealCurrencyType               (Parm, ZeroConstructor)
// float*                         RealMoneyCost                  (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 PaymentProvider                (Parm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::STATIC_RecordCurrencyPurchase(class FString* GameCurrencyType, int* GameCurrencyAmount, class FString* RealCurrencyType, float* RealMoneyCost, class FString* PaymentProvider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase");

	UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;
	params.RealCurrencyType = RealCurrencyType;
	params.RealMoneyCost = RealMoneyCost;
	params.PaymentProvider = PaymentProvider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 GameCurrencyType               (Parm, ZeroConstructor)
// int*                           GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAnalyticsEventAttr>* Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAnalyticsBlueprintLibrary::STATIC_RecordCurrencyGivenWithAttributes(class FString* GameCurrencyType, int* GameCurrencyAmount, TArray<struct FAnalyticsEventAttr>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes");

	UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 GameCurrencyType               (Parm, ZeroConstructor)
// int*                           GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData)

void UAnalyticsBlueprintLibrary::STATIC_RecordCurrencyGiven(class FString* GameCurrencyType, int* GameCurrencyAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven");

	UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString*                 AttributeName                  (Parm, ZeroConstructor)
// class FString*                 AttributeValue                 (Parm, ZeroConstructor)
// struct FAnalyticsEventAttr     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAnalyticsEventAttr UAnalyticsBlueprintLibrary::STATIC_MakeEventAttribute(class FString* AttributeName, class FString* AttributeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute");

	UAnalyticsBlueprintLibrary_MakeEventAttribute_Params params;
	params.AttributeName = AttributeName;
	params.AttributeValue = AttributeValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAnalyticsBlueprintLibrary::STATIC_GetUserId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId");

	UAnalyticsBlueprintLibrary_GetUserId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAnalyticsBlueprintLibrary::STATIC_GetSessionId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId");

	UAnalyticsBlueprintLibrary_GetSessionId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
// (Final, Native, Static, Public, BlueprintCallable)

void UAnalyticsBlueprintLibrary::STATIC_FlushEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents");

	UAnalyticsBlueprintLibrary_FlushEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
// (Final, Native, Static, Public, BlueprintCallable)

void UAnalyticsBlueprintLibrary::STATIC_EndSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession");

	UAnalyticsBlueprintLibrary_EndSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
