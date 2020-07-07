// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_ZipLineGun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.CalcFirstPersonMuzzleLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AWPN_ZipLineGun_C::CalcFirstPersonMuzzleLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.CalcFirstPersonMuzzleLocation");

	AWPN_ZipLineGun_C_CalcFirstPersonMuzzleLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.CanFireWeapon
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   FailMsg                        (Parm, OutParm)
// class UDialogDataAsset*        FailShout                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWPN_ZipLineGun_C::CanFireWeapon(struct FText* FailMsg, class UDialogDataAsset** FailShout)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.CanFireWeapon");

	AWPN_ZipLineGun_C_CanFireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FailMsg != nullptr)
		*FailMsg = params.FailMsg;
	if (FailShout != nullptr)
		*FailShout = params.FailShout;

	return params.ReturnValue;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_ZipLineGun_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetGearStatEntry");

	AWPN_ZipLineGun_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetCrosshair
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHUD_Crosshair_ZiplineGun_C* Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWPN_ZipLineGun_C::GetCrosshair(class UHUD_Crosshair_ZiplineGun_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetCrosshair");

	AWPN_ZipLineGun_C_GetCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.Update Line Of Sight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DidHit                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ZipLineGun_C::Update_Line_Of_Sight(struct FVector* Direction, struct FVector* End, bool* DidHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.Update Line Of Sight");

	AWPN_ZipLineGun_C_Update_Line_Of_Sight_Params params;
	params.Direction = Direction;
	params.End = End;
	params.DidHit = DidHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.Negate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWPN_ZipLineGun_C::Negate(float* Value, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.Negate");

	AWPN_ZipLineGun_C_Negate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.Between
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBetween                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWPN_ZipLineGun_C::Between(float* Value, float* Min, float* Max, bool* IsBetween)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.Between");

	AWPN_ZipLineGun_C_Between_Params params;
	params.Value = Value;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBetween != nullptr)
		*IsBetween = params.IsBetween;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.Can Fire
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   FailMsg                        (Parm, OutParm)
// class UDialogDataAsset*        FailShout                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CanShoot                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWPN_ZipLineGun_C::Can_Fire(struct FText* FailMsg, class UDialogDataAsset** FailShout, bool* CanShoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.Can Fire");

	AWPN_ZipLineGun_C_Can_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FailMsg != nullptr)
		*FailMsg = params.FailMsg;
	if (FailShout != nullptr)
		*FailShout = params.FailShout;
	if (CanShoot != nullptr)
		*CanShoot = params.CanShoot;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetStartLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AWPN_ZipLineGun_C::GetStartLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetStartLocation");

	AWPN_ZipLineGun_C_GetStartLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.LineTrace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HitAny                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWPN_ZipLineGun_C::LineTrace(struct FHitResult* OutHit, struct FVector* Direction, float* distance, bool* HitAny)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.LineTrace");

	AWPN_ZipLineGun_C_LineTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	if (Direction != nullptr)
		*Direction = params.Direction;
	if (distance != nullptr)
		*distance = params.distance;
	if (HitAny != nullptr)
		*HitAny = params.HitAny;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.ClientShoot
// (BlueprintCallable, BlueprintEvent)

void AWPN_ZipLineGun_C::ClientShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.ClientShoot");

	AWPN_ZipLineGun_C_ClientShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ZipLineGun_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.ReceiveTick");

	AWPN_ZipLineGun_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveStopUsing
// (Event, Protected, BlueprintEvent)

void AWPN_ZipLineGun_C::RecieveStopUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveStopUsing");

	AWPN_ZipLineGun_C_RecieveStopUsing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.AddedToInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       ItemOwner                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ZipLineGun_C::AddedToInventory(class APlayerCharacter** ItemOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.AddedToInventory");

	AWPN_ZipLineGun_C_AddedToInventory_Params params;
	params.ItemOwner = ItemOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveStartUsing
// (Event, Protected, BlueprintEvent)

void AWPN_ZipLineGun_C::RecieveStartUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveStartUsing");

	AWPN_ZipLineGun_C_RecieveStartUsing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_ZipLineGun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.ReceiveBeginPlay");

	AWPN_ZipLineGun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget**            Crosshair                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWPN_ZipLineGun_C::BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(class UUserWidget** Crosshair)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature");

	AWPN_ZipLineGun_C_BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature_Params params;
	params.Crosshair = Crosshair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AWPN_ZipLineGun_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveEquipped");

	AWPN_ZipLineGun_C_RecieveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AWPN_ZipLineGun_C::BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature");

	AWPN_ZipLineGun_C_BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.ExecuteUbergraph_WPN_ZipLineGun
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ZipLineGun_C::ExecuteUbergraph_WPN_ZipLineGun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.ExecuteUbergraph_WPN_ZipLineGun");

	AWPN_ZipLineGun_C_ExecuteUbergraph_WPN_ZipLineGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
