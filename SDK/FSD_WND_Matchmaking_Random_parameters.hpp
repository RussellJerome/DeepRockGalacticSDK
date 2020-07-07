#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Matchmaking_Random_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.GetShortTimeString
struct UWND_Matchmaking_Random_C_GetShortTimeString_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnKeyUp
struct UWND_Matchmaking_Random_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.SetInfo
struct UWND_Matchmaking_Random_C_SetInfo_Params
{
	class FString*                                     Status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               ETA;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnCancelled_60C36B444D1043ED6EFCA8BEE5B2A546
struct UWND_Matchmaking_Random_C_OnCancelled_60C36B444D1043ED6EFCA8BEE5B2A546_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_60C36B444D1043ED6EFCA8BEE5B2A546
struct UWND_Matchmaking_Random_C_OnFailure_60C36B444D1043ED6EFCA8BEE5B2A546_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_60C36B444D1043ED6EFCA8BEE5B2A546
struct UWND_Matchmaking_Random_C_OnSuccess_60C36B444D1043ED6EFCA8BEE5B2A546_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_B5F48FED4760268A1AB776BBA80FEA51
struct UWND_Matchmaking_Random_C_OnFailure_B5F48FED4760268A1AB776BBA80FEA51_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_B5F48FED4760268A1AB776BBA80FEA51
struct UWND_Matchmaking_Random_C_OnSuccess_B5F48FED4760268A1AB776BBA80FEA51_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_B619D28D4A771A7C1DE3BB9DA24BF467
struct UWND_Matchmaking_Random_C_OnFailure_B619D28D4A771A7C1DE3BB9DA24BF467_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_B619D28D4A771A7C1DE3BB9DA24BF467
struct UWND_Matchmaking_Random_C_OnSuccess_B619D28D4A771A7C1DE3BB9DA24BF467_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWND_Matchmaking_Random_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.PreConstruct
struct UWND_Matchmaking_Random_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Cancel
struct UWND_Matchmaking_Random_C_Cancel_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Construct
struct UWND_Matchmaking_Random_C_Construct_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
struct UWND_Matchmaking_Random_C_BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
{
	struct FText*                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWND_Matchmaking_Random_C_BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.MatchStatusUpdate
struct UWND_Matchmaking_Random_C_MatchStatusUpdate_Params
{
	class FString*                                     Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Search
struct UWND_Matchmaking_Random_C_Search_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnShown
struct UWND_Matchmaking_Random_C_OnShown_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Tick
struct UWND_Matchmaking_Random_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Reset
struct UWND_Matchmaking_Random_C_Reset_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnClosed
struct UWND_Matchmaking_Random_C_OnClosed_Params
{
};

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.ExecuteUbergraph_WND_Matchmaking_Random
struct UWND_Matchmaking_Random_C_ExecuteUbergraph_WND_Matchmaking_Random_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
