// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_RestoreSaveList_Entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.SetValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PlayerRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Credits                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PromotionRank                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          CurrentSave                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFSDSaveGame**           SaveGameInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_RestoreSaveList_Entry_C::SetValues(int* PlayerRank, int* Credits, int* PromotionRank, class FString* SlotName, bool* CurrentSave, class UFSDSaveGame** SaveGameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.SetValues");

	UITM_RestoreSaveList_Entry_C_SetValues_Params params;
	params.PlayerRank = PlayerRank;
	params.Credits = Credits;
	params.PromotionRank = PromotionRank;
	params.SlotName = SlotName;
	params.CurrentSave = CurrentSave;
	params.SaveGameInstance = SaveGameInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_RestoreSaveList_Entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.Construct");

	UITM_RestoreSaveList_Entry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_RestoreSaveList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UITM_RestoreSaveList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.Answer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_RestoreSaveList_Entry_C::Answer(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.Answer");

	UITM_RestoreSaveList_Entry_C_Answer_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.ExecuteUbergraph_ITM_RestoreSaveList_Entry
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_RestoreSaveList_Entry_C::ExecuteUbergraph_ITM_RestoreSaveList_Entry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.ExecuteUbergraph_ITM_RestoreSaveList_Entry");

	UITM_RestoreSaveList_Entry_C_ExecuteUbergraph_ITM_RestoreSaveList_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
