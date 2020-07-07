#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDives_ServerFilters_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.UpdatePasswordFilter
struct UITM_DeepDives_ServerFilters_C_UpdatePasswordFilter_Params
{
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.GetAutoRefresh
struct UITM_DeepDives_ServerFilters_C_GetAutoRefresh_Params
{
	bool                                               AutoRefresh;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.FilterSession
struct UITM_DeepDives_ServerFilters_C_FilterSession_Params
{
	struct FBlueprintSessionResult*                    InSession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Should_Filter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.IsDifficultySelected
struct UITM_DeepDives_ServerFilters_C_IsDifficultySelected_Params
{
	class UDifficultySetting**                         InDifficulty;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Selected;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.UpdateSearchDistance
struct UITM_DeepDives_ServerFilters_C_UpdateSearchDistance_Params
{
	ESteamSearchRegion*                                SearchRegion;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.GetTextFilter
struct UITM_DeepDives_ServerFilters_C_GetTextFilter_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.PreConstruct
struct UITM_DeepDives_ServerFilters_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Filter_TextSearch_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
struct UITM_DeepDives_ServerFilters_C_BndEvt__Filter_TextSearch_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.Construct
struct UITM_DeepDives_ServerFilters_C_Construct_Params
{
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature
struct UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature
struct UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature
struct UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature
struct UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Filter_HazardLevel_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature
struct UITM_DeepDives_ServerFilters_C_BndEvt__Filter_HazardLevel_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature_Params
{
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
struct UITM_DeepDives_ServerFilters_C_BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.RefreshSettings
struct UITM_DeepDives_ServerFilters_C_RefreshSettings_Params
{
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature
struct UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
struct UITM_DeepDives_ServerFilters_C_BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.ExecuteUbergraph_ITM_DeepDives_ServerFilters
struct UITM_DeepDives_ServerFilters_C_ExecuteUbergraph_ITM_DeepDives_ServerFilters_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.OnSearchFiltersChanged__DelegateSignature
struct UITM_DeepDives_ServerFilters_C_OnSearchFiltersChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
