#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Invitation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Invitation.BP_Invitation_C.OnKeyUp
struct UBP_Invitation_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Invitation.BP_Invitation_C.ReplyInvite
struct UBP_Invitation_C_ReplyInvite_Params
{
	int*                                               Reply;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Invitation.BP_Invitation_C.Initialize
struct UBP_Invitation_C_Initialize_Params
{
	struct FDiscordUser*                               User_Data;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	float*                                             TimeElapsed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Invitation.BP_Invitation_C.OnFail_1E7B4EA94EB1E25E604B80A4114A24A4
struct UBP_Invitation_C_OnFail_1E7B4EA94EB1E25E604B80A4114A24A4_Params
{
	class UTexture2DDynamic**                          Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Invitation.BP_Invitation_C.OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4
struct UBP_Invitation_C_OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4_Params
{
	class UTexture2DDynamic**                          Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Invitation.BP_Invitation_C.Construct
struct UBP_Invitation_C_Construct_Params
{
};

// Function BP_Invitation.BP_Invitation_C.Tick
struct UBP_Invitation_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Invitation.BP_Invitation_C.OnReadyImage
struct UBP_Invitation_C_OnReadyImage_Params
{
	class FString*                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UBP_Invitation_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UBP_Invitation_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function BP_Invitation.BP_Invitation_C.BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UBP_Invitation_C_BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function BP_Invitation.BP_Invitation_C.HideUIDelayed
struct UBP_Invitation_C_HideUIDelayed_Params
{
};

// Function BP_Invitation.BP_Invitation_C.OnAcceptInvite
struct UBP_Invitation_C_OnAcceptInvite_Params
{
};

// Function BP_Invitation.BP_Invitation_C.OnRejectInvite
struct UBP_Invitation_C_OnRejectInvite_Params
{
};

// Function BP_Invitation.BP_Invitation_C.OnIgnoreInvite
struct UBP_Invitation_C_OnIgnoreInvite_Params
{
};

// Function BP_Invitation.BP_Invitation_C.ExecuteUbergraph_BP_Invitation
struct UBP_Invitation_C_ExecuteUbergraph_BP_Invitation_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Invitation.BP_Invitation_C.ImageReady__DelegateSignature
struct UBP_Invitation_C_ImageReady__DelegateSignature_Params
{
	class FString*                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
