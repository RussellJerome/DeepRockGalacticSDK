#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Matchmaking_Steam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.GetQuickJoinSettings
struct UWND_Matchmaking_Steam_C_GetQuickJoinSettings_Params
{
	class UBiome*                                      SearchBiome;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMissionTemplate*                            SearchMissionType;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.GetShortTimeString
struct UWND_Matchmaking_Steam_C_GetShortTimeString_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnKeyUp
struct UWND_Matchmaking_Steam_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_50EA0D244B2E8D5AD321FE9AD32604C7
struct UWND_Matchmaking_Steam_C_OnFailure_50EA0D244B2E8D5AD321FE9AD32604C7_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_50EA0D244B2E8D5AD321FE9AD32604C7
struct UWND_Matchmaking_Steam_C_OnSuccess_50EA0D244B2E8D5AD321FE9AD32604C7_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_DB01A13D4436619AED64DBAF5AA33079
struct UWND_Matchmaking_Steam_C_OnFailure_DB01A13D4436619AED64DBAF5AA33079_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_DB01A13D4436619AED64DBAF5AA33079
struct UWND_Matchmaking_Steam_C_OnSuccess_DB01A13D4436619AED64DBAF5AA33079_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_2F439A5344ADFB92D1C27FB71FFFFFF7
struct UWND_Matchmaking_Steam_C_OnFailure_2F439A5344ADFB92D1C27FB71FFFFFF7_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_2F439A5344ADFB92D1C27FB71FFFFFF7
struct UWND_Matchmaking_Steam_C_OnSuccess_2F439A5344ADFB92D1C27FB71FFFFFF7_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_721B2BE34FF99567F4914C86B67DADFA
struct UWND_Matchmaking_Steam_C_OnFailure_721B2BE34FF99567F4914C86B67DADFA_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_721B2BE34FF99567F4914C86B67DADFA
struct UWND_Matchmaking_Steam_C_OnSuccess_721B2BE34FF99567F4914C86B67DADFA_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWND_Matchmaking_Steam_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.PreConstruct
struct UWND_Matchmaking_Steam_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Cancel
struct UWND_Matchmaking_Steam_C_Cancel_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Construct
struct UWND_Matchmaking_Steam_C_Construct_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
struct UWND_Matchmaking_Steam_C_BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
{
	struct FText*                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnShown
struct UWND_Matchmaking_Steam_C_OnShown_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Reset
struct UWND_Matchmaking_Steam_C_Reset_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.ServelistChanged
struct UWND_Matchmaking_Steam_C_ServelistChanged_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWND_Matchmaking_Steam_C_BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Search
struct UWND_Matchmaking_Steam_C_Search_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Answer
struct UWND_Matchmaking_Steam_C_Answer_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Basic_ButtonScalable2_C_0_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature
struct UWND_Matchmaking_Steam_C_BndEvt__Basic_ButtonScalable2_C_0_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature_Params
{
};

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.ExecuteUbergraph_WND_Matchmaking_Steam
struct UWND_Matchmaking_Steam_C_ExecuteUbergraph_WND_Matchmaking_Steam_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
