// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__Menu_Jobs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _Menu_Jobs._Menu_Jobs_C.HasCompletedIntro
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutCompleted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_Menu_Jobs_C::HasCompletedIntro(bool* OutCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.HasCompletedIntro");

	U_Menu_Jobs_C_HasCompletedIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCompleted != nullptr)
		*OutCompleted = params.OutCompleted;
}


// Function _Menu_Jobs._Menu_Jobs_C.CreateJobWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCampaign**              Campaign                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsWeekly                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWND_Jobs_Entry_Base_C*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWND_Jobs_Entry_Base_C* U_Menu_Jobs_C::CreateJobWidget(class APlayerController** OwningPlayer, class UCampaign** Campaign, bool* IsWeekly)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.CreateJobWidget");

	U_Menu_Jobs_C_CreateJobWidget_Params params;
	params.OwningPlayer = OwningPlayer;
	params.Campaign = Campaign;
	params.IsWeekly = IsWeekly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function _Menu_Jobs._Menu_Jobs_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply U_Menu_Jobs_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.OnKeyUp");

	U_Menu_Jobs_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function _Menu_Jobs._Menu_Jobs_C.RefreshJobs
// (Public, BlueprintCallable, BlueprintEvent)

void U_Menu_Jobs_C::RefreshJobs()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.RefreshJobs");

	U_Menu_Jobs_C_RefreshJobs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _Menu_Jobs._Menu_Jobs_C.JobUnfolded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWND_Jobs_Entry_Base_C** NewEntry                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void U_Menu_Jobs_C::JobUnfolded(class UWND_Jobs_Entry_Base_C** NewEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.JobUnfolded");

	U_Menu_Jobs_C_JobUnfolded_Params params;
	params.NewEntry = NewEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _Menu_Jobs._Menu_Jobs_C.AddJobEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCampaign**              Campaign                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_Menu_Jobs_C::AddJobEntry(class UCampaign** Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.AddJobEntry");

	U_Menu_Jobs_C_AddJobEntry_Params params;
	params.Campaign = Campaign;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _Menu_Jobs._Menu_Jobs_C.GetFSDPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFSDPlayerController*    AsFSDPlayer_Controller         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_Menu_Jobs_C::GetFSDPlayer(class AFSDPlayerController** AsFSDPlayer_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.GetFSDPlayer");

	U_Menu_Jobs_C_GetFSDPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFSDPlayer_Controller != nullptr)
		*AsFSDPlayer_Controller = params.AsFSDPlayer_Controller;
}


// Function _Menu_Jobs._Menu_Jobs_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void U_Menu_Jobs_C::BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	U_Menu_Jobs_C_BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _Menu_Jobs._Menu_Jobs_C.OnShown
// (Event, Public, BlueprintEvent)

void U_Menu_Jobs_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.OnShown");

	U_Menu_Jobs_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _Menu_Jobs._Menu_Jobs_C.Back
// (BlueprintCallable, BlueprintEvent)

void U_Menu_Jobs_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.Back");

	U_Menu_Jobs_C_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _Menu_Jobs._Menu_Jobs_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_Menu_Jobs_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.PreConstruct");

	U_Menu_Jobs_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _Menu_Jobs._Menu_Jobs_C.Scroll To Unfolded
// (BlueprintCallable, BlueprintEvent)

void U_Menu_Jobs_C::Scroll_To_Unfolded()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.Scroll To Unfolded");

	U_Menu_Jobs_C_Scroll_To_Unfolded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _Menu_Jobs._Menu_Jobs_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void U_Menu_Jobs_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.Construct");

	U_Menu_Jobs_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _Menu_Jobs._Menu_Jobs_C.OnCampaignCompleted_Event
// (BlueprintCallable, BlueprintEvent)

void U_Menu_Jobs_C::OnCampaignCompleted_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.OnCampaignCompleted_Event");

	U_Menu_Jobs_C_OnCampaignCompleted_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _Menu_Jobs._Menu_Jobs_C.BuildList
// (BlueprintCallable, BlueprintEvent)

void U_Menu_Jobs_C::BuildList()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.BuildList");

	U_Menu_Jobs_C_BuildList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _Menu_Jobs._Menu_Jobs_C.Unfold If Single Assignement
// (BlueprintCallable, BlueprintEvent)

void U_Menu_Jobs_C::Unfold_If_Single_Assignement()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.Unfold If Single Assignement");

	U_Menu_Jobs_C_Unfold_If_Single_Assignement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _Menu_Jobs._Menu_Jobs_C.ExecuteUbergraph__Menu_Jobs
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_Menu_Jobs_C::ExecuteUbergraph__Menu_Jobs(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.ExecuteUbergraph__Menu_Jobs");

	U_Menu_Jobs_C_ExecuteUbergraph__Menu_Jobs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
