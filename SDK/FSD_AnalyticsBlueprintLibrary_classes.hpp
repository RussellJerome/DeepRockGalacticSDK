#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AnalyticsBlueprintLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary");
		return ptr;
	}


	bool STATIC_StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr>* Attributes);
	bool STATIC_StartSession();
	void STATIC_SetUserId(class FString* userId);
	void STATIC_SetSessionId(class FString* sessionId);
	void STATIC_SetLocation(class FString* Location);
	void STATIC_SetGender(class FString* Gender);
	void STATIC_SetBuildInfo(class FString* BuildInfo);
	void STATIC_SetAge(int* Age);
	void STATIC_RecordSimpleItemPurchaseWithAttributes(class FString* ItemID, int* ItemQuantity, TArray<struct FAnalyticsEventAttr>* Attributes);
	void STATIC_RecordSimpleItemPurchase(class FString* ItemID, int* ItemQuantity);
	void STATIC_RecordSimpleCurrencyPurchaseWithAttributes(class FString* GameCurrencyType, int* GameCurrencyAmount, TArray<struct FAnalyticsEventAttr>* Attributes);
	void STATIC_RecordSimpleCurrencyPurchase(class FString* GameCurrencyType, int* GameCurrencyAmount);
	void STATIC_RecordProgressWithFullHierarchyAndAttributes(class FString* ProgressType, TArray<class FString>* ProgressNames, TArray<struct FAnalyticsEventAttr>* Attributes);
	void STATIC_RecordProgressWithAttributes(class FString* ProgressType, class FString* ProgressName, TArray<struct FAnalyticsEventAttr>* Attributes);
	void STATIC_RecordProgress(class FString* ProgressType, class FString* ProgressName);
	void STATIC_RecordItemPurchase(class FString* ItemID, class FString* Currency, int* PerItemCost, int* ItemQuantity);
	void STATIC_RecordEventWithAttributes(class FString* EventName, TArray<struct FAnalyticsEventAttr>* Attributes);
	void STATIC_RecordEventWithAttribute(class FString* EventName, class FString* AttributeName, class FString* AttributeValue);
	void STATIC_RecordEvent(class FString* EventName);
	void STATIC_RecordErrorWithAttributes(class FString* Error, TArray<struct FAnalyticsEventAttr>* Attributes);
	void STATIC_RecordError(class FString* Error);
	void STATIC_RecordCurrencyPurchase(class FString* GameCurrencyType, int* GameCurrencyAmount, class FString* RealCurrencyType, float* RealMoneyCost, class FString* PaymentProvider);
	void STATIC_RecordCurrencyGivenWithAttributes(class FString* GameCurrencyType, int* GameCurrencyAmount, TArray<struct FAnalyticsEventAttr>* Attributes);
	void STATIC_RecordCurrencyGiven(class FString* GameCurrencyType, int* GameCurrencyAmount);
	struct FAnalyticsEventAttr STATIC_MakeEventAttribute(class FString* AttributeName, class FString* AttributeValue);
	class FString STATIC_GetUserId();
	class FString STATIC_GetSessionId();
	void STATIC_FlushEvents();
	void STATIC_EndSession();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
