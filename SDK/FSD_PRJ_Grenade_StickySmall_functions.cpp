// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_Grenade_StickySmall_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.OnRep_stick
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void APRJ_Grenade_StickySmall_C::OnRep_stick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.OnRep_stick");

	APRJ_Grenade_StickySmall_C_OnRep_stick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.OnImpacted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APRJ_Grenade_StickySmall_C::OnImpacted(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.OnImpacted");

	APRJ_Grenade_StickySmall_C_OnImpacted_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APRJ_Grenade_StickySmall_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.ReceiveBeginPlay");

	APRJ_Grenade_StickySmall_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.Boom
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APRJ_Grenade_StickySmall_C::Boom()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.Boom");

	APRJ_Grenade_StickySmall_C_Boom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.Beep
// (BlueprintCallable, BlueprintEvent)

void APRJ_Grenade_StickySmall_C::Beep()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.Beep");

	APRJ_Grenade_StickySmall_C_Beep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.ExecuteUbergraph_PRJ_Grenade_StickySmall
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APRJ_Grenade_StickySmall_C::ExecuteUbergraph_PRJ_Grenade_StickySmall(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.ExecuteUbergraph_PRJ_Grenade_StickySmall");

	APRJ_Grenade_StickySmall_C_ExecuteUbergraph_PRJ_Grenade_StickySmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
