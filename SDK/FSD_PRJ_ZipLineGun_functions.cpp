// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_ZipLineGun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.GetNearestPointOnLine
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector*                WorldPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                LineStart                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                LineEnd                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NearestLinePosition            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APRJ_ZipLineGun_C::GetNearestPointOnLine(struct FVector* WorldPosition, struct FVector* LineStart, struct FVector* LineEnd, struct FVector* NearestLinePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.GetNearestPointOnLine");

	APRJ_ZipLineGun_C_GetNearestPointOnLine_Params params;
	params.WorldPosition = WorldPosition;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NearestLinePosition != nullptr)
		*NearestLinePosition = params.NearestLinePosition;
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.Finish Zip Line
// (Public, BlueprintCallable, BlueprintEvent)

void APRJ_ZipLineGun_C::Finish_Zip_Line()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.Finish Zip Line");

	APRJ_ZipLineGun_C_Finish_Zip_Line_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APRJ_ZipLineGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.UserConstructionScript");

	APRJ_ZipLineGun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.On Hit
// (BlueprintCallable, BlueprintEvent)

void APRJ_ZipLineGun_C::On_Hit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.On Hit");

	APRJ_ZipLineGun_C_On_Hit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_ZipLineGun_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	APRJ_ZipLineGun_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.OnShoot
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                EndLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_ZipLineGun_C::OnShoot(struct FVector* Origin, struct FVector* EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.OnShoot");

	APRJ_ZipLineGun_C_OnShoot_Params params;
	params.Origin = Origin;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_ZipLineGun_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveTick");

	APRJ_ZipLineGun_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.SetCollider
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APRJ_ZipLineGun_C::SetCollider()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.SetCollider");

	APRJ_ZipLineGun_C_SetCollider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APRJ_ZipLineGun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveBeginPlay");

	APRJ_ZipLineGun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.All_ConnectWithZipLine
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         VerticalSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_ZipLineGun_C::All_ConnectWithZipLine(struct FVector* Location, float* VerticalSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.All_ConnectWithZipLine");

	APRJ_ZipLineGun_C_All_ConnectWithZipLine_Params params;
	params.Location = Location;
	params.VerticalSpeed = VerticalSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ExecuteUbergraph_PRJ_ZipLineGun
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_ZipLineGun_C::ExecuteUbergraph_PRJ_ZipLineGun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ExecuteUbergraph_PRJ_ZipLineGun");

	APRJ_ZipLineGun_C_ExecuteUbergraph_PRJ_ZipLineGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
