// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Sign_MemorialUnlock_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sign_MemorialUnlock.Sign_MemorialUnlock_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASign_MemorialUnlock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_MemorialUnlock.Sign_MemorialUnlock_C.UserConstructionScript");

	ASign_MemorialUnlock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_MemorialUnlock.Sign_MemorialUnlock_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASign_MemorialUnlock_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_MemorialUnlock.Sign_MemorialUnlock_C.ReceiveBeginPlay");

	ASign_MemorialUnlock_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_MemorialUnlock.Sign_MemorialUnlock_C.ExecuteUbergraph_Sign_MemorialUnlock
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASign_MemorialUnlock_C::ExecuteUbergraph_Sign_MemorialUnlock(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_MemorialUnlock.Sign_MemorialUnlock_C.ExecuteUbergraph_Sign_MemorialUnlock");

	ASign_MemorialUnlock_C_ExecuteUbergraph_Sign_MemorialUnlock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
