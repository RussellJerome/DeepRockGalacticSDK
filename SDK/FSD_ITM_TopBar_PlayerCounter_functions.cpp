// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TopBar_PlayerCounter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.GetPlayerClass
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  OutPlayerCharacter             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_PlayerCounter_C::GetPlayerClass(class UClass** OutPlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.GetPlayerClass");

	UITM_TopBar_PlayerCounter_C_GetPlayerClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlayerCharacter != nullptr)
		*OutPlayerCharacter = params.OutPlayerCharacter;
}


// Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_TopBar_PlayerCounter_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.Refresh");

	UITM_TopBar_PlayerCounter_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_TopBar_PlayerCounter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.Construct");

	UITM_TopBar_PlayerCounter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.ExecuteUbergraph_ITM_TopBar_PlayerCounter
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_PlayerCounter_C::ExecuteUbergraph_ITM_TopBar_PlayerCounter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.ExecuteUbergraph_ITM_TopBar_PlayerCounter");

	UITM_TopBar_PlayerCounter_C_ExecuteUbergraph_ITM_TopBar_PlayerCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
