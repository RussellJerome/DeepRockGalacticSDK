#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Matchmaking_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_Matchmaking.WND_Matchmaking_C.OnKeyUp
struct UWND_Matchmaking_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WND_Matchmaking.WND_Matchmaking_C.SetInfo
struct UWND_Matchmaking_C_SetInfo_Params
{
	class FString*                                     Status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               ETA;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Matchmaking.WND_Matchmaking_C.OnCancelled_5BBD71A6477F1AA5B558078C2A214949
struct UWND_Matchmaking_C_OnCancelled_5BBD71A6477F1AA5B558078C2A214949_Params
{
};

// Function WND_Matchmaking.WND_Matchmaking_C.OnFailure_5BBD71A6477F1AA5B558078C2A214949
struct UWND_Matchmaking_C_OnFailure_5BBD71A6477F1AA5B558078C2A214949_Params
{
};

// Function WND_Matchmaking.WND_Matchmaking_C.OnSuccess_5BBD71A6477F1AA5B558078C2A214949
struct UWND_Matchmaking_C_OnSuccess_5BBD71A6477F1AA5B558078C2A214949_Params
{
};

// Function WND_Matchmaking.WND_Matchmaking_C.OnFailure_5C0F74314285F8B9B80A20BE4FAC1DCD
struct UWND_Matchmaking_C_OnFailure_5C0F74314285F8B9B80A20BE4FAC1DCD_Params
{
};

// Function WND_Matchmaking.WND_Matchmaking_C.OnSuccess_5C0F74314285F8B9B80A20BE4FAC1DCD
struct UWND_Matchmaking_C_OnSuccess_5C0F74314285F8B9B80A20BE4FAC1DCD_Params
{
};

// Function WND_Matchmaking.WND_Matchmaking_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWND_Matchmaking_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WND_Matchmaking.WND_Matchmaking_C.PreConstruct
struct UWND_Matchmaking_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Matchmaking.WND_Matchmaking_C.Show
struct UWND_Matchmaking_C_Show_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Matchmaking.WND_Matchmaking_C.Cancel
struct UWND_Matchmaking_C_Cancel_Params
{
};

// Function WND_Matchmaking.WND_Matchmaking_C.MatchStatusUpdate
struct UWND_Matchmaking_C_MatchStatusUpdate_Params
{
	class FString*                                     Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Matchmaking.WND_Matchmaking_C.ExecuteUbergraph_WND_Matchmaking
struct UWND_Matchmaking_C_ExecuteUbergraph_WND_Matchmaking_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
