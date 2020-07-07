#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDives_Join_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.UpdateTextSearchFilter
struct UITM_DeepDives_Join_C_UpdateTextSearchFilter_Params
{
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateServerViewsIfVisible
struct UITM_DeepDives_Join_C_PopulateServerViewsIfVisible_Params
{
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateNext
struct UITM_DeepDives_Join_C_PopulateNext_Params
{
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.ClearServerViews
struct UITM_DeepDives_Join_C_ClearServerViews_Params
{
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateServerViews
struct UITM_DeepDives_Join_C_PopulateServerViews_Params
{
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnFailure_1FB10C08435EA9BCE39BD9ABFF154396
struct UITM_DeepDives_Join_C_OnFailure_1FB10C08435EA9BCE39BD9ABFF154396_Params
{
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnSuccess_1FB10C08435EA9BCE39BD9ABFF154396
struct UITM_DeepDives_Join_C_OnSuccess_1FB10C08435EA9BCE39BD9ABFF154396_Params
{
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnFailure_0B5BC1CF422A3FBD05716A89A13443B1
struct UITM_DeepDives_Join_C_OnFailure_0B5BC1CF422A3FBD05716A89A13443B1_Params
{
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnSuccess_0B5BC1CF422A3FBD05716A89A13443B1
struct UITM_DeepDives_Join_C_OnSuccess_0B5BC1CF422A3FBD05716A89A13443B1_Params
{
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Construct
struct UITM_DeepDives_Join_C_Construct_Params
{
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Open
struct UITM_DeepDives_Join_C_Open_Params
{
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ServerList_Regular_K2Node_ComponentBoundEvent_0_OnJoinServer__DelegateSignature
struct UITM_DeepDives_Join_C_BndEvt__ServerList_Regular_K2Node_ComponentBoundEvent_0_OnJoinServer__DelegateSignature_Params
{
	struct FBlueprintSessionResult*                    Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ServerList_Hard_K2Node_ComponentBoundEvent_1_OnJoinServer__DelegateSignature
struct UITM_DeepDives_Join_C_BndEvt__ServerList_Hard_K2Node_ComponentBoundEvent_1_OnJoinServer__DelegateSignature_Params
{
	struct FBlueprintSessionResult*                    Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnJoinServerClicked
struct UITM_DeepDives_Join_C_OnJoinServerClicked_Params
{
	struct FBlueprintSessionResult*                    InSession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ITM_DeepDives_ServerFilters_K2Node_ComponentBoundEvent_2_OnSearchFiltersChanged__DelegateSignature
struct UITM_DeepDives_Join_C_BndEvt__ITM_DeepDives_ServerFilters_K2Node_ComponentBoundEvent_2_OnSearchFiltersChanged__DelegateSignature_Params
{
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__WND_JoiningPassword_K2Node_ComponentBoundEvent_3_JoinWithPassword__DelegateSignature
struct UITM_DeepDives_Join_C_BndEvt__WND_JoiningPassword_K2Node_ComponentBoundEvent_3_JoinWithPassword__DelegateSignature_Params
{
	struct FBlueprintSessionResult*                    Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class FString*                                     Password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Close Waiting Window
struct UITM_DeepDives_Join_C_Close_Waiting_Window_Params
{
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Join Server
struct UITM_DeepDives_Join_C_Join_Server_Params
{
	struct FBlueprintSessionResult*                    Session;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString*                                     Password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UITM_DeepDives_Join_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.ExecuteUbergraph_ITM_DeepDives_Join
struct UITM_DeepDives_Join_C_ExecuteUbergraph_ITM_DeepDives_Join_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnJoining__DelegateSignature
struct UITM_DeepDives_Join_C_OnJoining__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
