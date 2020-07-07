// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CommunityGoal_ConsoleScreenV2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.UpdateTitle
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoal_ConsoleScreenV2_C::UpdateTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.UpdateTitle");

	UITM_CommunityGoal_ConsoleScreenV2_C_UpdateTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.UpdateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoal_ConsoleScreenV2_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.UpdateIcon");

	UITM_CommunityGoal_ConsoleScreenV2_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetFaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoal_ConsoleScreenV2_C::SetFaction(class UCommunityGoalFaction** Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetFaction");

	UITM_CommunityGoal_ConsoleScreenV2_C_SetFaction_Params params;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.ResetAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoal_ConsoleScreenV2_C::ResetAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.ResetAnim");

	UITM_CommunityGoal_ConsoleScreenV2_C_ResetAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetCommunityGoal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Goal                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float*                         Bronze_Progress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Silver_Progress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Gold_Progress                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoal_ConsoleScreenV2_C::SetCommunityGoal(struct FText* Goal, float* Bronze_Progress, float* Silver_Progress, float* Gold_Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetCommunityGoal");

	UITM_CommunityGoal_ConsoleScreenV2_C_SetCommunityGoal_Params params;
	params.Goal = Goal;
	params.Bronze_Progress = Bronze_Progress;
	params.Silver_Progress = Silver_Progress;
	params.Gold_Progress = Gold_Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoal_ConsoleScreenV2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.Tick");

	UITM_CommunityGoal_ConsoleScreenV2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoal_ConsoleScreenV2_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.PreConstruct");

	UITM_CommunityGoal_ConsoleScreenV2_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetGoal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 GoalID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float*                         GoalValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Members                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoal_ConsoleScreenV2_C::SetGoal(class FString* GoalID, float* GoalValue, int* Members)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetGoal");

	UITM_CommunityGoal_ConsoleScreenV2_C_SetGoal_Params params;
	params.GoalID = GoalID;
	params.GoalValue = GoalValue;
	params.Members = Members;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_CommunityGoal_ConsoleScreenV2_C::BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UITM_CommunityGoal_ConsoleScreenV2_C_BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_CommunityGoal_ConsoleScreenV2_C::BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UITM_CommunityGoal_ConsoleScreenV2_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.CheckFaction
// (BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoal_ConsoleScreenV2_C::CheckFaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.CheckFaction");

	UITM_CommunityGoal_ConsoleScreenV2_C_CheckFaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenV2
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoal_ConsoleScreenV2_C::ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenV2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenV2");

	UITM_CommunityGoal_ConsoleScreenV2_C_ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenV2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.HoverEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_CommunityGoal_ConsoleScreenV2_C::HoverEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.HoverEnded__DelegateSignature");

	UITM_CommunityGoal_ConsoleScreenV2_C_HoverEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.HoverStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommunityGoal**         Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CommunityGoal_ConsoleScreenV2_C::HoverStarted__DelegateSignature(class UCommunityGoalFaction** Faction, class UCommunityGoal** Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.HoverStarted__DelegateSignature");

	UITM_CommunityGoal_ConsoleScreenV2_C_HoverStarted__DelegateSignature_Params params;
	params.Faction = Faction;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
