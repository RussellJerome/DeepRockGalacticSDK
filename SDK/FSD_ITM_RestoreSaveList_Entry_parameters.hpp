#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_RestoreSaveList_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.SetValues
struct UITM_RestoreSaveList_Entry_C_SetValues_Params
{
	int*                                               PlayerRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Credits;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PromotionRank;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     SlotName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              CurrentSave;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFSDSaveGame**                               SaveGameInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.Construct
struct UITM_RestoreSaveList_Entry_C_Construct_Params
{
};

// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UITM_RestoreSaveList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.Answer
struct UITM_RestoreSaveList_Entry_C_Answer_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.ExecuteUbergraph_ITM_RestoreSaveList_Entry
struct UITM_RestoreSaveList_Entry_C_ExecuteUbergraph_ITM_RestoreSaveList_Entry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
