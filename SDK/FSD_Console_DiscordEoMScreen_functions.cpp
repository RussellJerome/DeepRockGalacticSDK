// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Console_DiscordEoMScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ClearText
// (Public, BlueprintCallable, BlueprintEvent)

void UConsole_DiscordEoMScreen_C::ClearText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ClearText");

	UConsole_DiscordEoMScreen_C_ClearText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnFail_D5557812434CB42B270037821C78EAB5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic**      Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordEoMScreen_C::OnFail_D5557812434CB42B270037821C78EAB5(class UTexture2DDynamic** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnFail_D5557812434CB42B270037821C78EAB5");

	UConsole_DiscordEoMScreen_C_OnFail_D5557812434CB42B270037821C78EAB5_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnSuccess_D5557812434CB42B270037821C78EAB5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic**      Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordEoMScreen_C::OnSuccess_D5557812434CB42B270037821C78EAB5(class UTexture2DDynamic** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnSuccess_D5557812434CB42B270037821C78EAB5");

	UConsole_DiscordEoMScreen_C_OnSuccess_D5557812434CB42B270037821C78EAB5_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsole_DiscordEoMScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Construct");

	UConsole_DiscordEoMScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordEoMScreen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Tick");

	UConsole_DiscordEoMScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.UpdateUI
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiscordServerData*     discordServerCount             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConsole_DiscordEoMScreen_C::UpdateUI(struct FDiscordServerData* discordServerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.UpdateUI");

	UConsole_DiscordEoMScreen_C_UpdateUI_Params params;
	params.discordServerCount = discordServerCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Do Running Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock**             Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UConsole_DiscordEoMScreen_C::Do_Running_Text(struct FText* Text, int* Index, class UTextBlock** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Do Running Text");

	UConsole_DiscordEoMScreen_C_Do_Running_Text_Params params;
	params.Text = Text;
	params.Index = Index;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordEoMScreen_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.PreConstruct");

	UConsole_DiscordEoMScreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Init
// (BlueprintCallable, BlueprintEvent)

void UConsole_DiscordEoMScreen_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Init");

	UConsole_DiscordEoMScreen_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Stop
// (BlueprintCallable, BlueprintEvent)

void UConsole_DiscordEoMScreen_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Stop");

	UConsole_DiscordEoMScreen_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.On EoM Data Received
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasEoM                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordEoMScreen_C::On_EoM_Data_Received(bool* HasEoM)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.On EoM Data Received");

	UConsole_DiscordEoMScreen_C_On_EoM_Data_Received_Params params;
	params.HasEoM = HasEoM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OpenDescriptions
// (BlueprintCallable, BlueprintEvent)

void UConsole_DiscordEoMScreen_C::OpenDescriptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OpenDescriptions");

	UConsole_DiscordEoMScreen_C_OpenDescriptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Name Running Effect
// (BlueprintCallable, BlueprintEvent)

void UConsole_DiscordEoMScreen_C::Player_Name_Running_Effect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Name Running Effect");

	UConsole_DiscordEoMScreen_C_Player_Name_Running_Effect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Flavor Text Running Effect
// (BlueprintCallable, BlueprintEvent)

void UConsole_DiscordEoMScreen_C::Player_Flavor_Text_Running_Effect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Flavor Text Running Effect");

	UConsole_DiscordEoMScreen_C_Player_Flavor_Text_Running_Effect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ExecuteUbergraph_Console_DiscordEoMScreen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsole_DiscordEoMScreen_C::ExecuteUbergraph_Console_DiscordEoMScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ExecuteUbergraph_Console_DiscordEoMScreen");

	UConsole_DiscordEoMScreen_C_ExecuteUbergraph_Console_DiscordEoMScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ScreenChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UConsole_DiscordEoMScreen_C::ScreenChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ScreenChanged__DelegateSignature");

	UConsole_DiscordEoMScreen_C_ScreenChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
