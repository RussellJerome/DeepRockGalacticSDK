#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDives_ServerList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateLocked
struct UITM_DeepDives_ServerList_C_UpdateLocked_Params
{
};

// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.JoinServer
struct UITM_DeepDives_ServerList_C_JoinServer_Params
{
	struct FBlueprintSessionResult*                    InSession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.FinishUpdate
struct UITM_DeepDives_ServerList_C_FinishUpdate_Params
{
};

// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateServer
struct UITM_DeepDives_ServerList_C_UpdateServer_Params
{
	struct FBlueprintSessionResult*                    ServerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.BeginUpdate
struct UITM_DeepDives_ServerList_C_BeginUpdate_Params
{
};

// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.PreConstruct
struct UITM_DeepDives_ServerList_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.Construct
struct UITM_DeepDives_ServerList_C_Construct_Params
{
};

// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.ExecuteUbergraph_ITM_DeepDives_ServerList
struct UITM_DeepDives_ServerList_C_ExecuteUbergraph_ITM_DeepDives_ServerList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.OnJoinServer__DelegateSignature
struct UITM_DeepDives_ServerList_C_OnJoinServer__DelegateSignature_Params
{
	struct FBlueprintSessionResult*                    Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
