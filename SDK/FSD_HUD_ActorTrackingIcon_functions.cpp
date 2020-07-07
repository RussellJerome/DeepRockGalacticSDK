// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ActorTrackingIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           InTint                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ActorTrackingIcon_C::SetInfo(struct FText* InText, class UTexture2D** Texture, struct FLinearColor* InTint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.SetInfo");

	UHUD_ActorTrackingIcon_C_SetInfo_Params params;
	params.InText = InText;
	params.Texture = Texture;
	params.InTint = InTint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetDistanceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ActorTrackingIcon_C::OnTargetDistanceChanged(float* distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetDistanceChanged");

	UHUD_ActorTrackingIcon_C_OnTargetDistanceChanged_Params params;
	params.distance = distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ActorTrackingIcon_C::OnTargetSet(class AActor** NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetSet");

	UHUD_ActorTrackingIcon_C_OnTargetSet_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnPlayerNameChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 NewName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UHUD_ActorTrackingIcon_C::OnPlayerNameChanged(class FString* NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnPlayerNameChanged");

	UHUD_ActorTrackingIcon_C_OnPlayerNameChanged_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnInViewChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          inView                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ActorTrackingIcon_C::OnInViewChanged(bool* inView, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnInViewChanged");

	UHUD_ActorTrackingIcon_C_OnInViewChanged_Params params;
	params.inView = inView;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ActorTrackingIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.PreConstruct");

	UHUD_ActorTrackingIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.UpdateArrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          inView                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ActorTrackingIcon_C::UpdateArrow(bool* inView, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.UpdateArrow");

	UHUD_ActorTrackingIcon_C_UpdateArrow_Params params;
	params.inView = inView;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnShow
// (Event, Public, BlueprintEvent)

void UHUD_ActorTrackingIcon_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnShow");

	UHUD_ActorTrackingIcon_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.ExecuteUbergraph_HUD_ActorTrackingIcon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ActorTrackingIcon_C::ExecuteUbergraph_HUD_ActorTrackingIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.ExecuteUbergraph_HUD_ActorTrackingIcon");

	UHUD_ActorTrackingIcon_C_ExecuteUbergraph_HUD_ActorTrackingIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
