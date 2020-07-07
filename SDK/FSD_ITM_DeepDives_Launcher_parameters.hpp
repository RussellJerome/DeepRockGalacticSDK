#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDives_Launcher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetBestTime
struct UITM_DeepDives_Launcher_C_SetBestTime_Params
{
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetPersonalBest
struct UITM_DeepDives_Launcher_C_SetPersonalBest_Params
{
	int*                                               TotalSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.UpdateBiomeQuote
struct UITM_DeepDives_Launcher_C_UpdateBiomeQuote_Params
{
	class UDeepDive**                                  InDeepDive;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetButtonsEnabled
struct UITM_DeepDives_Launcher_C_SetButtonsEnabled_Params
{
	bool*                                              bInIsEnabled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      DisabledExplanation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.Refresh
struct UITM_DeepDives_Launcher_C_Refresh_Params
{
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.GetDeepDive
struct UITM_DeepDives_Launcher_C_GetDeepDive_Params
{
	class UDeepDive*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetMovie
struct UITM_DeepDives_Launcher_C_SetMovie_Params
{
	class UMediaSource**                               InMovie;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.PreConstruct
struct UITM_DeepDives_Launcher_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.Construct
struct UITM_DeepDives_Launcher_C_Construct_Params
{
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__LaunchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UITM_DeepDives_Launcher_C_BndEvt__LaunchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UITM_DeepDives_Launcher_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UITM_DeepDives_Launcher_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetHovered
struct UITM_DeepDives_Launcher_C_SetHovered_Params
{
	bool*                                              InHovered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature
struct UITM_DeepDives_Launcher_C_BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature_Params
{
	class FString*                                     OpenedUrl;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UITM_DeepDives_Launcher_C_BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UITM_DeepDives_Launcher_C_BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.ExecuteUbergraph_ITM_DeepDives_Launcher
struct UITM_DeepDives_Launcher_C_ExecuteUbergraph_ITM_DeepDives_Launcher_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnJoinMission__DelegateSignature
struct UITM_DeepDives_Launcher_C_OnJoinMission__DelegateSignature_Params
{
	bool*                                              EliteDeepDive;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnStartMission__DelegateSignature
struct UITM_DeepDives_Launcher_C_OnStartMission__DelegateSignature_Params
{
	class UDeepDive**                                  DeepDive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
