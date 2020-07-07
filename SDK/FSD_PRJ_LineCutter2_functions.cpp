// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_LineCutter2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.AdjustLineSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APRJ_LineCutter2_C::AdjustLineSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.AdjustLineSize");

	APRJ_LineCutter2_C_AdjustLineSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APRJ_LineCutter2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.UserConstructionScript");

	APRJ_LineCutter2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ProjectileSlowdown__FinishedFunc
// (BlueprintEvent)

void APRJ_LineCutter2_C::ProjectileSlowdown__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.ProjectileSlowdown__FinishedFunc");

	APRJ_LineCutter2_C_ProjectileSlowdown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ProjectileSlowdown__UpdateFunc
// (BlueprintEvent)

void APRJ_LineCutter2_C::ProjectileSlowdown__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.ProjectileSlowdown__UpdateFunc");

	APRJ_LineCutter2_C_ProjectileSlowdown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APRJ_LineCutter2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.ReceiveBeginPlay");

	APRJ_LineCutter2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ExpandLine
// (BlueprintCallable, BlueprintEvent)

void APRJ_LineCutter2_C::ExpandLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.ExpandLine");

	APRJ_LineCutter2_C_ExpandLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.DoDamage
// (BlueprintCallable, BlueprintEvent)

void APRJ_LineCutter2_C::DoDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.DoDamage");

	APRJ_LineCutter2_C_DoDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_LineCutter2_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.ReceiveEndPlay");

	APRJ_LineCutter2_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.StartLineExpansion
// (BlueprintCallable, BlueprintEvent)

void APRJ_LineCutter2_C::StartLineExpansion()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.StartLineExpansion");

	APRJ_LineCutter2_C_StartLineExpansion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.CheckTerrainCall
// (BlueprintCallable, BlueprintEvent)

void APRJ_LineCutter2_C::CheckTerrainCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.CheckTerrainCall");

	APRJ_LineCutter2_C_CheckTerrainCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.Set Line Size Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MaxSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxSizeVisual                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_LineCutter2_C::Set_Line_Size_Event(float* MaxSize, float* MaxSizeVisual)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.Set Line Size Event");

	APRJ_LineCutter2_C_Set_Line_Size_Event_Params params;
	params.MaxSize = MaxSize;
	params.MaxSizeVisual = MaxSizeVisual;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.Multiply Line Size
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Multiplier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_LineCutter2_C::Multiply_Line_Size(float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.Multiply Line Size");

	APRJ_LineCutter2_C_Multiply_Line_Size_Params params;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.K2_OnReset
// (Event, Public, BlueprintEvent)

void APRJ_LineCutter2_C::K2_OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.K2_OnReset");

	APRJ_LineCutter2_C_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.LinelifespanDestroy
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APRJ_LineCutter2_C::LinelifespanDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.LinelifespanDestroy");

	APRJ_LineCutter2_C_LinelifespanDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.Explode
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APRJ_LineCutter2_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.Explode");

	APRJ_LineCutter2_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.LineReducing
// (BlueprintCallable, BlueprintEvent)

void APRJ_LineCutter2_C::LineReducing()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.LineReducing");

	APRJ_LineCutter2_C_LineReducing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ThereCanBeOnlyOne
// (BlueprintCallable, BlueprintEvent)

void APRJ_LineCutter2_C::ThereCanBeOnlyOne()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.ThereCanBeOnlyOne");

	APRJ_LineCutter2_C_ThereCanBeOnlyOne_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.DisableProjectile
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APRJ_LineCutter2_C::DisableProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.DisableProjectile");

	APRJ_LineCutter2_C_DisableProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.Add Line Size
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_LineCutter2_C::Add_Line_Size(float* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.Add Line Size");

	APRJ_LineCutter2_C_Add_Line_Size_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.OnClientInitialized
// (Event, Public, BlueprintEvent)

void APRJ_LineCutter2_C::OnClientInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.OnClientInitialized");

	APRJ_LineCutter2_C_OnClientInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.OnLineDestroyed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult*             Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_LineCutter2_C::OnLineDestroyed(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.OnLineDestroyed");

	APRJ_LineCutter2_C_OnLineDestroyed_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.SetExtraBeamVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_LineCutter2_C::SetExtraBeamVisibility(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.SetExtraBeamVisibility");

	APRJ_LineCutter2_C_SetExtraBeamVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.LeaveTrail
// (BlueprintCallable, BlueprintEvent)

void APRJ_LineCutter2_C::LeaveTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.LeaveTrail");

	APRJ_LineCutter2_C_LeaveTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.StartSpawningTrail
// (Event, Public, BlueprintEvent)

void APRJ_LineCutter2_C::StartSpawningTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.StartSpawningTrail");

	APRJ_LineCutter2_C_StartSpawningTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ExecuteUbergraph_PRJ_LineCutter2
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_LineCutter2_C::ExecuteUbergraph_PRJ_LineCutter2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.ExecuteUbergraph_PRJ_LineCutter2");

	APRJ_LineCutter2_C_ExecuteUbergraph_PRJ_LineCutter2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
