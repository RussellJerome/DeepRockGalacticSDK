// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Console_DiscordScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Console_DiscordScreen.Console_DiscordScreen_C.Handle Community Goal Content state
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConsole_DiscordScreen_C::Handle_Community_Goal_Content_state()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Handle Community Goal Content state");

	UConsole_DiscordScreen_C_Handle_Community_Goal_Content_state_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.Update Content Switcher Content
// (Public, BlueprintCallable, BlueprintEvent)

void UConsole_DiscordScreen_C::Update_Content_Switcher_Content()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Update Content Switcher Content");

	UConsole_DiscordScreen_C_Update_Content_Switcher_Content_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.MinersUnionTier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DSMUTier                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordScreen_C::MinersUnionTier(float* DSMUTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.MinersUnionTier");

	UConsole_DiscordScreen_C_MinersUnionTier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DSMUTier != nullptr)
		*DSMUTier = params.DSMUTier;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.Set Goals
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          Goals                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Values                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Members                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UConsole_DiscordScreen_C::Set_Goals(TArray<class FString>* Goals, TArray<float>* Values, TArray<int>* Members)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Set Goals");

	UConsole_DiscordScreen_C_Set_Goals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Goals != nullptr)
		*Goals = params.Goals;
	if (Values != nullptr)
		*Values = params.Values;
	if (Members != nullptr)
		*Members = params.Members;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.StopAllLogos
// (Public, BlueprintCallable, BlueprintEvent)

void UConsole_DiscordScreen_C::StopAllLogos()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.StopAllLogos");

	UConsole_DiscordScreen_C_StopAllLogos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.FactionLogosOn
// (Public, BlueprintCallable, BlueprintEvent)

void UConsole_DiscordScreen_C::FactionLogosOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.FactionLogosOn");

	UConsole_DiscordScreen_C_FactionLogosOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.SetUsable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Usable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordScreen_C::SetUsable(bool* Usable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.SetUsable");

	UConsole_DiscordScreen_C_SetUsable_Params params;
	params.Usable = Usable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.SetScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Appear                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordScreen_C::SetScreen(bool* Appear, bool* force)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.SetScreen");

	UConsole_DiscordScreen_C_SetScreen_Params params;
	params.Appear = Appear;
	params.force = force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.LogoOn
// (Public, BlueprintCallable, BlueprintEvent)

void UConsole_DiscordScreen_C::LogoOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.LogoOn");

	UConsole_DiscordScreen_C_LogoOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.CreditsOn
// (Public, BlueprintCallable, BlueprintEvent)

void UConsole_DiscordScreen_C::CreditsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.CreditsOn");

	UConsole_DiscordScreen_C_CreditsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.ClearTextLabels
// (Public, BlueprintCallable, BlueprintEvent)

void UConsole_DiscordScreen_C::ClearTextLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.ClearTextLabels");

	UConsole_DiscordScreen_C_ClearTextLabels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.StartLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         LoadingTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordScreen_C::StartLoad(float* LoadingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.StartLoad");

	UConsole_DiscordScreen_C_StartLoad_Params params;
	params.LoadingTime = LoadingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.RefreshUI
// (Public, BlueprintCallable, BlueprintEvent)

void UConsole_DiscordScreen_C::RefreshUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.RefreshUI");

	UConsole_DiscordScreen_C_RefreshUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsole_DiscordScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Construct");

	UConsole_DiscordScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordScreen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Tick");

	UConsole_DiscordScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.UpdateUI
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiscordServerData*     discordServerCount             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConsole_DiscordScreen_C::UpdateUI(struct FDiscordServerData* discordServerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.UpdateUI");

	UConsole_DiscordScreen_C_UpdateUI_Params params;
	params.discordServerCount = discordServerCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.UserInServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          isInServer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordScreen_C::UserInServer(bool* isInServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.UserInServer");

	UConsole_DiscordScreen_C_UserInServer_Params params;
	params.isInServer = isInServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.Do Running Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock**             Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UConsole_DiscordScreen_C::Do_Running_Text(struct FText* Text, int* Index, class UTextBlock** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Do Running Text");

	UConsole_DiscordScreen_C_Do_Running_Text_Params params;
	params.Text = Text;
	params.Index = Index;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordScreen_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.PreConstruct");

	UConsole_DiscordScreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.Init
// (BlueprintCallable, BlueprintEvent)

void UConsole_DiscordScreen_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Init");

	UConsole_DiscordScreen_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.Stop
// (BlueprintCallable, BlueprintEvent)

void UConsole_DiscordScreen_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.Stop");

	UConsole_DiscordScreen_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.TimedUserRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordScreen_C::TimedUserRequest(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.TimedUserRequest");

	UConsole_DiscordScreen_C_TimedUserRequest_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.RequestUserInByTime
// (BlueprintCallable, BlueprintEvent)

void UConsole_DiscordScreen_C::RequestUserInByTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.RequestUserInByTime");

	UConsole_DiscordScreen_C_RequestUserInByTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.OnFactionsDataRecievedEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>*         Goals                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>*                 Values                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>*                   Members                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UConsole_DiscordScreen_C::OnFactionsDataRecievedEvent(TArray<class FString>* Goals, TArray<float>* Values, TArray<int>* Members)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.OnFactionsDataRecievedEvent");

	UConsole_DiscordScreen_C_OnFactionsDataRecievedEvent_Params params;
	params.Goals = Goals;
	params.Values = Values;
	params.Members = Members;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.OnCGSData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          stateReceived                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordScreen_C::OnCGSData(bool* stateReceived)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.OnCGSData");

	UConsole_DiscordScreen_C_OnCGSData_Params params;
	params.stateReceived = stateReceived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.OnCheckUI
// (BlueprintCallable, BlueprintEvent)

void UConsole_DiscordScreen_C::OnCheckUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.OnCheckUI");

	UConsole_DiscordScreen_C_OnCheckUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.OnGoalInitialized
// (BlueprintCallable, BlueprintEvent)

void UConsole_DiscordScreen_C::OnGoalInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.OnGoalInitialized");

	UConsole_DiscordScreen_C_OnGoalInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.ExecuteUbergraph_Console_DiscordScreen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordScreen_C::ExecuteUbergraph_Console_DiscordScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.ExecuteUbergraph_Console_DiscordScreen");

	UConsole_DiscordScreen_C_ExecuteUbergraph_Console_DiscordScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordScreen.Console_DiscordScreen_C.ScreenChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UConsole_DiscordScreen_C::ScreenChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordScreen.Console_DiscordScreen_C.ScreenChanged__DelegateSignature");

	UConsole_DiscordScreen_C_ScreenChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
