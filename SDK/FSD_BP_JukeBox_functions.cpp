// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_JukeBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_JukeBox.BP_JukeBox_C.PayCredits
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Purchased                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_JukeBox_C::PayCredits(class APlayerCharacter** user, int* amount, bool* Purchased)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.PayCredits");

	ABP_JukeBox_C_PayCredits_Params params;
	params.user = user;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Purchased != nullptr)
		*Purchased = params.Purchased;
}


// Function BP_JukeBox.BP_JukeBox_C.OnRep_MusicIndex
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_JukeBox_C::OnRep_MusicIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.OnRep_MusicIndex");

	ABP_JukeBox_C_OnRep_MusicIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JukeBox.BP_JukeBox_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_JukeBox_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.Timeline_0__FinishedFunc");

	ABP_JukeBox_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JukeBox.BP_JukeBox_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_JukeBox_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.Timeline_0__UpdateFunc");

	ABP_JukeBox_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JukeBox.BP_JukeBox_C.OnLoaded_C15A19DC4718016F57823CA232EE5860
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_JukeBox_C::OnLoaded_C15A19DC4718016F57823CA232EE5860(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.OnLoaded_C15A19DC4718016F57823CA232EE5860");

	ABP_JukeBox_C_OnLoaded_C15A19DC4718016F57823CA232EE5860_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JukeBox.BP_JukeBox_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_JukeBox_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_JukeBox_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JukeBox.BP_JukeBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_JukeBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.ReceiveBeginPlay");

	ABP_JukeBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JukeBox.BP_JukeBox_C.ToggleSpeakerRocking
// (BlueprintCallable, BlueprintEvent)

void ABP_JukeBox_C::ToggleSpeakerRocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.ToggleSpeakerRocking");

	ABP_JukeBox_C_ToggleSpeakerRocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_JukeBox_C::BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_JukeBox_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_JukeBox_C::BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_JukeBox_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JukeBox.BP_JukeBox_C.LoadAndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class USoundBase>* Music                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_JukeBox_C::LoadAndPlay(TSoftObjectPtr<class USoundBase>* Music)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.LoadAndPlay");

	ABP_JukeBox_C_LoadAndPlay_Params params;
	params.Music = Music;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JukeBox.BP_JukeBox_C.Stop Juke Box
// (BlueprintCallable, BlueprintEvent)

void ABP_JukeBox_C::Stop_Juke_Box()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.Stop Juke Box");

	ABP_JukeBox_C_Stop_Juke_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JukeBox.BP_JukeBox_C.CheckPartyTimeAchievement
// (BlueprintCallable, BlueprintEvent)

void ABP_JukeBox_C::CheckPartyTimeAchievement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.CheckPartyTimeAchievement");

	ABP_JukeBox_C_CheckPartyTimeAchievement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JukeBox.BP_JukeBox_C.StopJukebox
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_JukeBox_C::StopJukebox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.StopJukebox");

	ABP_JukeBox_C_StopJukebox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JukeBox.BP_JukeBox_C.ExecuteUbergraph_BP_JukeBox
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_JukeBox_C::ExecuteUbergraph_BP_JukeBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.ExecuteUbergraph_BP_JukeBox");

	ABP_JukeBox_C_ExecuteUbergraph_BP_JukeBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
