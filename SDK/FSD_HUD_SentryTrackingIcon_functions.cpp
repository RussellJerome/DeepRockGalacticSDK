// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_SentryTrackingIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryTrackingIcon_C::SetInfo(struct FText* InText, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.SetInfo");

	UHUD_SentryTrackingIcon_C_SetInfo_Params params;
	params.InText = InText;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryTrackingIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.PreConstruct");

	UHUD_SentryTrackingIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.UpdateArrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          inView                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryTrackingIcon_C::UpdateArrow(bool* inView, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.UpdateArrow");

	UHUD_SentryTrackingIcon_C_UpdateArrow_Params params;
	params.inView = inView;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnShow
// (Event, Public, BlueprintEvent)

void UHUD_SentryTrackingIcon_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnShow");

	UHUD_SentryTrackingIcon_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_SentryTrackingIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Construct");

	UHUD_SentryTrackingIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnItemEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnItemEquipped(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnItemEquipped");

	UHUD_SentryTrackingIcon_C_OnItemEquipped_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Update State
// (BlueprintCallable, BlueprintEvent)

void UHUD_SentryTrackingIcon_C::Update_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Update State");

	UHUD_SentryTrackingIcon_C_Update_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryIndexChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnSentryIndexChanged(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryIndexChanged");

	UHUD_SentryTrackingIcon_C_OnSentryIndexChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnInViewChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          inView                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnInViewChanged(bool* inView, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnInViewChanged");

	UHUD_SentryTrackingIcon_C_OnInViewChanged_Params params;
	params.inView = inView;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnAmmoCountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AmmoCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Change                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnAmmoCountChanged(int* AmmoCount, int* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnAmmoCountChanged");

	UHUD_SentryTrackingIcon_C_OnAmmoCountChanged_Params params;
	params.AmmoCount = AmmoCount;
	params.Change = Change;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnTargetSet(class AActor** NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetSet");

	UHUD_SentryTrackingIcon_C_OnTargetSet_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSelectedItemChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARecallableSentryGun**   SentryGun                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnSelectedItemChanged_Event(class ARecallableSentryGun** SentryGun)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSelectedItemChanged_Event");

	UHUD_SentryTrackingIcon_C_OnSelectedItemChanged_Event_Params params;
	params.SentryGun = SentryGun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnDeployProgress_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnDeployProgress_Event(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnDeployProgress_Event");

	UHUD_SentryTrackingIcon_C_OnDeployProgress_Event_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryGunStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARedeployableSentryGun** Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERedeployableSentryGunState*   NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnSentryGunStateChanged(class ARedeployableSentryGun** Sender, ERedeployableSentryGunState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryGunStateChanged");

	UHUD_SentryTrackingIcon_C_OnSentryGunStateChanged_Params params;
	params.Sender = Sender;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetDistanceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnTargetDistanceChanged(float* distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetDistanceChanged");

	UHUD_SentryTrackingIcon_C_OnTargetDistanceChanged_Params params;
	params.distance = distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnRecallableStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARecallableActor**       Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERecallableActorState*         State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnRecallableStateChanged(class ARecallableActor** Sender, ERecallableActorState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnRecallableStateChanged");

	UHUD_SentryTrackingIcon_C_OnRecallableStateChanged_Params params;
	params.Sender = Sender;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.ExecuteUbergraph_HUD_SentryTrackingIcon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryTrackingIcon_C::ExecuteUbergraph_HUD_SentryTrackingIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.ExecuteUbergraph_HUD_SentryTrackingIcon");

	UHUD_SentryTrackingIcon_C_ExecuteUbergraph_HUD_SentryTrackingIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
