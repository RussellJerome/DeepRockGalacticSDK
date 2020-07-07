// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OnScreenIndicator_Actor_Shout_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.SetShoutLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D*              Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          OwnShout                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_Actor_Shout_C::SetShoutLocation(class UUserWidget** Widget, struct FVector2D* Position, bool* OwnShout)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.SetShoutLocation");

	UOnScreenIndicator_Actor_Shout_C_SetShoutLocation_Params params;
	params.Widget = Widget;
	params.Position = Position;
	params.OwnShout = OwnShout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.UpdateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOnScreenIndicator_Actor_Shout_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.UpdateIcon");

	UOnScreenIndicator_Actor_Shout_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.IsOwnShout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnScreenIndicator_Actor_Shout_C::IsOwnShout()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.IsOwnShout");

	UOnScreenIndicator_Actor_Shout_C_IsOwnShout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Shout
// (Public, BlueprintCallable, BlueprintEvent)

void UOnScreenIndicator_Actor_Shout_C::Shout()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Shout");

	UOnScreenIndicator_Actor_Shout_C_Shout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.CalculateScreenPos
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UOnScreenIndicator_Actor_Shout_C::CalculateScreenPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.CalculateScreenPos");

	UOnScreenIndicator_Actor_Shout_C_CalculateScreenPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.InViewport
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D*              Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_Actor_Shout_C::InViewport(struct FVector2D* Pos, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.InViewport");

	UOnScreenIndicator_Actor_Shout_C_InViewport_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.IsSenderBehind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ToSender                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnScreenIndicator_Actor_Shout_C::IsSenderBehind(struct FVector* ToSender)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.IsSenderBehind");

	UOnScreenIndicator_Actor_Shout_C_IsSenderBehind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ToSender != nullptr)
		*ToSender = params.ToSender;

	return params.ReturnValue;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOnScreenIndicator_Actor_Shout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Construct");

	UOnScreenIndicator_Actor_Shout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Update Widget
// (BlueprintCallable, BlueprintEvent)

void UOnScreenIndicator_Actor_Shout_C::Update_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Update Widget");

	UOnScreenIndicator_Actor_Shout_C_Update_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_Actor_Shout_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Tick");

	UOnScreenIndicator_Actor_Shout_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.OnShout
// (Event, Protected, BlueprintEvent)

void UOnScreenIndicator_Actor_Shout_C::OnShout()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.OnShout");

	UOnScreenIndicator_Actor_Shout_C_OnShout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_Actor_Shout_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.PreConstruct");

	UOnScreenIndicator_Actor_Shout_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.ExecuteUbergraph_OnScreenIndicator_Actor_Shout
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_Actor_Shout_C::ExecuteUbergraph_OnScreenIndicator_Actor_Shout(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.ExecuteUbergraph_OnScreenIndicator_Actor_Shout");

	UOnScreenIndicator_Actor_Shout_C_ExecuteUbergraph_OnScreenIndicator_Actor_Shout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
