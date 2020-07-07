// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpaceRig_Bartender_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCableAnchors
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::SetCableAnchors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCableAnchors");

	ABP_SpaceRig_Bartender_C_SetCableAnchors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PayCredits
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Purchased                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::PayCredits(class APlayerCharacter** user, int* amount, bool* Purchased)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PayCredits");

	ABP_SpaceRig_Bartender_C_PayCredits_Params params;
	params.user = user;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Purchased != nullptr)
		*Purchased = params.Purchased;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Spawn Mixer Beer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 ControlEventID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           MixerCooldownToSet             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDrinkableDataAsset**    OrderedDrink                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 Ordering_Player                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText*                  Announcement_Text              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           SpawnSuccessful                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::Spawn_Mixer_Beer(class FString* ControlEventID, int* MixerCooldownToSet, class UDrinkableDataAsset** OrderedDrink, class FString* Ordering_Player, struct FText* Announcement_Text, bool* SpawnSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Spawn Mixer Beer");

	ABP_SpaceRig_Bartender_C_Spawn_Mixer_Beer_Params params;
	params.ControlEventID = ControlEventID;
	params.MixerCooldownToSet = MixerCooldownToSet;
	params.OrderedDrink = OrderedDrink;
	params.Ordering_Player = Ordering_Player;
	params.Announcement_Text = Announcement_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnSuccessful != nullptr)
		*SpawnSuccessful = params.SpawnSuccessful;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayGreeting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::PlayGreeting(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayGreeting");

	ABP_SpaceRig_Bartender_C_PlayGreeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::PlayAnim(class UAnimMontage** MontageToPlay, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAnim");

	ABP_SpaceRig_Bartender_C_PlayAnim_Params params;
	params.MontageToPlay = MontageToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayNegative
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::PlayNegative(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayNegative");

	ABP_SpaceRig_Bartender_C_PlayNegative_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAffirmative
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::PlayAffirmative(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAffirmative");

	ABP_SpaceRig_Bartender_C_PlayAffirmative_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Pour
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C**        DrinkBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PourDuration                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::Pour(class ABP_DrinksBox_C** DrinkBox, float* PourDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Pour");

	ABP_SpaceRig_Bartender_C_Pour_Params params;
	params.DrinkBox = DrinkBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PourDuration != nullptr)
		*PourDuration = params.PourDuration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetBartenderLightMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface**     SourceMaterial                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::SetBartenderLightMaterial(class UMaterialInterface** SourceMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetBartenderLightMaterial");

	ABP_SpaceRig_Bartender_C_SetBartenderLightMaterial_Params params;
	params.SourceMaterial = SourceMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnRep_CurrentCustomerState
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::OnRep_CurrentCustomerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnRep_CurrentCustomerState");

	ABP_SpaceRig_Bartender_C_OnRep_CurrentCustomerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCustomer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Customer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::SetCustomer(class APlayerCharacter** Customer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCustomer");

	ABP_SpaceRig_Bartender_C_SetCustomer_Params params;
	params.Customer = Customer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.CanOrderNewRound
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanOrder                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::CanOrderNewRound(bool* CanOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.CanOrderNewRound");

	ABP_SpaceRig_Bartender_C_CanOrderNewRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanOrder != nullptr)
		*CanOrder = params.CanOrder;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.UserConstructionScript");

	ABP_SpaceRig_Bartender_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_SpaceRig_Bartender_C::LerpTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__FinishedFunc");

	ABP_SpaceRig_Bartender_C_LerpTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_SpaceRig_Bartender_C::LerpTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__UpdateFunc");

	ABP_SpaceRig_Bartender_C_LerpTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_SpaceRig_Bartender_C::FinishedTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__FinishedFunc");

	ABP_SpaceRig_Bartender_C_FinishedTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_SpaceRig_Bartender_C::FinishedTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__UpdateFunc");

	ABP_SpaceRig_Bartender_C_FinishedTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.MixerButtonEvt_giveBeer3_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SpaceRig_Bartender_C::MixerButtonEvt_giveBeer3_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.MixerButtonEvt_giveBeer3_Pressed_ID0");

	ABP_SpaceRig_Bartender_C_MixerButtonEvt_giveBeer3_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.MixerButtonEvt_giveBeer1_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SpaceRig_Bartender_C::MixerButtonEvt_giveBeer1_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.MixerButtonEvt_giveBeer1_Pressed_ID0");

	ABP_SpaceRig_Bartender_C_MixerButtonEvt_giveBeer1_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.MixerButtonEvt_giveBeer2_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SpaceRig_Bartender_C::MixerButtonEvt_giveBeer2_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.MixerButtonEvt_giveBeer2_Pressed_ID0");

	ABP_SpaceRig_Bartender_C_MixerButtonEvt_giveBeer2_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.MixerButtonEvt_giveBeer4_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SpaceRig_Bartender_C::MixerButtonEvt_giveBeer4_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.MixerButtonEvt_giveBeer4_Pressed_ID0");

	ABP_SpaceRig_Bartender_C_MixerButtonEvt_giveBeer4_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_SpaceRig_Bartender_C_BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ReceiveBeginPlay");

	ABP_SpaceRig_Bartender_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");

	ABP_SpaceRig_Bartender_C_BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LookAtCustomer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Customer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::LookAtCustomer(class APlayerCharacter** Customer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LookAtCustomer");

	ABP_SpaceRig_Bartender_C_LookAtCustomer_Params params;
	params.Customer = Customer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnPlayerLeave_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::OnPlayerLeave_Event(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnPlayerLeave_Event");

	ABP_SpaceRig_Bartender_C_OnPlayerLeave_Event_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Update Bartender Lights
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::Update_Bartender_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Update Bartender Lights");

	ABP_SpaceRig_Bartender_C_Update_Bartender_Lights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SpawnDrinks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    Drinable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::SpawnDrinks(class UDrinkableDataAsset** Drinable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SpawnDrinks");

	ABP_SpaceRig_Bartender_C_SpawnDrinks_Params params;
	params.Drinable = Drinable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Lerp To
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             PourTransform                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::Lerp_To(struct FTransform* PourTransform, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Lerp To");

	ABP_SpaceRig_Bartender_C_Lerp_To_Params params;
	params.PourTransform = PourTransform;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Server Spawn Next Drink
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::Server_Spawn_Next_Drink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Server Spawn Next Drink");

	ABP_SpaceRig_Bartender_C_Server_Spawn_Next_Drink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnAvailableForNewDrink_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C**        DrinkBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::OnAvailableForNewDrink_Event(class ABP_DrinksBox_C** DrinkBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnAvailableForNewDrink_Event");

	ABP_SpaceRig_Bartender_C_OnAvailableForNewDrink_Event_Params params;
	params.DrinkBox = DrinkBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnDrinkReady_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C**        DrinkBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::OnDrinkReady_Event(class ABP_DrinksBox_C** DrinkBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnDrinkReady_Event");

	ABP_SpaceRig_Bartender_C_OnDrinkReady_Event_Params params;
	params.DrinkBox = DrinkBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Return To Idle
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::Return_To_Idle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Return To Idle");

	ABP_SpaceRig_Bartender_C_Return_To_Idle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.All_BeginSpawnDrinks
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          PlayFireworks                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::All_BeginSpawnDrinks(bool* PlayFireworks)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.All_BeginSpawnDrinks");

	ABP_SpaceRig_Bartender_C_All_BeginSpawnDrinks_Params params;
	params.PlayFireworks = PlayFireworks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Client Spawn Next Drink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C**        DrinkBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::Client_Spawn_Next_Drink(class ABP_DrinksBox_C** DrinkBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Client Spawn Next Drink");

	ABP_SpaceRig_Bartender_C_Client_Spawn_Next_Drink_Params params;
	params.DrinkBox = DrinkBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_SpaceRig_Bartender_C_BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Look Towards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::Look_Towards(class AActor** Actor, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Look Towards");

	ABP_SpaceRig_Bartender_C_Look_Towards_Params params;
	params.Actor = Actor;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Init Background Menu
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::Init_Background_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Init Background Menu");

	ABP_SpaceRig_Bartender_C_Init_Background_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Toggle Fireworks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::Toggle_Fireworks(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Toggle Fireworks");

	ABP_SpaceRig_Bartender_C_Toggle_Fireworks_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.InitializeMixer
// (BlueprintCallable, BlueprintEvent)

void ABP_SpaceRig_Bartender_C::InitializeMixer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.InitializeMixer");

	ABP_SpaceRig_Bartender_C_InitializeMixer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnUsableChanged_Mixer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::OnUsableChanged_Mixer(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnUsableChanged_Mixer");

	ABP_SpaceRig_Bartender_C_OnUsableChanged_Mixer_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.TipBartender
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::TipBartender(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.TipBartender");

	ABP_SpaceRig_Bartender_C_TipBartender_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ExecuteUbergraph_BP_SpaceRig_Bartender
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpaceRig_Bartender_C::ExecuteUbergraph_BP_SpaceRig_Bartender(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ExecuteUbergraph_BP_SpaceRig_Bartender");

	ABP_SpaceRig_Bartender_C_ExecuteUbergraph_BP_SpaceRig_Bartender_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
