// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_MasteryBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.Get_MasteryBarBox_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UUI_Forge_MasteryBar_C::Get_MasteryBarBox_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.Get_MasteryBarBox_ToolTipWidget_1");

	UUI_Forge_MasteryBar_C_Get_MasteryBarBox_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.StartCounting
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InStartLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InStartXP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_MasteryBar_C::StartCounting(int* InStartLevel, float* InStartXP)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.StartCounting");

	UUI_Forge_MasteryBar_C_StartCounting_Params params;
	params.InStartLevel = InStartLevel;
	params.InStartXP = InStartXP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetLerpProgress
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_MasteryBar_C::SetLerpProgress(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetLerpProgress");

	UUI_Forge_MasteryBar_C_SetLerpProgress_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetFromSaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          animate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_MasteryBar_C::SetFromSaveGame(bool* animate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetFromSaveGame");

	UUI_Forge_MasteryBar_C_SetFromSaveGame_Params params;
	params.animate = animate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_MasteryBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.PreConstruct");

	UUI_Forge_MasteryBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Forge_MasteryBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.Construct");

	UUI_Forge_MasteryBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.PlayRewardAnim
// (BlueprintCallable, BlueprintEvent)

void UUI_Forge_MasteryBar_C::PlayRewardAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.PlayRewardAnim");

	UUI_Forge_MasteryBar_C_PlayRewardAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.RewardPopUpStarted
// (BlueprintCallable, BlueprintEvent)

void UUI_Forge_MasteryBar_C::RewardPopUpStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.RewardPopUpStarted");

	UUI_Forge_MasteryBar_C_RewardPopUpStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.FinishedCounting
// (BlueprintCallable, BlueprintEvent)

void UUI_Forge_MasteryBar_C::FinishedCounting()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.FinishedCounting");

	UUI_Forge_MasteryBar_C_FinishedCounting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.ResetReward
// (BlueprintCallable, BlueprintEvent)

void UUI_Forge_MasteryBar_C::ResetReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.ResetReward");

	UUI_Forge_MasteryBar_C_ResetReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.ExecuteUbergraph_UI_Forge_MasteryBar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_MasteryBar_C::ExecuteUbergraph_UI_Forge_MasteryBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.ExecuteUbergraph_UI_Forge_MasteryBar");

	UUI_Forge_MasteryBar_C_ExecuteUbergraph_UI_Forge_MasteryBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnCountingFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_MasteryBar_C::OnCountingFinished__DelegateSignature(unsigned char* Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnCountingFinished__DelegateSignature");

	UUI_Forge_MasteryBar_C_OnCountingFinished__DelegateSignature_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
