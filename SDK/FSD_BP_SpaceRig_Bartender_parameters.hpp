#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpaceRig_Bartender_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCableAnchors
struct ABP_SpaceRig_Bartender_C_SetCableAnchors_Params
{
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PayCredits
struct ABP_SpaceRig_Bartender_C_PayCredits_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Purchased;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Spawn Mixer Beer
struct ABP_SpaceRig_Bartender_C_Spawn_Mixer_Beer_Params
{
	class FString*                                     ControlEventID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               MixerCooldownToSet;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDrinkableDataAsset**                        OrderedDrink;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     Ordering_Player;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText*                                      Announcement_Text;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               SpawnSuccessful;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayGreeting
struct ABP_SpaceRig_Bartender_C_PlayGreeting_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAnim
struct ABP_SpaceRig_Bartender_C_PlayAnim_Params
{
	class UAnimMontage**                               MontageToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayNegative
struct ABP_SpaceRig_Bartender_C_PlayNegative_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAffirmative
struct ABP_SpaceRig_Bartender_C_PlayAffirmative_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Pour
struct ABP_SpaceRig_Bartender_C_Pour_Params
{
	class ABP_DrinksBox_C**                            DrinkBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PourDuration;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetBartenderLightMaterial
struct ABP_SpaceRig_Bartender_C_SetBartenderLightMaterial_Params
{
	class UMaterialInterface**                         SourceMaterial;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnRep_CurrentCustomerState
struct ABP_SpaceRig_Bartender_C_OnRep_CurrentCustomerState_Params
{
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCustomer
struct ABP_SpaceRig_Bartender_C_SetCustomer_Params
{
	class APlayerCharacter**                           Customer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.CanOrderNewRound
struct ABP_SpaceRig_Bartender_C_CanOrderNewRound_Params
{
	bool                                               CanOrder;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.UserConstructionScript
struct ABP_SpaceRig_Bartender_C_UserConstructionScript_Params
{
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__FinishedFunc
struct ABP_SpaceRig_Bartender_C_LerpTimeline__FinishedFunc_Params
{
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__UpdateFunc
struct ABP_SpaceRig_Bartender_C_LerpTimeline__UpdateFunc_Params
{
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__FinishedFunc
struct ABP_SpaceRig_Bartender_C_FinishedTimeline__FinishedFunc_Params
{
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__UpdateFunc
struct ABP_SpaceRig_Bartender_C_FinishedTimeline__UpdateFunc_Params
{
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.MixerButtonEvt_giveBeer3_Pressed_ID0
struct ABP_SpaceRig_Bartender_C_MixerButtonEvt_giveBeer3_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.MixerButtonEvt_giveBeer1_Pressed_ID0
struct ABP_SpaceRig_Bartender_C_MixerButtonEvt_giveBeer1_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.MixerButtonEvt_giveBeer2_Pressed_ID0
struct ABP_SpaceRig_Bartender_C_MixerButtonEvt_giveBeer2_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.MixerButtonEvt_giveBeer4_Pressed_ID0
struct ABP_SpaceRig_Bartender_C_MixerButtonEvt_giveBeer4_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct ABP_SpaceRig_Bartender_C_BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ReceiveBeginPlay
struct ABP_SpaceRig_Bartender_C_ReceiveBeginPlay_Params
{
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
struct ABP_SpaceRig_Bartender_C_BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LookAtCustomer
struct ABP_SpaceRig_Bartender_C_LookAtCustomer_Params
{
	class APlayerCharacter**                           Customer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnPlayerLeave_Event
struct ABP_SpaceRig_Bartender_C_OnPlayerLeave_Event_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Update Bartender Lights
struct ABP_SpaceRig_Bartender_C_Update_Bartender_Lights_Params
{
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SpawnDrinks
struct ABP_SpaceRig_Bartender_C_SpawnDrinks_Params
{
	class UDrinkableDataAsset**                        Drinable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Lerp To
struct ABP_SpaceRig_Bartender_C_Lerp_To_Params
{
	struct FTransform*                                 PourTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Server Spawn Next Drink
struct ABP_SpaceRig_Bartender_C_Server_Spawn_Next_Drink_Params
{
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnAvailableForNewDrink_Event
struct ABP_SpaceRig_Bartender_C_OnAvailableForNewDrink_Event_Params
{
	class ABP_DrinksBox_C**                            DrinkBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnDrinkReady_Event
struct ABP_SpaceRig_Bartender_C_OnDrinkReady_Event_Params
{
	class ABP_DrinksBox_C**                            DrinkBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Return To Idle
struct ABP_SpaceRig_Bartender_C_Return_To_Idle_Params
{
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.All_BeginSpawnDrinks
struct ABP_SpaceRig_Bartender_C_All_BeginSpawnDrinks_Params
{
	bool*                                              PlayFireworks;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Client Spawn Next Drink
struct ABP_SpaceRig_Bartender_C_Client_Spawn_Next_Drink_Params
{
	class ABP_DrinksBox_C**                            DrinkBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_SpaceRig_Bartender_C_BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Look Towards
struct ABP_SpaceRig_Bartender_C_Look_Towards_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Init Background Menu
struct ABP_SpaceRig_Bartender_C_Init_Background_Menu_Params
{
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Toggle Fireworks
struct ABP_SpaceRig_Bartender_C_Toggle_Fireworks_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.InitializeMixer
struct ABP_SpaceRig_Bartender_C_InitializeMixer_Params
{
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnUsableChanged_Mixer
struct ABP_SpaceRig_Bartender_C_OnUsableChanged_Mixer_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.TipBartender
struct ABP_SpaceRig_Bartender_C_TipBartender_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ExecuteUbergraph_BP_SpaceRig_Bartender
struct ABP_SpaceRig_Bartender_C_ExecuteUbergraph_BP_SpaceRig_Bartender_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
