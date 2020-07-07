#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__Menu_Jobs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function _Menu_Jobs._Menu_Jobs_C.HasCompletedIntro
struct U_Menu_Jobs_C_HasCompletedIntro_Params
{
	bool                                               OutCompleted;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _Menu_Jobs._Menu_Jobs_C.CreateJobWidget
struct U_Menu_Jobs_C_CreateJobWidget_Params
{
	class APlayerController**                          OwningPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCampaign**                                  Campaign;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsWeekly;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWND_Jobs_Entry_Base_C*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function _Menu_Jobs._Menu_Jobs_C.OnKeyUp
struct U_Menu_Jobs_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function _Menu_Jobs._Menu_Jobs_C.RefreshJobs
struct U_Menu_Jobs_C_RefreshJobs_Params
{
};

// Function _Menu_Jobs._Menu_Jobs_C.JobUnfolded
struct U_Menu_Jobs_C_JobUnfolded_Params
{
	class UWND_Jobs_Entry_Base_C**                     NewEntry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function _Menu_Jobs._Menu_Jobs_C.AddJobEntry
struct U_Menu_Jobs_C_AddJobEntry_Params
{
	class UCampaign**                                  Campaign;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _Menu_Jobs._Menu_Jobs_C.GetFSDPlayer
struct U_Menu_Jobs_C_GetFSDPlayer_Params
{
	class AFSDPlayerController*                        AsFSDPlayer_Controller;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _Menu_Jobs._Menu_Jobs_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct U_Menu_Jobs_C_BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function _Menu_Jobs._Menu_Jobs_C.OnShown
struct U_Menu_Jobs_C_OnShown_Params
{
};

// Function _Menu_Jobs._Menu_Jobs_C.Back
struct U_Menu_Jobs_C_Back_Params
{
};

// Function _Menu_Jobs._Menu_Jobs_C.PreConstruct
struct U_Menu_Jobs_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _Menu_Jobs._Menu_Jobs_C.Scroll To Unfolded
struct U_Menu_Jobs_C_Scroll_To_Unfolded_Params
{
};

// Function _Menu_Jobs._Menu_Jobs_C.Construct
struct U_Menu_Jobs_C_Construct_Params
{
};

// Function _Menu_Jobs._Menu_Jobs_C.OnCampaignCompleted_Event
struct U_Menu_Jobs_C_OnCampaignCompleted_Event_Params
{
};

// Function _Menu_Jobs._Menu_Jobs_C.BuildList
struct U_Menu_Jobs_C_BuildList_Params
{
};

// Function _Menu_Jobs._Menu_Jobs_C.Unfold If Single Assignement
struct U_Menu_Jobs_C_Unfold_If_Single_Assignement_Params
{
};

// Function _Menu_Jobs._Menu_Jobs_C.ExecuteUbergraph__Menu_Jobs
struct U_Menu_Jobs_C_ExecuteUbergraph__Menu_Jobs_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
