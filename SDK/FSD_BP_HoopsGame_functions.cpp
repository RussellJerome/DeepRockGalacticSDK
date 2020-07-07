// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_HoopsGame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HoopsGame.BP_HoopsGame_C.OnRep_Scores
// (BlueprintCallable, BlueprintEvent)

void ABP_HoopsGame_C::OnRep_Scores()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.OnRep_Scores");

	ABP_HoopsGame_C_OnRep_Scores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoopsGame.BP_HoopsGame_C.GetBarrelScoreData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Phys_Barrel01_C**    Barrel                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               Audio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABP_Phys_Barrel01_C*     OutBarrel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Points                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HoopsGame_C::GetBarrelScoreData(class ABP_Phys_Barrel01_C** Barrel, class USoundCue** Audio, class ABP_Phys_Barrel01_C** OutBarrel, int* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.GetBarrelScoreData");

	ABP_HoopsGame_C_GetBarrelScoreData_Params params;
	params.Barrel = Barrel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Audio != nullptr)
		*Audio = params.Audio;
	if (OutBarrel != nullptr)
		*OutBarrel = params.OutBarrel;
	if (Points != nullptr)
		*Points = params.Points;
}


// Function BP_HoopsGame.BP_HoopsGame_C.OnRep_ComboMultiplier
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HoopsGame_C::OnRep_ComboMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.OnRep_ComboMultiplier");

	ABP_HoopsGame_C_OnRep_ComboMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoopsGame.BP_HoopsGame_C.OnRep_CurrentScore
// (BlueprintCallable, BlueprintEvent)

void ABP_HoopsGame_C::OnRep_CurrentScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.OnRep_CurrentScore");

	ABP_HoopsGame_C_OnRep_CurrentScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoopsGame.BP_HoopsGame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HoopsGame_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.ReceiveBeginPlay");

	ABP_HoopsGame_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_HoopsGame_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_HoopsGame_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_HoopsGame.BP_HoopsGame_C.Restart
// (BlueprintCallable, BlueprintEvent)

void ABP_HoopsGame_C::Restart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.Restart");

	ABP_HoopsGame_C_Restart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoopsGame_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature");

	ABP_HoopsGame_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoopsGame.BP_HoopsGame_C.StoreScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoopsGame_C::StoreScore(int* NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.StoreScore");

	ABP_HoopsGame_C_StoreScore_Params params;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__FailCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_HoopsGame_C::BndEvt__FailCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__FailCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_HoopsGame_C_BndEvt__FailCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_HoopsGame.BP_HoopsGame_C.ChangeDirection
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          RightMovement                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoopsGame_C::ChangeDirection(bool* RightMovement, float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.ChangeDirection");

	ABP_HoopsGame_C_ChangeDirection_Params params;
	params.RightMovement = RightMovement;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoopsGame.BP_HoopsGame_C.Cheat_ToggleHoopGameMovement
// (BlueprintCallable, BlueprintEvent)

void ABP_HoopsGame_C::Cheat_ToggleHoopGameMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.Cheat_ToggleHoopGameMovement");

	ABP_HoopsGame_C_Cheat_ToggleHoopGameMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoopsGame.BP_HoopsGame_C.Set Latest Barrel kicker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Kicked_by                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoopsGame_C::Set_Latest_Barrel_kicker(class APlayerCharacter** Kicked_by)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.Set Latest Barrel kicker");

	ABP_HoopsGame_C_Set_Latest_Barrel_kicker_Params params;
	params.Kicked_by = Kicked_by;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoopsGame.BP_HoopsGame_C.On Barrel In Hoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Phys_Barrel01_C**    Barrel                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoopsGame_C::On_Barrel_In_Hoop(class ABP_Phys_Barrel01_C** Barrel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.On Barrel In Hoop");

	ABP_HoopsGame_C_On_Barrel_In_Hoop_Params params;
	params.Barrel = Barrel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoopsGame.BP_HoopsGame_C.On Barglass In Hoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABar_Glass_Physics_C**   Glass                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoopsGame_C::On_Barglass_In_Hoop(class ABar_Glass_Physics_C** Glass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.On Barglass In Hoop");

	ABP_HoopsGame_C_On_Barglass_In_Hoop_Params params;
	params.Glass = Glass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoopsGame.BP_HoopsGame_C.On Player In Hoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C**  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoopsGame_C::On_Player_In_Hoop(class ABP_PlayerCharacter_C** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.On Player In Hoop");

	ABP_HoopsGame_C_On_Player_In_Hoop_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoopsGame.BP_HoopsGame_C.ExecuteUbergraph_BP_HoopsGame
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoopsGame_C::ExecuteUbergraph_BP_HoopsGame(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.ExecuteUbergraph_BP_HoopsGame");

	ABP_HoopsGame_C_ExecuteUbergraph_BP_HoopsGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
