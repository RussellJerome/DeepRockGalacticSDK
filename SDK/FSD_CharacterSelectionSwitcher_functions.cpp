// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_CharacterSelectionSwitcher_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetViewerActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ACharacterSelectionSwitcher_C::GetViewerActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetViewerActor");

	ACharacterSelectionSwitcher_C_GetViewerActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RestartVanityIdleAnimMonatge
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacterSelectionSwitcher_C::RestartVanityIdleAnimMonatge()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RestartVanityIdleAnimMonatge");

	ACharacterSelectionSwitcher_C_RestartVanityIdleAnimMonatge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.CleanVictoryPoseStuff
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacterSelectionSwitcher_C::CleanVictoryPoseStuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.CleanVictoryPoseStuff");

	ACharacterSelectionSwitcher_C_CleanVictoryPoseStuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.LoadVictoryPoseStuff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVictoryPose**           VicPose                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::LoadVictoryPoseStuff(class UVictoryPose** VicPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.LoadVictoryPoseStuff");

	ACharacterSelectionSwitcher_C_LoadVictoryPoseStuff_Params params;
	params.VicPose = VicPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.FindEndscreenActorPos
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           num_players                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::FindEndscreenActorPos(int* num_players, int* Index, class AActor** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.FindEndscreenActorPos");

	ACharacterSelectionSwitcher_C_FindEndscreenActorPos_Params params;
	params.num_players = num_players;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DestroyPreviousSceneActors
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacterSelectionSwitcher_C::DestroyPreviousSceneActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DestroyPreviousSceneActors");

	ACharacterSelectionSwitcher_C_DestroyPreviousSceneActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RotateFun
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::RotateFun(float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RotateFun");

	ACharacterSelectionSwitcher_C_RotateFun_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetPreviewItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::SetPreviewItem(class UClass** Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetPreviewItem");

	ACharacterSelectionSwitcher_C_SetPreviewItem_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SelectCameraLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharselectionCameraLocation*  Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::SelectCameraLocation(ECharselectionCameraLocation* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SelectCameraLocation");

	ACharacterSelectionSwitcher_C_SelectCameraLocation_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetActiveCharacter
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APlayerCharacter*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerCharacter* ACharacterSelectionSwitcher_C::GetActiveCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetActiveCharacter");

	ACharacterSelectionSwitcher_C_GetActiveCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RefreshCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharselectionCameraLocation*  SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::RefreshCharacter(ECharselectionCameraLocation* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RefreshCharacter");

	ACharacterSelectionSwitcher_C_RefreshCharacter_Params params;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnLoaded_516F3DE24C233C61C7A1519D88D99E0F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnLoaded_516F3DE24C233C61C7A1519D88D99E0F(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnLoaded_516F3DE24C233C61C7A1519D88D99E0F");

	ACharacterSelectionSwitcher_C_OnLoaded_516F3DE24C233C61C7A1519D88D99E0F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnLoaded_516F3DE24C233C61C7A1519D1101C230
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnLoaded_516F3DE24C233C61C7A1519D1101C230(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnLoaded_516F3DE24C233C61C7A1519D1101C230");

	ACharacterSelectionSwitcher_C_OnLoaded_516F3DE24C233C61C7A1519D1101C230_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_B0CB40174FA1135597179392BE030FD1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnNotifyEnd_B0CB40174FA1135597179392BE030FD1(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_B0CB40174FA1135597179392BE030FD1");

	ACharacterSelectionSwitcher_C_OnNotifyEnd_B0CB40174FA1135597179392BE030FD1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_B0CB40174FA1135597179392BE030FD1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnNotifyBegin_B0CB40174FA1135597179392BE030FD1(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_B0CB40174FA1135597179392BE030FD1");

	ACharacterSelectionSwitcher_C_OnNotifyBegin_B0CB40174FA1135597179392BE030FD1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_B0CB40174FA1135597179392BE030FD1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnInterrupted_B0CB40174FA1135597179392BE030FD1(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_B0CB40174FA1135597179392BE030FD1");

	ACharacterSelectionSwitcher_C_OnInterrupted_B0CB40174FA1135597179392BE030FD1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_B0CB40174FA1135597179392BE030FD1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnBlendOut_B0CB40174FA1135597179392BE030FD1(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_B0CB40174FA1135597179392BE030FD1");

	ACharacterSelectionSwitcher_C_OnBlendOut_B0CB40174FA1135597179392BE030FD1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_B0CB40174FA1135597179392BE030FD1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnCompleted_B0CB40174FA1135597179392BE030FD1(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_B0CB40174FA1135597179392BE030FD1");

	ACharacterSelectionSwitcher_C_OnCompleted_B0CB40174FA1135597179392BE030FD1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40");

	ACharacterSelectionSwitcher_C_OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40");

	ACharacterSelectionSwitcher_C_OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40");

	ACharacterSelectionSwitcher_C_OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40");

	ACharacterSelectionSwitcher_C_OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40");

	ACharacterSelectionSwitcher_C_OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943");

	ACharacterSelectionSwitcher_C_OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943");

	ACharacterSelectionSwitcher_C_OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943");

	ACharacterSelectionSwitcher_C_OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943");

	ACharacterSelectionSwitcher_C_OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943(struct FName* NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943");

	ACharacterSelectionSwitcher_C_OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACharacterSelectionSwitcher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveBeginPlay");

	ACharacterSelectionSwitcher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnShowCharacterSelector
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 NewCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECharselectionCameraLocation*  selectionLocation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnShowCharacterSelector(class UClass** NewCharacter, ECharselectionCameraLocation* selectionLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnShowCharacterSelector");

	ACharacterSelectionSwitcher_C_OnShowCharacterSelector_Params params;
	params.NewCharacter = NewCharacter;
	params.selectionLocation = selectionLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SwitchToWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           WeaponIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::SwitchToWeapon(int* WeaponIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SwitchToWeapon");

	ACharacterSelectionSwitcher_C_SwitchToWeapon_Params params;
	params.WeaponIndex = WeaponIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.EquipSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EquipSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::EquipSlot(int* EquipSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.EquipSlot");

	ACharacterSelectionSwitcher_C_EquipSlot_Params params;
	params.EquipSlot = EquipSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartIdles
// (BlueprintCallable, BlueprintEvent)

void ACharacterSelectionSwitcher_C::StartIdles()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartIdles");

	ACharacterSelectionSwitcher_C_StartIdles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetIdleBreak
// (BlueprintCallable, BlueprintEvent)

void ACharacterSelectionSwitcher_C::SetIdleBreak()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetIdleBreak");

	ACharacterSelectionSwitcher_C_SetIdleBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Hide
// (Event, Public, BlueprintEvent)

void ACharacterSelectionSwitcher_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Hide");

	ACharacterSelectionSwitcher_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Rotate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::Rotate(float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Rotate");

	ACharacterSelectionSwitcher_C_Rotate_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.VanityLoop
// (BlueprintCallable, BlueprintEvent)

void ACharacterSelectionSwitcher_C::VanityLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.VanityLoop");

	ACharacterSelectionSwitcher_C_VanityLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DoStuff
// (BlueprintCallable, BlueprintEvent)

void ACharacterSelectionSwitcher_C::DoStuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DoStuff");

	ACharacterSelectionSwitcher_C_DoStuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartVanityIdles
// (BlueprintCallable, BlueprintEvent)

void ACharacterSelectionSwitcher_C::StartVanityIdles()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartVanityIdles");

	ACharacterSelectionSwitcher_C_StartVanityIdles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVanityItemEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVanitySlot*                   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnVanityItemEquipped(EVanitySlot* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVanityItemEquipped");

	ACharacterSelectionSwitcher_C_OnVanityItemEquipped_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowViewer3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECharselectionCameraLocation*  selectionLocation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::ShowViewer3D(class UClass** Actor, ECharselectionCameraLocation* selectionLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowViewer3D");

	ACharacterSelectionSwitcher_C_ShowViewer3D_Params params;
	params.Actor = Actor;
	params.selectionLocation = selectionLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Equip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 itemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::Equip(class UClass** itemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Equip");

	ACharacterSelectionSwitcher_C_Equip_Params params;
	params.itemClass = itemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveTick");

	ACharacterSelectionSwitcher_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowEndScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterViewScene*    viewScene                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ACharacterSelectionSwitcher_C::ShowEndScreen(struct FCharacterViewScene* viewScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowEndScreen");

	ACharacterSelectionSwitcher_C_ShowEndScreen_Params params;
	params.viewScene = viewScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeLoop
// (BlueprintCallable, BlueprintEvent)

void ACharacterSelectionSwitcher_C::ForgeLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeLoop");

	ACharacterSelectionSwitcher_C_ForgeLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeStart
// (BlueprintCallable, BlueprintEvent)

void ACharacterSelectionSwitcher_C::ForgeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeStart");

	ACharacterSelectionSwitcher_C_ForgeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.BreakEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::BreakEnd(class UAnimMontage** Montage, bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.BreakEnd");

	ACharacterSelectionSwitcher_C_BreakEnd_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeIdleLoop
// (BlueprintCallable, BlueprintEvent)

void ACharacterSelectionSwitcher_C::ForgeIdleLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeIdleLoop");

	ACharacterSelectionSwitcher_C_ForgeIdleLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVictoryPoseChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVictoryPose**           VictoryPose                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnVictoryPoseChanged(class UVictoryPose** VictoryPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVictoryPoseChanged");

	ACharacterSelectionSwitcher_C_OnVictoryPoseChanged_Params params;
	params.VictoryPose = VictoryPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.PropPoseDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::PropPoseDone(class UAnimMontage** Montage, bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.PropPoseDone");

	ACharacterSelectionSwitcher_C_PropPoseDone_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.PoseDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::PoseDone(class UAnimMontage** Montage, bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.PoseDone");

	ACharacterSelectionSwitcher_C_PoseDone_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCharacterRefresh
// (BlueprintCallable, BlueprintEvent)

void ACharacterSelectionSwitcher_C::OnCharacterRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCharacterRefresh");

	ACharacterSelectionSwitcher_C_OnCharacterRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ExecuteUbergraph_CharacterSelectionSwitcher
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACharacterSelectionSwitcher_C::ExecuteUbergraph_CharacterSelectionSwitcher(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ExecuteUbergraph_CharacterSelectionSwitcher");

	ACharacterSelectionSwitcher_C_ExecuteUbergraph_CharacterSelectionSwitcher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
